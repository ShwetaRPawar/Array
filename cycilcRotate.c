#include<stdio.h>

void cycrotate(int arr[],int len)
{
	int x=arr[len];
	while(len!=0)
	{
		arr[len]=arr[len-1];
		len--;

	}
arr[0]=x;

}
void print(int arr[],int len)
{
	for(int i=0;i<=len;i++)
	{
		printf("\t %d",arr[i]);
	}
}
void main()
{
	int arr[]={1,2,3,4,5,6};
	int len=(sizeof(arr)/sizeof(arr[0]));
	len=len-1;
	cycrotate(arr,len);
	print(arr,len);

}
