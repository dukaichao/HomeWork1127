#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void printXing(){
	for (int i = 1; i <= 7; i++){
		for (int j = 1; j <= (2*i)-1; j ++){
			printf("*");
		}
		printf("\n");
	}
	for (int i = 6; i >=1; i--){
		for (int j = (2 * i) - 1; j >= 1; j--){
			printf("*");
		}
		printf("\n");
	}

}

//水仙花数
int sxhua(int i){
	return i == pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i /100, 3);
}
//求和
int add(int n){
	int sum = 0;
	for (int i = 1; i <= 5; i++){
		sum += n;
		n = 10 * n + 2;
	}
	return sum;
}
int main(){
	printXing();
	for (int i = 0; i < 1000; i++){
		if ((sxhua(i)))
			printf("%d ", i);
	}
	printf("\n");
	printf("请输入:>");
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", add(n));
	system("pause");
	return 0;
}