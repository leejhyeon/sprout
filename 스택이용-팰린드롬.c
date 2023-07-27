#include <stdio.h>
#include <stdbool.h> // Include this for using bool type
#define MAX 100

typedef char element;

typedef struct Stack {
    element data[MAX];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

bool isFull(Stack* s) {
    return s->top == MAX - 1;
}

bool isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, element c) {
    if (isFull(s)) {
        printf("FULL");
    } else {
        s->top++;
        s->data[s->top] = c;
    }
}

element pop(Stack* s) {
    if (isEmpty(s)) {
        printf("EMPTY");
        exit(0);
    }
    element temp = s->data[s->top];
    s->top--;

    return temp;
}

int palindrome(char str[]) {
    Stack S;
    initStack(&S); // Initialize the stack before using it
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';
        push(&S, str[i]);
    }
    for (i = 0; str[i] != '\0'; i++) {
        char c = pop(&S);
        //printf("Str[%d] : %c, pop(&s)=%c\n", i, str[i], c);
        if (str[i] != c) return 0;
    }
    return 1;
}

int main(void) {
    char str[MAX];
    scanf("%s", str);

    if (palindrome(str))
        printf("TRUE");
    else
        printf("FALSE");
    return 0;
}
