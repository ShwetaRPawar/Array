//arr[1,2,3,4,5] r=2 then arr=[2,3,4,5,1] and [3,4,5,1,2]

#include<stdio.h>
int main()
{
	int i,n,arr[]={1,2,3,4,5};
	int j,temp=0;
	printf("\n num of rotation:");
	scanf("%d",&n);
	while(n!=0)
	{
		temp=arr[0];
		//printf("\n..%d",temp);
		for(i=0;i<4;i++)
		{
			arr[i]=arr[i+1];
			//printf("\n %d\t%d",i,arr[i]);
		}
		arr[4]=temp;
		//printf("\n..%d",arr[4]);

		n--;
	}

	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}

}
