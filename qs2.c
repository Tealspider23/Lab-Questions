#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

//WAP to write a menu driven program for insertion at the start , end and any 
//position of the arry

int insertstart(int a[],int size , int element){
int i;
for ( i=size;i>0;i--){
    a[i]=a[i-1];
}
a[0]=element;
return size+1;

}

int insertend(int a[],int size , int element){

a[size]=element;
return size+1;

}

int insertpos(int a[] , int size , int element,int index){
    int i;
    if(index < 1 || index > size){
        printf("Invalid index , No insertion possible !");
        return size;
    }
    for (i=size;i>index;i--){
        a[i] =a[i-1];
    }
    a[index]=element;
    return size+1;


}
/*
int isEmpty(int arr[],int size){

int length = sizeof(arr)/sizeof(arr[0]);
if (length==size){
    printf("Array is Full ! No insertion possible ");
    return 0;
}else
return 1 ; 
}
*/





int main(){
   int arr[MAX_SIZE], size,choice , pos , item ;

   printf("Enter the size of the array ( Max %d) :",MAX_SIZE);
   scanf("%d",&size);

   printf("Enter the elements in the array :");
   for(int i=0;i<size;i++){
   scanf("%d",&arr[i]);
   } 


   printf("There are three operations : \n");
   printf("1.Insert at the Beginning \n 2.Insert at the End \n 3.Insert at any position \n");
   scanf("%d",&choice);

   switch(choice)
   {
    case 1:
    printf("Enter the value to be inserted : \n");
    scanf("%d",&item);
    size = insertstart(arr,size,item);
    break;
   
   case 2:
   printf("Enter the value to be inserted : \n");
    scanf("%d",&item);
    size = insertend(arr,size,item);
    break;
   
   case 3:
   printf("Enter the position where element should be there  : \n");
    scanf("%d",&pos);
    printf("Enter the value of element :");
    scanf("%d",&item);
    size = insertpos(arr,size,item,pos);
    break;

    default:
    printf("Invalid Choice \n");
    return 0;

   }
   printf("Array after insertion:\n");
    for (int j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    
    return 0;
}
  







    

