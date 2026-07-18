
#include <stdio.h>
#define N 5
int rear = -1;
int front =-1;
int array[N];

void equeue(){
    int num;
    printf("Enter the number you want to add: ");
    scanf("%d",&num);
    if((rear+1)%N==front){
        printf("Overflow");
    }
    else if(front==-1 && rear==-1){
        
        front=rear=0;
        array[rear]=num;
    }else{
        rear=(rear+1)%N;
        array[rear]= num;
      
    }
}

void dequeue(){
    if(rear==-1&&front==-1){
        printf("Underflow\n");
    }else if(rear==front){
         printf("%d deleted\n",array[front]);
        rear=front=-1;
    }else{
        printf("%d deleted\n",array[front]);
        front= (front+1)%N;
        
    }
}
void peek(){
    printf("THe top most element is: %d",array[front]);
}
void display(){
    for(int x=0;x<=N-1;x++){
        printf("%d\n",array[x]);
    }
}
int main() {
    // Write C code here
    int loop =0;

    do{
    int choice;
    printf("1- Enqueue 2- Dequeue 3-Peek 4-Display 5-Exit\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice){
        case 1: equeue();
            break;
        case 2: dequeue();
            break;
        case 3: peek();break;
        case 4: display();break;
        case 5: printf("Exiting..");loop=1;break;
}}while(loop==0);
    
    return 0;
}