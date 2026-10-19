#include <stdio.h>

int main(void) {
    double d;
    double result;

    scanf("%lf", &d);
    result = d * 1.08;
    printf("%.2f", result);
    return 0;
}