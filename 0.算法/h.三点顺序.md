# 三点顺序
## 要求
给定不共线的三个点，必定能围成一个三角形，要求判断所围三角形是逆时针还是顺时针。
## 思路
利用矢量叉积判断是逆时针还是顺时针。

设A(x1,y1),B(x2,y2),C(x3,y3),则三角形两边的矢量分别是： AB=(x2-x1,y2-y1), AC=(x3-x1,y3-y1)

利用右手法则进行判断：

如果AB*AC>0,则三角形ABC是逆时针的
    
如果AB*AC<0,则三角形ABC是顺时针的
    
如果AB*AC=0，则说明三点共线。
## 代码
```c
//三点顺序
// BY WTU 计科11902 xycg529
#include<stdio.h>
int main()
{
	double x1, y1, x2, y2, x3, y3;//定义三个点的坐标 
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	double f = (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);//计算叉乘 
	if(f > 0){
		printf("该三角形是逆时针"); 
	} else {
		printf("该三角形是顺时针"); 
	}
	return 0;
}
```
