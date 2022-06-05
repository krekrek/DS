// 스택의 경우 이해하기 쉬워 간단하게 push, pop을 실행하고 결과를 출력해주는 코드를 작성했지만,
// 큐의 경우 데이터가 잘 들어가고 나오는지를 확인하기 위해 메뉴루틴을 추가하였음.
#include <stdio.h>
#include <stdbool.h>

#define Q_SIZE 10

int queue[Q_SIZE];
int front = -1;
int rear = -1;

int IsEmpty(){

    if (front == rear){
        return true;
    }
    else {
        return false;
    }

}
int IsFull(){

    int check = (rear+1)%Q_SIZE;
    if (check == front){
        return true;
    }
    else {
        return false;
    }

}

void insert(int value){

    if (IsFull()){
        printf("Queue is Full..");
    }
    else {
        rear = (rear+1)%Q_SIZE;
        queue[rear] = value;
    }

}
int delete(){

    if (IsEmpty()){
        printf("Queue is Empty..");
    }
    else {
        front = (front+1)%Q_SIZE;
        return queue[front];
    }

}

int print_queue(){

    for (int i = front+1; i<=rear; i++){
        printf("%d\t", queue[i]);
    }
    printf("\n");

}

int main(){

    int menu = 0;
    int insert_value = 0;

    while (menu!=4){
        printf("\n--- MENU ---\n");
        printf("1. Insert\t2. Delete\t3. Print Queue\t4. Exit\n");
        scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                printf("\nInsert: ");
                scanf("%d", &insert_value);
                printf("\n");
                insert(insert_value);
                break;

            case 2:
                printf("\nDelete %d\n", delete());
                break;

            case 3:
                printf("\n--- Print Queue ---\n");
                print_queue();
                break;

            case 4:
                printf("\nExit..\n");
                break;

            default:
                printf("\nNot in menu..\n");
                break;
        }
    }
    
    return 0;

}