#include <stdio.h>
#include <stdlib.h>

//1. Find peak element which is not smaller than its neighbours.

//using recursive binary search is a good approach to this question

int Peakfind(int arr[],int low ,int high ,int n){

    int mid = low +(high-low)/2;


    //Comparing middle elements with its neighbours
    if(mid==0 || arr[mid-1]<=arr[mid] && mid = n-1){
        return mid;
    }

}