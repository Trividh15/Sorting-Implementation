#include<iostream>
using namespace std;

int main()
{

  int arr[]={1,2,3,4,15,22,31,8,9,10};
  for(int i=0; i<10; i++)
  {
    int min=i;

    //Applying selection sort 
    for(int j=i+1; j<10; j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    }
    if(min!=i)
    {
      int temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }

  //Printing the sorted array
  for(int k=0; k<10; k++)
  {
    cout<<arr[k]<<" ";                          //would have to write std::cout<< if namespace std is not used in the code
  }

} 