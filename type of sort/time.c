#include<stdio.h>
#include"function.h"
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	double time_[11];	
	
	int length_[11]={10,50,100,500,1000,5000,10000,50000,100000,500000,1000000};
	int i =0;
	int length;

	

	unsigned seed;
	seed = (unsigned)time(NULL);
	srand(seed);
	for (int t=0;t<11;t++){
		length=length_[t];
		int RandomArray[length];

	int number_range=pow(2,16);
	
	clock_t start,finish;

	for(i=0;i<length;i++){
		
		RandomArray[i]=rand() % number_range+1;
	}


	int choice =7;


	printf("\n");

	
	start = clock();
	switch(choice)
	{

		case 1:
		{
			printf("the Insertion Sort is \n");
			InsertionSort(RandomArray, length);
			break;
		}
	
		case 2:
		{
			printf("the Merge Sort is \n");
			MergeSort(RandomArray,0,(length-1));
			break;
		}
		
		case 3:
		{
			printf("the Heap Sort is \n");
			HeapSort(RandomArray,length);
			break;
		}
		
		case 4:
		{
			printf("the Quick Sort is \n");
			QuickSort(RandomArray,0,(length-1));
			break;
		}
		
		case 5:
		{
			printf("the Counting Sort is \n");
			CountingSort(RandomArray,length);
			break;
		}
		
		case 6:
		{
			printf("the Radix Sort is \n");
			RadixSort(RandomArray,length);
			break;
		}
		case 7:
		{
			printf("the Bucket Sort is \n");
			BucketSort(RandomArray,length);
			break;
		}
		
		default:
			printf("input error, return orginal array\n");
			break;
		}	
	finish=clock();
	double duration=(double)(finish-start);
	printf("Cost time:%f \n",duration);	
	time_[t]=duration;
}
	
	FILE *fp;
	int d;
	fp=fopen("BucketSortData.txt","w");
	if(fp==NULL)
	{
		printf("File cannot open!");
		exit(0);
	}
	
	for(i=0;i<11;i++){
		d = time_[i];
		fprintf(fp,"%d\t",d);
	}
	fclose(fp);


	return 0;
}
