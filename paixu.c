#include "paixu.h"
#include<stdio.h>
#define N 10

//冒泡排序

void BubbleSort(int arr[],int size){
	int i,j,t;
	for(i=1;i<size;i++){
		for(j=0;j<size-i;j++){
			if(arr[j]>arr[j+1]){
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}

void Bubble(int arr[],int size){
	printf("初始数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	BubbleSort(arr,N);
	printf("排序后的数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("%d",N);
	printf("\n");

	return;

}

//插入排序

void InsertSort(int arr[],int size){
	int i,j,temp;
	for(i=1;i<size;i++){
		temp = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

void Insert(int arr[],int size){
	printf("初始数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");

        InsertSort(arr,N);
	printf("排序后的数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	return ;
}

//选择排序

void SelectSort(int arr[],int size){
	int i,j,k,m;
	for(i=0;i<size-1;i++){
		m = arr[i];
		k = i;
		for(j=i+1;j<size;j++)
			if(arr[j]<m){
				m = arr[j];
				k = j;
			}
		arr[k] = arr[i];
		arr[i] = m;
	}
}

void Select(int arr[],int size){
	printf("初始数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	SelectSort(arr,N);
	printf("排序后的数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	return;
}

//快速排序

int Partition(int arr[],int low,int high){
	int x = arr[low];
	while(low<high){
		while(low<high &&arr[high]>=x)high--;
		if(low<high){
			arr[low] = arr[high];
			low++;
		}
		while(low<high && arr[low]<=x) low++;
		if(low<high){
			arr[high] = arr[low];
			high--;
		}
	}
	arr[low] = x;
	return low;
}

void QSort(int arr[],int low,int high){
	if(low<high){
		int mid = Partition(arr,low,high);
		QSort(arr,low,mid-1);
		QSort(arr,mid+1,high);
	}
}

void QuickSort(int arr[],int size){
	QSort(arr,0,size-1);
}

void Quick(int arr[],int size){
	printf("初始数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");
        
	QuickSort(arr,N);
	printf("排序后的数据为:");
	for(int i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	return;
}















