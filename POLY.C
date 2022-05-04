
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct polynomial{
int coef;
int power;
struct polynomial *next;
}node;

void main(){
node * head=NULL;
clrscr();
int c,p,i,n;
void insert_at_beg(node **,int,int);
void traverse(node *);
printf("enter value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter cofficient and power of term %d " ,i);
scanf("%d%d",&c,&p);
insert_at_beg(&head,c,p);
}
traverse(head);
getch();
}
void traverse(node * head)
{
while(head !=NULL)
{
printf("%d x^%d +",head->coef,head->power);
head = head->next;
}
}
void insert_at_beg(node ** head,int c,int p)
{
node *temp;
temp=(node *)malloc(sizeof(node));
temp->coef=c;
temp->power=p;
temp->next = * head;
*head=temp;
}
