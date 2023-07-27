#include <stdio.h>
#include <string.h>

unsigned int myStrlen(const char* str){
	// int count = 0, i;
	char* s;
  // for (i = 0; *(str+i) != '\0'; i++){
  //   count++;
  // }
	for (s = str; *s != '\0'; s++) {	}
	
  return s-str;
}

int main() {
	char* arr;//문자형 포인터 변수 선언
	arr = (char*)malloc(sizeof(char)*100);//최대 100byte 동적할당	
	printf("문자열을 입력하세요.\n");
	//문자열 변수에 저장(입력)
	scanf("%s", arr);
	
	printf("문자열의 길이는 %d 입니다.\n", myStrlen(arr));
	
	free(arr);
	return 0;
}