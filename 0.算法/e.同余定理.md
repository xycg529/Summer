# 同余定理的应用
## 同余定理的定义
数论中的重要概念。给定一个正整数m，如果两个整数a和b满足a-b能够被m整除，即(a-b)/m得到一个整数，那么就称整数a与b对模m同余，记作a≡b(mod m)。对模m同余是整数的一个等价关系。
## 应用
三个数除以m得到相同的余数，求m最大的数值
## 思路
第一步：输入三个数

第二部：求三个数的差

第三部：先求前两个数的最大公约数t,再求t和第三个数的最大公约数（求最大公余数可借助辗转相除法）
## 代码实现
```c
//同余定理的应用 
// BY WTU 计科11902 xycg529
#include<stdio.h>
#include<math.h>
int ret(int a,int b)//求余数 
{
	int r = a % b;
	if(r == 0){
		return b;
	} else {
		return ret(b,r);
	}	
}
int main()
{
	int a, b, c, d1, d2, d3, r1, r2;
	scanf("%d %d %d", &a, &b, &c);
	d1 = abs(a-b);
	d2 = abs(a-c);
	d3 = abs(b-c); 
	r1 = ret(d1, d2);
	r2 = ret(r1, d3);
	printf("%d", r2);
	return 0;
 }
 ```
