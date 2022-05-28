#include <stdio.h>

#define S_SIZE 10

int stack[S_SIZE];
int top = -1;

int IsEmpty(){

    if(top < 0){
        return 1;
    }
    else{
        return 0;
    }

}

int IsFull(){
    
    if(top >= S_SIZE){
        return 1;
    }
    else{
        return 0;
    }

}

void push(int value){

    if(IsFull()){
        printf("Stack is Full..");
    }
    else{
        stack[++top] = value;
    }

}

int pop(){

    if(IsEmpty()){
        printf("Stack is Empty..");
    }
    else{
        return stack[top--];
    }

}

int print_stack(){
    for(int i = 0; i<=top; i++){
        printf("%d\t", stack[i]);
    }
    printf("\n");
}

int main(){

    push(1);
    push(2);
    push(3);

    print_stack();
    pop();
    print_stack();
    pop();
    print_stack();
    pop();   

    return 0;
}