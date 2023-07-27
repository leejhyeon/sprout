//5개 문자형 원소를 입력 받아 역순으로 출력해보자.
//순서대로 출력한 다음 수정하여 작성해 보자.
#include <stdio.h>

int main(){
	char arr[10] = {'\0', };
	int i;
	
	fgets(arr, 10, stdin);
	for (i = 8; i >= 0; i -= 2){
		printf("%c", arr[i]);
	}
	
  return 0;
}