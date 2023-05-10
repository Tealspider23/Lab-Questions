#include <stdio.h>
#include <stdlib.h>

void LinearSearch(int arr[], int len, int item)
{
    for(int i=0;i < len;i++)
    {
        if(arr[i] == item)
        {
        printf("%d Found at index %d", item, i);
        return;
        }
    }
    printf("Not Found");
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};

    // calculating length of array 
    int len = sizeof(arr)/sizeof(arr[0]);

    // item to be searched
    int item = 40;
    LinearSearch(arr, len, item);

    return 0;
}