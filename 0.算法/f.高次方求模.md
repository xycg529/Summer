# 高次方求模
## 思路
例如n^p mod m，如果p太大，暴力计算会占用很大空间，所以可以利用数学性质拆解成若干个求模来缩小计算量，将指数p不断减半，直到p变成1，再进行总计算即可。
## 代码
```c
//高次方求模 
// BY WTU 计科11902 xycg529
#include<stdio.h>
#include<math.h>
int highpowmod(int n, int p, int m)
{
	if(p == 0){//指数是0则是1
		return 1;
	} else if(p == 1){//指数是1则是n
		return n;
	} else {//排除p的特殊情况再进行循环
		int t = highpowmod(n, p/2, m);
		if(p%2 != 0){//p是奇数的话则先分成两部分，再乘一个n
			return (t*t%m)*n%m;
		} else {
			return t*t%m;
		}
	}
}
int main()
{
	int n, p, m;
	scanf("%d %d %d", &n, &p, &m);
	printf("%d", highpowmod(n, p, m));
	return 0;
}
```
