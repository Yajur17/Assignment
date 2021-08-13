#include <stdlib.h>
#include <stdio.h>

struct node{
     int data;
     struct node *link;
};
 struct node* root = NULL;
int len;

void append(){
     struct node *temp;
     
     temp=(struct node*)malloc(sizeof(struct node));
     
     scanf("%d", & temp->data);
     
     temp->link=NULL;
     
     if(root==NULL){
          root=temp;
     }
     else{
          struct node *p;
          p=root;
          
          while(p->link!=NULL){
               p=p->link;
          }
          p->link=temp;
     }
}


int lenght(){
    int count=0;
    struct node* temp;
    
    temp=root;
    while(temp->link!=NULL){
         temp=temp->link;
         count++;
    }
    return count;
}

void display(){
     struct node*temp;
     temp=root;
     if(root==NULL){
          printf("List is empty");
     }
     else{
          while(temp!=NULL){
               printf("%d", temp->data);
               temp=temp->link;
          }
          printf("\n");
     }
}

int main()
{
    
   
    
    while(1){
        int n;
        printf("1. Append or 2. display\n");
        scanf("%d", &n);
        switch(n){
            case 1: append();
            break;
            case 2: display();
            break;
            default: printf("Invalid Input");
            break;
            case 0: exit(1);
        }
    }
        
  
   

    return 0;
}
