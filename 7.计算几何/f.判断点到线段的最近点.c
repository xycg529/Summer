#include<stdio.h>
#include<math.h>

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double x, y;
    double k, b;// y = k*x + b
    k = (y2 - y1) / (x2 - x1);
    b = y1 - k * x1;
    scanf("%lf %lf", &x, &y);
    double m, n;
    m = (x + (y - b) * k) / (pow(k, 2) + 1);//数学推导
    n = k * m + b;
    printf("(%lf, %lf)", m, n);
    return 0;
}
