//
// Created by adhak on 19-02-2024.
//
//implementation of stack operations

#include <stdio.h>

int stack[5];
int top;

void push(int x){
    if(top>10){
        printf("stack is full");
    } else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    int y;
    if(top==-1){
        printf("stack is empty");
    } else{
        y=stack[top];
        top--;
        printf("Deleted element: %d",y);
    }
}

void peek(){
    if(top==-1) {
        printf("stack is empty");
    } else{
        printf("%d",stack[top]);
    }
}

void display(){
    int i;
    for(i=top; i>=0; i--){
        printf("%d",stack[i]);
    }
}

int main(){
    printf("enter elements in stack: \n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d , ",&stack[i]);
    }

    peek();
    printf("\n");
    pop();
    printf("\n");
    push(12);
    printf("\n");
    display();
    return 0;
}