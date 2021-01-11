/*
You need to complete the maxHeapify function so that it can create a Max Heap. Display function in the given problem will produce the output of the resultant Max Heap. The corresponding video is located @ https://youtu.be/tTt_gAnBeJo

Input Format

You have to complete the "maxHeapify" method which takes 3 arguments, array, last non-leaf node and array size. To build the heap, heapify only the non-leaf nodes.

The input reading is handled by the code hence you need not worry about reading from stdin/stdout.

The first line contains an integer arraySize which corresponds to the number of elements in the array. The following lines contains the elements of the array.

Constraints

1<=arraySize>=100

Output Format

No need to print anything. Display function will print the output.

Sample Input 0

5
7 5 9 3 2
Sample Output 0

9 5 7 3 2

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void max_heapify(int array[], int index, int heapSize){
  /* add your code here */
    int temp; 
    int largest = index; 
    int left = 2 * index + 1; 
    int right = 2 * index + 2;  
  
    if (left < heapSize && array[left] > array[largest]) 
        largest = left; 
  
    if (right < heapSize && array[right] > array[largest]) 
        largest = right; 
  
    if (largest != index) { 
        temp=array[index];
        array[index]=array[largest];
        array[largest]=temp;
  
       max_heapify(array, largest, heapSize); 
    } 
}

int* build_max_heap(int array[], int arraySize){
    int j;
    for (j = (arraySize/2)-1; j >= 0; j--) {
        max_heapify(array, j, arraySize);
    }
    return array;
}

void display(int *max_heap, int arraySize){
	int counter;
    for (counter = 0; counter < arraySize; counter++) {
        printf("%d ", max_heap[counter]);
    }
}

int main(){
    int index, arraySize;
	int *array = calloc(MAX, sizeof(int));
    int *max_heap = calloc(MAX, sizeof(int));
    
    scanf("%d", &arraySize);
    
    for (index = 0; index < arraySize; index++) {
        scanf("%d", &array[index]);
    }
    max_heap = build_max_heap(array, arraySize);
    display(max_heap, arraySize);
}
