class Insertion_sort
{

  public static void main(String[] args)
  {

  //applying heap sort
  int arr[]={3, 5, 2, 14, 16, 19, 27, 15, 69, 9};
  for(int i=0; i<10; i++)
  {
    
    int key=arr[i];
    int j=i-1;
    while(j>=0 && key<arr[j])
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }

  //Printing the sorted array
  for(int k=0; k<10; k++)
  {
    System.out.print(arr[k]+"   ");
  }

  }
}
