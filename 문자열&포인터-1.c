/*
#include<stdio.h>
int main(){
    char* s = "world";
    int i;
		
    printf("%08X %08X %08X %s\n", &s, s, &s[0], s); // &s: 이 변수의 주소가 저장되어 있는 주소, s, s[0]: 이 문자의 시작 주소
    for( i = 0 ; s[i] != '\0'; i ++)
        printf("%08X %c\n", &s[ i ], s[ i ] ); // 각 자리의 배열 주소를 출력한다.
    
		return 0;
}
*/
#include<stdio.h>
void outputArray( int* p, int n);

int main(){
    int array[3] = { 10, 20, 30 };
    int size = sizeof(array) / sizeof(array[0]); // 요소의 개수 계산
    outputArray( array, size); // 함수 호출
}

void outputArray( int* p, int n){
    int i;
    for( i = 0 ; i < n ; i ++ ){
        printf("%d %d\n", p[i], *(p+i)); // p[i] == *(p+i), 배열의 위치에 있는 값을 출력
    }
}