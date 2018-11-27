#include<stdio.h>
void pair(int a[],int n,int val)
{
	int f=0;
	int r=n-1;//5
	while(f!=r)
	{
		if((a[f]+a[r])>val)
		{
			r--;
		}
		else if(a[f]+a[r]<val)
		{
			f++;
		}
		else
		{
			printf("\n %d \t %d",a[f],a[r]);
			break;
		}
	}
}

void main()
{
	int i,j,a[]={11,15,6,8,9,10};
	int len=(sizeof(a)/sizeof(a[0]));
	//printf("%d",len);
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		printf("\t%d",a[i]);
	}
	int value;
	printf("\n value:");
	scanf("%d",&value);
	pair(a,len,value);

}
