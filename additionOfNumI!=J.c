#include<stdio.h>
void sum1(int array[],int len)
{
    int i,sum=0,j=0,temp[20];
    for(i=0;i<len;i++)
    {
        sum=0;
        for(j=0;j<len;j++)
        {    
            if(i!=j)
            {
                sum=sum+array[j];
                printf("%d\t",sum);
            }  
        }
        printf("\n");
    }

}
void main()
{
    int array[]={4,2,6,8,2};
    int size=sizeof(array)/sizeof(array[0]);
    //printf("%d",size);
    sum1(array,size);
}
