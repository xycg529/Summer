# 欧几里得算法求最大公约数
## 思路
  定义两个整型变量`a, b`，先比较`a, b`两个数的大小，确保`a > b`，然后一直循环`a % b`，并把每次结果都交给下一次循环的变量`b`，将上一次循环的变量`b`交给下一次循环的变量`a`，
循环停止的条件是`a%b == 0`,循环结束后，变量`b`就是所求最大公约数。
## 代码实现
```c
//欧几里得算法求最大公约数
#include<stdio.h>
int main()
{
	int a, b, r;//定义需要求的两个数，余数，交换变量
	scanf("%d %d", &a, &b);//赋值
	if(a < b){//判断a, b大小，确保被除数大于或等于除数 
		r = a;
		a = b;
		b = r;//交换 
	}
	r = a%b;//先计算第一次取余 
	while(r != 0){//余数不为0就一直循环 
		a = b;//b成为新的被除数 
		b = r;//余数成为新的除数 
		r = a%b;//再计算 
	}
	printf("%d", b);
	return 0;
}
```
## 测试结果
本次测试网站为牛客网：[最大公约数](https://www.nowcoder.com/questionTerminal/7fd309b4ab854e6e9afda4794b1334a5)

![测试结果](https://github.com/xycg529/Summer/blob/master/%E6%AC%A7%E5%87%A0%E9%87%8C%E5%BE%97%E7%AE%97%E6%B3%95%E6%B1%82%E6%9C%80%E5%A4%A7%E5%85%AC%E7%BA%A6%E6%95%B0.jpg)
