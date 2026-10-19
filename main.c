#include <stdio.h>

int main(void) {
    double d;       //入力
    double result;  //結果

    scanf("%lf", &d);
    result = d * 1.08;
    printf("%.2f", result);
    return 0;
}