# 海伦公式求三角形面积
## 思路
  定义变量套用海伦公式即可
## 代码
```c
//海伦公式求三角形面积
//BY WTU 计科11902 xycg
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, s;//定义三角形三条边和面积 
	printf("请输入三角形的三条边："); 
	scanf("%lf %lf %lf", &a, &b, &c);
	p =  0.5*(a+b+c);
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("此三角形的面积是%.2lf", s);
	return 0;
}
```
