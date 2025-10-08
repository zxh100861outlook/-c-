#include <stdio.h>
#include <math.h>

int main() {
    int result_1 = 2+10/8*3;
    printf("result_1=%d\n",result_1);
    float result_2 = 2+10/8.0*3;
    printf("result_2=%.2f\n",result_2);
    int a = -1;
    int b = -2;
    int c = 3;
    float x_1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    float x_2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("x_1=%f,x_2=%f\n",x_1,x_2);
    return 0;
}