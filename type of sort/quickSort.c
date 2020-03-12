#include<stdio.h>
#include<iostream>
#include"function.h"
int Partition (int arr[], int p,int r){
	int x = arr[r];
	int i = p-1;
	for(int j=p;j<r;j++)
	{
		if (arr[j]<=x)
		{	i = i+1;
			std::swap(arr[i],arr[j]);
		}
	}
	std::swap(arr[i+1],arr[r]);
	return (i+1);
	

}

void QuickSort(int arr[],int left, int right){
	if(left<right){
	int a = Partition(arr, left, right);
	QuickSort(arr,left,a-1);
	QuickSort(arr,a+1,right);
	}

}

