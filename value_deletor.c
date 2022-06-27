#include <stdio.h>
void printArray(int *start ,int *end){
    while(start < end){
        printf("%d ", *start);
        start++;
    }
    printf("\n");
}

int deleteValue(int *start, int *size, int value){
    int temp, count=0, num_loop = 0;
    int *first = start, *last =size;
    while(start <= size){
        //printf("start= %d, size= %d\n", *start, *size);
        if(*start == value){
            temp = *start;
            *start = *size;
            *size = temp;
        }
        if(*size == value){
            count++;
            *size = -1;
            size--;
        }
        start++;
        num_loop++;
    }
    if(count > 0){
        printf("%d deleted succesfully and the new size is %d\n", value, num_loop);
    }
    else{
        printf("delete failed: %d does not exist in the array\n", value);
    }
    
    return count;
}


int main(){
    int arr[] = {2 ,7 ,4 ,3 ,2 ,6 ,1, 2, 1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1};
    int capacity= 15, size=9, value=2, count;
    
    printf("Array with capacity: ");
    printArray(arr, arr+capacity);
    printf("Array with size: ");
    printArray(arr, arr+size);
    
    count = deleteValue(arr, arr + size -1, value);
    printf("Array with capacity: ");
    printArray(arr, arr+capacity);
    printf("Array with size: ");
    printArray(arr, arr+size-count);
}
