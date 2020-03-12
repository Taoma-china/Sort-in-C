#include<stdio.h>
#include<iostream>
#include"function.h"

void Heapify(int arr[], int length, int i)
{

	int largest = i;
	int l = 2*i +1;
	int r = 2*i +2;
	
	if (l<length && arr[l]>arr[largest])
		largest=l;
	if (r<length && arr[r]>arr[largest])
		largest = r;
	if (largest !=i)
	{
		std::swap(arr[i],arr[largest]);
		Heapify(arr, length,largest);
	}
	






}

void HeapSort(int arr[],int length){
	for(int i =length/2 -1; i>=0; i--)
	{
		
		Heapify(arr,length,i);
	}
	for(int i =length-1;i>=0;i--)
	{
		std::swap(arr[0],arr[i]);
		Heapify(arr,i,0);
	}
}
