#include<iostream>
using namespace std;

int main() {
    int arr[10] = {3, 5, 2, 14, 16, 19, 27, 15, 69, 9};

    // Applying insertion sort
    for (int i = 1; i < 10; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Printing the sorted array
    for (int k = 0; k < 10; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
