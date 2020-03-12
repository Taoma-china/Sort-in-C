#include<stdio.h>
#include"function.h"
void CountingSort(int arr[], int length)
{	
	int count[65537]={0};
	int* arrb=new int[length];
	for(int i =0;i<length;i++)
	{	
		count[arr[i]]++;
	}

	for (int j=1;j<65537;j++)
	{
		count[j]+=count[j-1];
	}
	for(int i=0;i<length;i++)

	{
		arrb[count[arr[i]]-1]=arr[i];
		--count[arr[i]];
		
	}
	for(int i =0;i<length;i++){
		arr[i]=arrb[i];
	}

} 

