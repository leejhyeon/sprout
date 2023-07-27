#include<stdio.h>

int main(){
	int data[3][4] = {0}, i, j, sum = 0;
	double avg[3] = {0.0};
	char subject[3][10] = {"정보", "영어", "수학"};
	
	for (i = 0; i < 3; i++){
		printf("%d 번\n", i+1);
		for (j = 0; j < 3; j++){
			printf("%s : ", subject[j]);
			scanf("%d", &data[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < 3; i++){
		sum = data[i][0] + data[i][1] + data[i][2];
		avg[j] = (float)sum / 3;
		printf("---- %d 번 성적----\n", i+1);
		printf("총점 : %d, 평균 : %.2f\n\n", sum, avg[j]);
	}
	
  return 0;
}