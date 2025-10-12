#include <stdio.h>

int main() {
	int nian = 2088;

	if( (nian % 4 == 0) && !(nian % 100 == 0) || ((nian % 400 == 0)) ) {
		printf("%d是闰年\n",nian);
	}
	else {
		printf("%d不是闰年\n",nian);
	}

	return 0;
}
