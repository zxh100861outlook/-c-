#include <stdio.h>

int main() {
	int arr [5];
	for(int i = 0;i < 5;i++){
		printf("请输入一个整数:");
		scanf("%d",&arr[i]);
	}
	for(int l = 0;l < 5;l++){
		printf("%d",arr[l]);
	}
	return 0;
}
