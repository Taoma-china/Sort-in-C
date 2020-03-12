#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function.h"
void merge(int* arr, int start, int mid, int end){

	int len_l, len_r;
	len_l = mid-start+1;
	len_r = end-mid;	
	int l[len_l],r[len_r];
	
	memcpy(l, arr + start,sizeof(int)*len_l);
	memcpy(r, arr + mid + 1,sizeof(int)*len_r);

	int i =0,j=0,k=start;
	while(i<len_l&&j<len_r)
	{
		if (l[i]<r[j])
		{
		
			arr[k++]=l[i++];
		}
		else
		{
			arr[k++]=r[j++];
		}
	}


	while(i<len_l)
	{
		arr[k++]=l[i++];
	}
		

}



void MergeSort(int* arr, int start, int end)
{

	if(start<end){
		int mid=(start+end)/2;
		MergeSort(arr,start,mid);
		MergeSort(arr,mid+1,end);

		merge(arr,start,mid,end);
	}

}




