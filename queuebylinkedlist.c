#include<stdio.h>
#include<malloc.h>
#include<process.h>
typedef struct nodetype
{
    int no;
   struct nodetype * next;
}node;
node* Enqueue (node *p,node*rear)
{ 
    printf("Enter no: ");
    scanf("%d",&p->no);
    rear->next=p;
    rear=p;
    rear->next=NULL;
    return rear;   
}
node* Dequeue(node *front,node *rear)
{
    if(front==NULL)
    printf("Nothing To delete");
    else if(front==rear)
    front=rear=NULL;
    else
    {
       node * temp=front;
        printf("%d",temp->no);
        front=front->next;
        free(temp);
    }
    return front;
}
void display(node *front)
{
    if(front==NULL){
    printf("Nothing to display");
    exit(1);
}
    while(front!=NULL)
    {printf("%d ",front->no);
    front=front->next;
}
}

int main()
{
node *front=NULL,*rear=NULL;
int ch,n;
do{
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Display");
    printf("\n4.Exit");
scanf("%d",&ch);
if(ch==1){
    node *p=(node*)malloc(sizeof(node*));
    if(p==NULL)
    printf("No space");
else if(rear==NULL)
{
    front=p;
printf("Enter no: ");
    scanf("%d",&p->no);
    rear=p;
    p->next=NULL;
    }
else
rear=Enqueue(p,rear);
}
else if(ch==2)
front=Dequeue(front,rear);
else if(ch==3)
display(front);
}
while(ch!=4);

    return 0;
}