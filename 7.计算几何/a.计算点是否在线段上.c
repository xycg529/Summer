#include <stdio.h>
int main()
{
	double x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	double k;// 斜率
	k = (y2 - y1) / (x2 - x1);
	double x, y;
	scanf("%d %d", &x, &y);
	if(k * (x - x1) + y1 == y){// 点斜式
		printf("点(%d, %d)在这条线段上", x, y);
	}else{
		printf("点(%d, %d)不在这条线段上", x, y);
	}
	return 0;
}
