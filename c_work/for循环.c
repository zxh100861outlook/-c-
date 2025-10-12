#include <stdio.h>

int main() {
	for(int i = 1;i <= 50;i = i + 2) {
		if(i % 3 == 0) {
			continue;
		}
		else if(i > 40) {
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}
