// arr=[1,2,3,4,5] r=2 then temp=[1,2],arr[3,4,5] then add a into arr op=[3,4,5,1,2]

#include<stdio.h>
int main()
{

	int i,n,arr[]={1,2,3,4,5},temp[10];
	int j=0;
	printf("\n no of rotation:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		temp[i]=arr[i];
		//printf("%d\t",temp[i]);
	}
	for(i=n;i<5;i++)
	{
		arr[j]=arr[i];
		j++;

	}
	for(i=0;i<n;i++)
	{
		arr[j]=temp[i];
		j++;

	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
}

