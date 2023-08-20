#include<iostream>
#include<algorithm>       //This is a header file for Standard Template Library(STL) algorithm, it provides a wide range of functions for perforing various operations on data structures like arryas, vectors and other containers.

using namespace std;              

int main()
{
  int arr[]={1, 2, 3, 4, 5, 6, 13, 14, 15, 7}, size;
  size=sizeof(arr)/sizeof(arr[0]);


  //Implementing Bubble Sort
  for(int i=0; i<size-1; i++)
  {
    for(int j=0; j<size-1; j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
      }
    }
  }


  //Printinf the sorted array
  cout<<"The sorted array is:";
  for(int i=0; i<size; i++)
  {
    cout<<" "<<arr[i]<<endl;
  }

}