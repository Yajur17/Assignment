#include<stdio.h>
#include<conio.h>

#define max 7
int q[max];
int front=0;
int rear=0;

//inserting element in the queue
int enqueue(int val){
    if(rear==max){
         printf("Overflow\n");  }
    else{
        rear++;
        q[rear]=val; } }

//removing the first element in the queue
int dequeue(){
    int x=-1;
     if(front==rear){
          printf("Underflow\n");
     }
     else{
         for(int i=0;i<rear;i++){
              q[i]=q[i+1];  }
         rear--;  }
}
         
//displaying the queue          
int display(){
    for(int i=front+1;i<=rear;i++){
         printf("%d", q[i]);     }
    printf("\n"); }
//displaying the last element of the queue
int peek(){
     if(front>=0 && front<rear)
		return q[front+1];
	else
		return -1;
}

int is_empty(){
     if(rear==0)
        return 1;
    else 
        return 0;
}

int main()
{ int pk;
   enqueue(1);
   display();
   enqueue(2);
   display();
   enqueue(3);
   display();
   enqueue(4);
   display();
   enqueue(5);
   display();
   enqueue(6);
   display();
   enqueue(7);
   display();
   dequeue();
   display();
   printf("Peek of the Queue is: %d\n", peek());
   dequeue();
   printf("If Queue is empty: %d\n", is_empty());
   
   printf("Peek of the Queue is: %d\n", peek());
   dequeue();
   printf("Peek of the Queue is: %d\n", peek());
   dequeue();
   printf("Peek of the Queue is: %d\n", peek());
   dequeue();
   printf("Peek of the Queue is: %d\n", peek());
   
   printf("If Queue is empty: %d\n", is_empty());
   
   dequeue();
   printf("Peek of the Queue is: %d\n", peek());
   dequeue();
   printf("If Queue is empty: %d\n", is_empty());
   dequeue();
   printf("If Queue is empty: %d\n", is_empty());
   dequeue();
   printf("If Queue is empty: %d\n", is_empty());
   
}