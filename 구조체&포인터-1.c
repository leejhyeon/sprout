#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 추가: 동적 메모리 할당을 위해 stdlib.h 포함

#define NUM 3

typedef struct PERSON {
    char* name;
    int age;
} P;

void inputData(P* p) {
    // name 멤버에 메모리 할당
    p->name = (char*)malloc(sizeof(char) * 100);
    scanf("%s %d", p->name, &p->age);
}

void outputData(P* p) {
    printf("%s, %d\n", p->name, p->age);
}

int main() {
    P p[3];
    int i;

    for (i = 0; i < 3; i++) {
        inputData(&p[i]);
    }

    for (i = 0; i < 3; i++) {
        outputData(&p[i]);
        // 메모리 해제: 할당된 name 멤버의 메모리를 해제해야 합니다.
        free(p[i].name);
    }

    return 0;
}
