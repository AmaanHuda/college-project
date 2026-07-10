#include <stdio.h>

int main(){
    int n,x,count=0;
    int firstPosition = 1;
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    
    printf("Enter the elment whose occurence you would like to find: ");
    scanf("%d",&x);
    
    for(int i=0; i<n;i++){
        if(array[i]==x){
            count++;
            printf("The first position of the element is %d and it occurs %d time",firstPosition,count);
        }else{
            firstPosition++;
        }
        
    }
    
    return 0;
}