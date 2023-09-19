#include<stdio.h>
#include<limits.h>

void swap(int *x, int *y)
{
  int temp  = *x;
  *x = *y;
  *y = temp;
}

int partition(int a[], int l, int h)
{
 int i = l, j = h;
 int pivot = a[l];

 while(i<j)
 {
  do
  {
    i++;
  }while(a[i]<=pivot);

  do
  {
    j--;
  }while(a[j]>pivot);
 
 if(i<j)
 {
  swap(&a[i],&a[j]);
 }
 }
 swap(&a[l], &a[j]);
 return j;
}

int* quicksort(int a[], int l, int h)
{
 if(l<h)
 {
  int j = partition(a, l, h);
  quicksort(a,l,j-1);
  quicksort(a,j+1, h);
 }
 return a;
}

int main()
{
  int arr[] = {10,16,8,2,45,13,6,3,5,INT_MAX};
  int n = sizeof(arr)/sizeof(arr[0]);

  int* sorted_arr = quicksort(arr, 0, n-1);
  printf("The sorted array will be:\n");
  for(int i = 0; i<n; i++)
  {
    printf("%d\n  ", sorted_arr[i]);
  }
}

