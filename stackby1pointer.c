#include<stdio.h>
#include<malloc.h>
typedef struct nodetype{
    int no;
    struct nodetype *next;
}node;
node* push(node *top,int no){
    node *p=(node*)malloc(sizeof(node));
if(p==NULL)
printf("No space");
else
{
   p->no=no;
   p->next=top;
   top=p;
}
 return top;
}
node* pop(node *top)
{
if(top==NULL)
printf("Nothing to delete");
else
{ node* temp;
    printf("%d",top->no);
    temp=top;
    top=top->next;
    free(temp);
}
return top;
}
void display(node *top)
{
    if(top==NULL)
printf("Nothing to Show");
else
for(;((top)!=NULL);top=top->next)
printf("%d ",top->no);
}
int main()
{
    int ch,n;
    node *top=NULL;
    do
    {
    printf("\n1.For entering a no");
    printf("\n2.For Deleting a no");
    printf("\n3.For Displaying a no");
    printf("\n4.Exit");
    scanf("%d",&ch);
    if(ch==1)
    {
     printf("Enter no to input");
     scanf("%d",&n);
     top=push(top,n);
    }
     else if(ch==2)
     top=pop(top);
     else if(ch==3)
         display(top);
     else
         printf("Wrong choice");
}while(ch!=4);
free(top);
return 0;
}