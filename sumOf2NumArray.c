#include<stdio.h>
int main()
{
int i=0,j=0,n=0,a[10],num,var=0,var1=0;
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
printf("\nenter the sum of 2 num:");
scanf("%d",&num);
for(j=n;j>0;j--)
	{
	while(a[j]<num)
		{
		for(i=0;i<j;i++)
			{
				if((a[j]+a[i])==num)
				{
					printf("%d\t%d\n",a[i],a[j]);
				}
			}
			break;
		}
		
//	break;
	
	}
}
