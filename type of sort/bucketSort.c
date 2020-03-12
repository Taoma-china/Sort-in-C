#include"function.h"
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<algorithm>





void BucketSort(int arr[], int n)
{
        std::vector<int> b[65535];	
	
	for(int i=0;i<n;i++){
		int bi = arr[i]/10;
		b[bi].push_back(arr[i]);
		
		
	}
	
	for(int i=0;i<6553;i++){
		std::sort(b[i].begin(),b[i].end());
	}	
	
	int index=0;
	for(int i=0;i<6553;i++){
		for(int j=0;j<b[i].size();j++){
			arr[index++]=b[i][j];}
	}
}
	
