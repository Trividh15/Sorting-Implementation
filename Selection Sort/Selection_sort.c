#include<stdio.h>


int main()
{
  int arr[10]={1,2,3,4,15,22,31,8,9,10};
  int min, temp;
  

  //Applying Selection Sort
  for(int i=0; i<10; i++)
  {
    min=i;                                            //Here, min is not assigned with the value of an array's element. We have assigned the index value to the min so that we can find the index of the mininmum element in the array
    for(int j=i+1; j<10; j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    }

    if(min!=i)                              //The value of minimum element is swapped with the element at the start of the unsorted part
    {
      temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }

  //Printing the sorted array
  for(int k=0; k<10; k++)
  {
    printf("%d  ", arr[k]);
  }

  return 0;

}