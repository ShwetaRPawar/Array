#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
{
//printf("\na=%d\n",a);
return a;
}
else
{

gcd(b,a%b);
}
}

int main()
{
	int n,arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int temp=0,i,j;
	static int g;
	printf("\n rotation:");
	scanf("%d",&n);

	g=gcd(12,n);
	//printf("%d",g);

	for(i=0;i<g;i++)
	{
		int temp=arr[i];
		j=i;

		while(1)
		{
			int k=j+n;

			if(k>=12)
			{
				k=k-12;
			}

			if(k==i)
			{
				break;
			}
			arr[j]=arr[k];
			j=k;

		}//while
		arr[j]=temp;

	}//for
	for(i=0;i<12;i++)
	{
		printf("\t%d",arr[i]);
	}
}
