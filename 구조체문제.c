#include <stdio.h>
//구조체 정의
typedef struct student{
	int sn;
	int math;
	int info;
} ST;

int main() {
	//구조체에 학번, 정보, 수학 입력
	int n, i, sum[100];
	float avg[100];
	ST s[100];
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d %d %d", &s[i].sn, &s[i].info, &s[i].math);
	}
	//    합계, 평균 계산하여 저장
	for (i = 0; i < n; i++){
		sum[i] = (s[i].info) + (s[i].math);
		avg[i] = (float)sum[i] / 2;
	}
	
	//출력
	for (i = 0; i < n; i++){
		printf("%d %d %.1f\n", s[i].sn, sum[i], avg[i]);
	}
	
	return 0;
}
