#include<stdio.h>
#define PI 3.14
int main()
{
    double radius,area;
    scanf("%lf",&radius);
    area = PI*radius*radius;
    printf("%0.2lf",area);
    return 0;
}