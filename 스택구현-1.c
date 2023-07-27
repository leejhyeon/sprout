#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100
typedef int element; //int를 element로 재정의
//문제) 스택 구조체 변수 정의 
typedef struct {
	int top;
	int data[MAX_STACK_SIZE];
} Stack;
Stack s;

//문제) 전역변수로 스택 구조체 선언선언
void initStack(){
	s.top = -1;
}
bool isEmpty(){
	if (s.top == -1) return true;
	else return false;
}
bool isFull(){
	if (s.top == MAX_STACK_SIZE - 1) return true;
	else return false;
}	 
void push(element item){ // item = 2;
	if (isFull()) {
		printf("Stack is Full\n");
		return 0;
	}
	else s.data[++s.top] = item;
}
element pop(){ //반환후 제거
	if (isEmpty()) printf("Stack is Empty\n");
	else return s.data[s.top--];
}
element peek(){//반환만
	if (isEmpty()) printf("Stack is Empty\n");
	else return s.data[s.top];
}

int main(){
	s.top = -1;
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n",peek());
	printf("%d\n",pop());
	return 0;
}
