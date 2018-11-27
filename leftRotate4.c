#include<stdio.h>

void reverse(int arr[],int d,int len)
{
	while(len>d)
	{
		int temp=arr[d];
		arr[d]=arr[len];
		arr[len]=temp;
		d++;
		len--;

	}

}
void rotate(int arr[],int d,int len)
{

	reverse(arr,0,d-1);
	reverse(arr,d,len-1);
	reverse(arr,0,len-1);


}

void print(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
}
void main()
{
	int d,arr[]={1,2,3,4,5,6};
	int len=(sizeof(arr)/sizeof(arr[0]));
	printf("\nlen=%d",len);
	printf("\n d:");
	scanf("%d",&d);

	rotate(arr,d,len);
	print(arr,len);
}

