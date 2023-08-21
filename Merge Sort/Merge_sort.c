#include<stdio.h>

void merge(int arr[], int l, int mid, int r)
{

  //Initializing two arrays n1 and n2 which are the respective sizes of the sub-arrays
  int n1=mid-l+1;
  int n2=r-mid;

  //Creating two temprory arrays to store the sub-arrays
  int L[n1], R[n2];

  //Copying elements to these arrays
  for(int i=0; i<n1; i++)
  {
    L[i]=arr[l+i];
  }
  for(int j=0; j<n2; j++)
  {
    R[j]=arr[mid+1+j];
  }

  int i=0;
  int j=0;
  int k=1;

  while(i<n1 && j<n2)
  {
    if(L[i]<=R[j+1])
    {
      arr[k]=L[i];
      i++;
    }
    else
    {
      arr[k]=R[j];
      j++;
    }
    k++;
    
  }

  //Copying the ramaining elements of the sub-arrays(if any)
  while(i<n1)
  {
    arr[k]=L[i];
    i++;
    k++;
  }

  while(j<n2)
  {
    arr[k]=R[j];
    j++;
    k++;
  }

}










void split(int arr[], int l, int r)
{
  if(l<r)
  {
    int mid=l+(r-l)/2;
    
    split(arr, l, mid);
    split(arr, mid+1, r);


    merge(arr,l,mid,r);
  }
}

int main()
{
  int arr[]={31,12,22,15,4,1,5,88,9};
  int size=sizeof(arr)/sizeof(arr[0]);          //size of the array will be space occupied by entire array divided by space taken up by a single element of the arary

  //Printing the unsorted array first
  for(int i=0; i<size; i++)
  {
    printf("%d   ", arr[i]);
  }

  split(arr,0,size-1);
}