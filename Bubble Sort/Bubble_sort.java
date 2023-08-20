class Bubble_sort
{
  public static void main(String[] args)
  {
    int arr[]={1, 2, 3, 4, 5, 6, 13, 14, 15, 7},temp;
   
    //Applying Bubble Sort on the array
    for(int i=0; i<9; i++)
    {
      for(int j=0; j<9; j++)
      {
        if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
      }
    }

    //Printing the sorted array
    System.out.println("The sorted array will be:");
    for(int k=0; k<10; k++)
    {
      System.out.print(arr[k]+" ");
    }    
  }
}