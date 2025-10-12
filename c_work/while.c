#include <stdio.h>

int main() {
	int shu = 0;
	int he = 0;
	while(shu < 100) {
		shu = shu + 1;
		if(shu % 2 == 0) {
			he = he + shu;	
		}
	}
	printf("1到100所有偶数的和为:%d\n",he);
	return 0;
}
