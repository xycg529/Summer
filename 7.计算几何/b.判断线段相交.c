#include <stdio.h>

int main()
{
	double x1, y1, x2, y2;
	double X1, Y1, X2, Y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
	double k1, k2;
	k1 = (y2 - y1) / (x2 - x1);
	k2 = (Y2 - Y1) / (X2 - X1);
	if(k1 == k2){
		printf("两线段平行");
	}else{
		printf("两线段相交");
	}
	return 0;
}
