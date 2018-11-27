
#include<stdio.h>
int main()
{
	int n=0,i=0,j=0,min=0,index=0,l=0,temp1=0,temp=0,a[10];
	printf("\nnum:");
	scanf("%d",&n);
	printf("\nnumbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray:");
	for(i=0;i<n;i++)				
	{
		 printf("%d\t",a[i]);
	 }

	for(i=0;i<n;i++)
	{
		l=n-1;
		temp=a[l];
		for(j=l;j>i;j--)
		{
			a[j]=a[j-1];
		}
		a[i]=temp;
	}
	printf("\nReverse array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
