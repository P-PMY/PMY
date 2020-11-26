#include "paixu.h"
#include<stdio.h>
#define N 10

int main(int argc,char** argv[]){
	int arr[] = {21,90,42,124,53,0,2,36,54,6};
	
	printf("冒泡排序:\n");
	Bubble(arr,N);

	printf("插入排序:\n");
	Insert(arr,N);

	printf("选择排序:\n");
	Select(arr,N);

	printf("快速排序:\n");
	Quick(arr,N);

	return 0;

	}
























