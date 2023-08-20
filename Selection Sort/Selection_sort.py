def Selection_sort(arr):                        #Function to apply selection sort on the given aray
  for i in range(len(arr)):
    min=i
    for j in range(i+1,len(arr)):
      if(arr[j]<arr[min]):
        min=j
    if(min!=i):
      temp=arr[i]
      arr[i]=arr[min]
      arr[min]=temp

  #Printing the sorted array
  for k in range(len(arr)):
    print(arr[k], end=" ")

arr=[1,2,3,4,15,22,31,8,9,10]
Selection_sort(arr)