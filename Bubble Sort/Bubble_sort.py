import numpy as np

arr = np.array([1, 2, 3, 4, 5, 6, 13, 14, 15, 7])  # Array initialized using numpy

# Applying Bubble Sort
n = len(arr)
for i in range(n - 1):
    if arr[i] > arr[i + 1]:
        arr[i], arr[i + 1] = arr[i + 1], arr[i]

# Printing the sorted array
for i in range(n):
    print(arr[i], end=" ")
