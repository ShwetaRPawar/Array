#include<stdio.h>
void main()
{
int a[]={2,4,3,5,6,7,8,11};
int len=sizeof(a)/4;
int i,j,counter;
for(i=0;i<len;i++)
{
	counter=0;
	for(j=2;j<a[i];j++)
	{
		if(a[i]%j==0)
		{
			counter=1;
			break;
		}
	}

	if(counter==0)
	{
	printf("%d\t",a[i]);
	}
}

}
