#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int partition(int a[], int l, int h)
{
 int pivot = a[l];
 int i = l, j = h;
 while(i<j)
 {
  //first do-while loop iterates the loop by i and search for element greater than the pivot element, Once found , it stops at the position of that element which is greater than the pivot element and it is pointer by i.
  do
  {
    i++;
  }while(a[l]<=pivot);
  
  //The second do-while loop iterated the array with j and searches for the element less than the pivot element. If found, It stops at the position of that element which is less than the pivot element and that element is pointed by the pointer j
  do
  {
    j--;
  }while(a[j]>pivot);

  //Once we have the position of the element greater than and lesser than the pivot element pointed by i and j respectively, we swap the elements at index i and j. We continue this procedure until the both pointers cross positions, when i becomes greater than j, we stop!
  if(i<j)
  {
    swap(a[i], a[j]);
  }
 }

 swap(a[l], a[j]);                      //Swapping of partitioning element with pivot element
 return j;

}

int* quick_sort(int a[], int l , int h)
{
 if(l<h)
 {
  int j = partition(a, l, h);
  quick_sort(a,l,j);
  quick_sort(a,j+1,h);
 }
 return a;
}

int main()
{
 int arr[] = {10,16,8,12,15,6,3,9,5,INT_MAX};
 int n = sizeof(arr)/sizeof(arr[0]);

 int* sorted_arr = quick_sort(arr, 0, n-1);
 cout<<"The sorted array will be: \n";
 for(int i = 0; i<n; i++)
 {
  cout<<arr[i]<<" ";
 }
 
}