#include<stdio.h>
void sum(int a[],int len)
{
	int i,max=0,temp;
	for(int j=0;j<len;j++)
	{	
		temp=a[0];
		for(i=0;i<len;i++)
		{
			a[i]=a[i+1];
		}
		a[len]=temp;
		printf("\n");
		for(i=0;i<=len;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
		int sum1=0;
		for(i=0;i<=len;i++)
		{
			sum1=sum1+(i*a[i]);
			//printf("..%d\t",sum);
		}
		//printf("\n sum=%d",sum1);

		if(max<sum1)
		{
			max=sum1;
		}
	}
printf("\nmax= %d",max);
}
void main()
{
	int a[]={10,1,2,3,4,5,6,7,8,9};
	int len=(sizeof(a)/(sizeof a[0]));
	//printf("\n %d",len);
	len=len-1;
	sum(a,len);

}
