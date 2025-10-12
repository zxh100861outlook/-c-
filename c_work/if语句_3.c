#include <stdio.h>
#include <stdbool.h>

int main() {
    int catgeory = 2;
    float price = 299.9;

    switch(catgeory) {
        case 1:
            if(price < 500) {
                printf("电子产品价格较低,无优惠\n");
            }
            else if(price < 1000) {
                printf("电子产品可享\%5的优惠\n");
            }
            else {
                printf("电子产品可享\%5的优惠\n");
            }
            break;
        case 2:
            if(price < 200) {
                printf("服装价格过低,无优惠\n");
            }
            else if(price < 500) {
                printf("服装可享\%5的优惠在\n");
	    }
            else {
                printf("服装可享\%15的优惠在\n");
            }
            break;
    }
    return 0;
}