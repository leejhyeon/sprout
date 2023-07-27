#include <stdio.h>
//여기에 재귀함수 작성

int f(int n){
	// if (n == 0) return 0;
	// if (n % 2 == 0) {
	// 	printf("0");
	// 	return f(n / 2);
	// }
	// else if (n % 2 == 1) {
	// 	printf("1");
	// 	return f(n / 2);
	// }
	if (n>=2){
		f(n/2);
	}
  printf("%d", n%2);
  return;
}

int main()
{   
		int n;
		scanf("%d", &n);
		f(n);
		
    return 0;
}
