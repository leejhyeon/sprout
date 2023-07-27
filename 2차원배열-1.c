#include <stdio.h>
int main() {
	int n, arr[100][100], i, j, num = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		if (i % 2 == 0){
			for (j = 0; j < n; j++){
				num++;
				printf("%d ", num);
			}
		}
		else {
			num += n;
			for (j = 0; j < n; j++){
				printf("%d ", num);
				num--;
			}
			num += n;
		}
		printf("\n");
	}
	
	return 0;
}