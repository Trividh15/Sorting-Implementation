#include<stdio.h>

int main()
{
  int arr[]={1,2,3,4,5,6,13,14,15,7}, size, temp;
  size=sizeof(arr)/sizeof(arr[0]);                  //total size occupied by the array (in bytes) divided by the size of each element (in bytes)
 
 //Implementing Bubble Sort
  for(int i=0; i<size; i++)
  {
    if(arr[i]>arr[i+1])
    {
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
    else{
      continue;
    }
  }

//Printing the Sorted Array
  
  for(int j=0; j<=size; j++)
  {
    printf("%d  ", arr[j]);
  }

  return 0;

}