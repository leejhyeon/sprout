
/* 이 반복문을 재귀함수로 바꾸어 작성해 보자.
int i,sum=0;
for(i=n;i>=1;i--){
    sum = sum + i;	
 }                   */
#include <stdio.h>

int f(int k){
	if (k == 1) return 1;
	else return k + f(k-1);
}

int main (){
   int n;
   scanf("%d", &n);
   printf("%d", f(n));
   return 0;
}