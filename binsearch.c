#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int left, int right, int item){
    
    if (right >= left){
        
        // calculation of new mid
        int mid = left + (right - left)/2;

        // returns position where found
        if (arr[mid] == item)
            return mid;
        
        // goes to recursive calls in left half
        if (arr[mid] > item)
            return binarySearch(arr, left, mid-1, item);
    
        // goes to recursive calls in right half
        else
            return binarySearch(arr, mid+1, right, item);
    }
    // if element is not found we return -1
    else
       return -1;
}
int main(){
    // array needs to be sorted to impliment binary search
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 70;
   
    int position = binarySearch(arr, 0, n-1, item);

    if(position == -1)
        printf("%d Not Found",item);
    else
        printf("%d Found at index : %d",item, position);
}