def insertion_sort(arr):   
  #Applying insertion sort

  for i in range(1,len(arr)):
    key=arr[i]
    j=i-1
    while(j>=0 and key<arr[j]):
      arr[j+1]=arr[j]
      j-=1
    arr[j+1]=key

  #Printing the sorted array
  for k in range(len(arr)):
    print(arr[k])

arr=[3, 5, 2, 14, 16, 19, 27, 15, 69, 9]
insertion_sort(arr)



