for different sort algorithm, you need to enter the "type of sort" file. 
using command "g++ test.c insertionSort.c mergeSort.c quickSort.c radixSort.c heapSort.c countingSort.c bucketSort.c " to run all of the function. And running the "./a.out" to get result.

for plot the curve, there is a "time.c" in "type of sort". If you want to run this file, you need to change the variable "choice"(1--7) every time to get different sort algorithm. And change the fp=fopen("") to save the data file. And like problem1, use command "g++ time.c insertionSort.c ....." to compile. 
After get the data, I use python to plot. Related file in "performance of sort".
