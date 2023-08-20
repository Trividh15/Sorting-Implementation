#include<stdio.h>

int main()
{

  int arr[10]={3, 5, 2, 14, 16, 19, 27, 15, 69, 9}, key, size;      //array intialization
  size=sizeof(arr)/sizeof(arr[0]);                                      //Calculation of size of arrray
  
  //Applying Insertion Sort

  for(int i=0; i<size; i++)
  {
    key=arr[i];
    int j=i-1;
    while(j>=0 && key<arr[j])
    {
      arr[j+1]=arr[j];
      j-=1;
      arr[j+1]=key;
    }
  }

  //Printing the sorted array

  printf("The sorted array will be:\n");
  for(int k=0; k<size; k++)
  {
    printf("%d  ", arr[k]);
  }

  return 0;

}