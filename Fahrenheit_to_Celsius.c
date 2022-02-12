#include<stdio.h>
int main()
{
    float fh,cl;
    scanf("%f",&fh);
    cl=((fh-32)*5)/9;
    printf("%0.2f",cl);
    return 0;
}