//6210407978 Paramee Rattanakitsananon
#include <stdio.h> 
#include <stdlib.h> 

struct node { 
   int data; 
   struct node *next; 
}; 

struct node*first = NULL, *last=NULL;

void print(){
  struct node *tmp;
  for(tmp=first;tmp;tmp=tmp->next){
    printf("%d\n",tmp->data);}}

void makelist(int input){
  struct node *new=(struct node*)malloc(sizeof(struct node));
  new->data=input;
  new->next=NULL;
  if (first==NULL)
  {
    last=new;
    first=new;
  }
  else
  {
    last->next=new;
    last=new;
   }
}

int main() 
{ int input;
  scanf("%d",&input);
  while(input!=-1)
   {
    makelist(input);
    scanf("%d",&input);
   }
  print();
  
}
