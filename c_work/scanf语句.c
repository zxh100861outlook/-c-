#include <stdio.h>

int main() {
	int catgeory;
	float price;
	printf("请选择商品在:\n1.电子产品\t2.服装\n");
	scanf("%d",&catgeory);
	printf("请输入商品价格在:\n");
	scanf("%f",&price);

	switch(catgeory) {
	    case 1:
	        if(price < 500) {
	            printf("电子产品价格较低,无优惠\n");
	        }
	        else if(price < 1000) {
	            printf("电子产品可享\%5的优惠\n");
	        }
	        else {
	            printf("电子产品可享\%15的优惠\n");
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
