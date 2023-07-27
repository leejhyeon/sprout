#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 5
typedef int element;
typedef struct { //Queue 구조체 정의
	int front; // 앞
	int rear; //  뒤
	int data[MAX_Q_SIZE];
} Queue;
void error(char* message){
	printf("%s\n",message);
	exit(0);//메인함수 종료
}
void initQueue(Queue* q){
	q->rear = -1;
	q->front = -1;
}
int isFull(Queue* q){
	return q->rear == MAX_Q_SIZE-1;
}
int isEmpty(Queue* q){
	return q->rear == q->front;
}
void enQueue(Queue* q,int item){
	if (isFull(q)) error("Queue is Full");
	else {
		q->rear++;
		q->data[q->rear] = item;
		// return q->data[q->rear];
	}
}
int deQueue(Queue* q){
	int temp;
	if (isEmpty(q)) error("Queue is Empty");
	else {
		temp = q->data[q->front]; 
		q->front++;
		return temp;
	}
}
void queuePrint(Queue* q){
	int i;
	for(i=0;i<MAX_Q_SIZE;i++){
		if (i<=q->front || i > q->rear){
			printf(" | ");
		}
		else{
			printf("%d | ", q->data[i]);
		}
	}
	printf("\n");
}
int main() {
	element item = 0;
	Queue q;
	initQueue(&q);
	enQueue(&q,10); queuePrint(&q);
	enQueue(&q,20); queuePrint(&q);
	enQueue(&q,30); queuePrint(&q);
	item = deQueue(&q); queuePrint(&q);
	item = deQueue(&q); queuePrint(&q);
	return 0;
}