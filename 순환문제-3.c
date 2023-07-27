#include <stdio.h>
int a[201];
int f(int n){   
    // if (n <= 2) return 1;    //n=1,2일때 종료 
    // return f(n-1)+f(n-2);//n보다 1작은값+2작은값 호출
		// 위의 두 줄은 small value에만 사용 가능
		if (a[n] != 0) return a[n];
		if (n <= 2) return 1;
		return a[n] = (f(n-1)+f(n-2))%10009;
	 	// 위의 세 줄은 big value에도 사용 가능
}
int main()
{   
	int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}