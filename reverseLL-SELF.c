#include <stdlib.h>
#include <stdio.h>

struct node{
     int data;
     struct node *link;
};
 struct node* root = NULL;
int len;

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

int length(){
    int count=0;
    struct node* temp;
    
    if(root==NULL)
    return -1;
    
    temp=root;
    while(temp->link!=NULL){
         temp=temp->link;
         count++;
    }
    return count;
}

void delete(){
     if(root==NULL){
          printf("Linked List is empty");
     }
     else{
          struct node* p=root;
          struct node* q;
          int len=length();
          int i;
          
          while(i<len-1){
               p=p->link;
               i++;
          }
          q=p->link;
          p->link=q->link;
          q->link=NULL;
          free(q);
          
          display();
          printf("Last node has been deleted.\n");
     }
}


void reverse(){
    int len=length();
    struct node *p;
    struct node *q;
    int k;
    int temp;
    p=q=root;
    int i, j;
    i=0;
    j=len;
    
    while(i<j){
        k=0;
        while(k<j){
             q=q->link;
             k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
        p=p->link;
        q=root;
    }
    display();    
}

int delete_kth(){
     int k;
      scanf("Location of node to be deleted: %d", &k);

      if(root==NULL){
          printf("Linked List is empty");
     }
     else{
          struct node* p=root;
          struct node* q;
          int i;
          while(i<k-1){
               p=p->link;
               i++;
          }
          q=p->link;
          p->link=q->link;
          q->link=NULL;
          free(q);
          
          display();
          printf("Kth node has been deleted.\n");
     }


}


int main()
{
    while(1){
        int n,len,k;
        printf("1. Append 2. display 3. Delete 4. Length 5. Reverse\n");
        scanf("%d", &n);
        switch(n){
            case 1: append();
            break;
            case 2: display();
            break;
            case 3: delete();
            break;
            case 4: 
            len=length();
            printf("lenght is %d\n", len);
            break;
            case 5: reverse();
            break;
            case 6: delete_kth();
            break;
            default: printf("Invalid Input");
            break;
            case 0: exit(1);
        }
    }
    return 0;
}
