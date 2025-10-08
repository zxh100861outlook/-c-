#include <math.h>
#include <stdio.h>
int main() {
        const float PI = 3.14;
        float s = PI*pow(2,2);
        float s_1 = PI*pow(8,2);
        printf("r=2:%.2f \t r=8:%.2Of",s,s_1);
        return 0;
}
