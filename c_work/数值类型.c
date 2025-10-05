#include <stdio.h>

int main() {
    int int_1 = 80;
    printf("int_1:%d\n",int_1);
    char char_1 = 'a';
    printf("char_1:%c\n",char_1);
    printf("char_1:%d\n",char_1);
    char char_2 = int_1;
    printf("char_2:%c\n",char_2);
    printf("%zu",sizeof(char));
}