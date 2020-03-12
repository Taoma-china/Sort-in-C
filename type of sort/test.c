#include<stdio.h>
#include"function.h"
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{

	int RandomArray[10];
	int length =10;
	int i =0;
		

	unsigned seed;
	seed = (unsigned)time(NULL);
	srand(seed);
	
	int number_range=pow(2,16);
	
	clock_t start,finish;

	for(i=0;i<length;i++){
		
		RandomArray[i]=rand() % number_range+1;
	}


	int choice =0;
	printf("automatically produce the array of length 10: ");
	for (i=0;i<length;i++){

		printf("%d\t",RandomArray[i]);
	}

	printf("\n");

	printf("Input the sort algorithm you want");
	printf("(1)Insertion Sort  (2)Merge Sort  (3)Heap Sort  (4)Quick Sort  (5)Counting Sort  (6)Radix Sort  (7)Bucket Sort \n");
	scanf("%d", &choice);
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
	printf("Cost time:%f milliseconds\n",duration);	
	for(i=0;i<length;i++)
	{

	
		printf("%d ",RandomArray[i]);
	}
	printf("\n");
	
	return 0;
}	
