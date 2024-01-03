// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    int f, s;
    double ff, ss;

    scanf("%d %d", &f, &s);     // dual int input
    scanf("%lf %lf", &ff, &ss); // dual float input

    int sum1 = f + s;
    int sum2 = f - s;

    double sum3 = ff + ss;
    double sum4 = ff - ss;

    printf("%d %d\n", sum1, sum2);      // dual int print
    printf("%.1lf %0.1lf", sum3, sum4); // dual float print

    return 0;
}