#include <stdbool.h>
#include <stdio.h>

int main() {
        int a = 2;
        int b = 8;
        int c;
        if (a > b) {
                int c = a-b;
                printf("%d\n",c);
        }
        else if (b > a) {
                int c = b-a;
                printf("%d\n",c);
        }
return 0;
}
