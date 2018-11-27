#include<stdio.h>
#include<stdlib.h>
 struct Node
{
int data;
struct Node *next;
};

void printlist(struct Node *temp)
{
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL\n");
}

void searchfromlast(struct Node *head,int index)
{
int count=0,s=0,cnt=1;
struct Node *temp;
temp=head;
while(temp!=NULL)
{
	temp=temp->next;
	count++;
	
}
printf("\nc=%d",count);
s=(count-index);
printf("\ns=%d",s);
temp=head;
/*while(temp!=NULL)
{
	if(cnt==s)
	{
	printf("\n from %d end is %d",index,temp->data);
	}
cnt++;
temp=temp->next;
}*/
int i;
for(i=0;i<s;i++)
{
temp=temp->next;
}
printf("\nfrom %d end id %d\n",index,temp->data);
}
int main()
{
int i,n,index=0;
struct Node *head=NULL,*temp=NULL;
printf("\nnodes:");
scanf("%d",&n);
printf("\nele:");
head=(struct Node *)malloc(sizeof(struct Node));
scanf("%d",&head->data);
head->next=NULL;
temp=head;
for(i=1;i<n;i++)
{
temp->next=(struct Node *)malloc(sizeof(struct Node));
temp=temp->next;
temp->next=NULL;
scanf("%d",&temp->data);
}
printlist(head);
printf("\nend Index:");
scanf("%d",&index);
searchfromlast(head,index);
return 0;
}

