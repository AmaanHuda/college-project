
#include <stdio.h>
#define N 5
int stack[N];
int top=-1;

void push(){
    int x;
    printf("Enter the number you want to insert: ");
    scanf("%d",&x);
    if(top==N-1){
        printf("Overflow \n");
    }else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("The stack is empty \n");
    }else{
        printf("Removed %d \n",stack[top]);
        top--;
    }
}

void display(){
    if (top==-1){
        printf("Underflow\n");
    }else{

        for(int i=top;i>=0;i--){
            printf("%d \n",stack[i]);
    }
    }
   
}

void peek(){
    if(top==-1){
        printf("Empty Stack\n");
    }
    else{
        printf("The top element is: %d \n",stack[top]);
    }
}
int main() {
    // Write C code here
    int choice;
    do{
        printf("\nPush-1;Pop-2;Display-3;Peek-4; Break-5\nEnter your choice: ");
        scanf("%d",&choice);
        
        switch (choice){
            case 1: push();break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek();break;
            case 5: printf("Exiting.");break;
            default: printf("Invalid choice\n");}

    } while(choice!=5);

    return 0;
}