#define _CRT_SECURE_NO_WARNINGS
#define SIZE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mul(int n){
	int i, j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			int sum = i*j;
			printf("%d*%d=%d", j, i, sum);
			printf(" ");
		}
		printf("\n");
	}
}
int main0(){
	int n;
	printf("请输入乘法口诀的列数\n");
	scanf("%d", &n);
	mul(n);
	system("pause");
	return 0;
}

void swop(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main1(){
	int x, y;
	printf("请输入要交换的两个数,中间以空格隔开:\n");
	scanf("%d %d", &x, &y);
	swop(&x, &y);
	printf("交换后为:\n");
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}

int Year(int n){
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
		printf("%d为闰年\n", n);
		return n;
	}
}
int main2(){
	int n;
	scanf("%d", &n);
	Year(n);
	system("pause");
	return 0;
}
int  number(int n){
	int i;
	for (i = 2; i <= n; i++){
		if (n%i == 0){
			return 0;
		}
		if (n == 1) return 0;
		else return 1;
	}
}
int main4(){
	int i;
	printf("请输入一个数:");
	scanf("%d", &i);
	if (number(i)){
		printf("%d是素数\n", i);
	}
	system("pause");
	return 0;
}



void init(int arr[], int size){
	for (int i = 0; i < size; i++){
		arr[i] = i;
	}
}
void empty(int arr[], int size){
	for (int i = 0; i < size; i++){
		arr[i] = '\0';
	}
}

void  reverse(int arr[], int size){
	int left = 0;
	int right = size - 1;
	while (left<right){
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
void prin2(int arr[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[5];
	int _size = sizeof(arr) / sizeof(arr[0]);
	init(arr, _size);
	prin2(arr, _size);
	reverse(arr, _size);
	prin2(arr, _size);
	empty(arr, _size);
	prin2(arr, _size);
	printf("\n");
	system("pause");
	return 0;
}



