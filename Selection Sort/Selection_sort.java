class Selection_sort
{
  public static void main(String[] args)
  {
    int arr[]={}, min, i, j;
    for(i=0; i<10; i++)
    {
      min=i;
      for(j=i+1; j<10; j++)
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
      System.out.print(arr[k]+"  ");
    }
  }
}