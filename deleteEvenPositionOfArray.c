#include<stdio.h>

int  check(int a[],int len)
{
int lent=len;
printf("%d\n",lent);
	for(int i=len;i>0;i--)
	{
		if(i%2==0)
		{
			int j=i-1;
			lent--;
			while(j<lent)
			{
				//printf("\ni=%d\tj=%d\tlent=%d\n",i,j,lent);
				a[j]=a[j+1];
				//printf("a[j]=%d\ta[j+1]=%d",a[j],a[j+1]);
				j++;
				
				
			}
			//printf("\n\n");
		}
	}
	for(int i=0;i<lent;i++)
	{
		printf("%d\t",a[i]);
	}
}

void print(int a[],int len)
{

	
}


void main()
{
	int a[]={2,3,1,4,6,5,7};
	int len=sizeof(a)/sizeof(a[0]);
//	for(int i=0;i<len;i++)
//	{
//		printf("%d\t",a[i]);
//	}
check(a,len);
printf("\n");
//print(a,len);
}
