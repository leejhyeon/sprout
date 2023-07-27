#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct point{
	int x;
	int y;
} PT;

int main() {
	PT* pt1 = (PT*)malloc(sizeof(PT));
	PT* pt2 = (PT*)malloc(sizeof(PT));
	double dis;
	
	scanf("%d %d", &pt1 -> x, &pt1 -> y);
	scanf("%d %d", &pt2 -> x, &pt2 -> y);
	
	printf("(%d, %d)\n", pt1 -> x, pt1 -> y);
	printf("(%d, %d)\n", pt2 -> x, pt2 -> y);
	
	dis = sqrt(pow((pt1->x - pt2->x), 2) + pow((pt1->y - pt2->y), 2));
	printf(" %.2lf\n", dis);
	
	return 0;
}
