#include <iostream>
#include <vector>
using namespace std;
void selectionSortIterative(int arr[], int n);
// void recurSelectionSort(int a[], int n, int index = 0);
// int minIndex(int a[], int i, int j);


//Time complexity O(n^2)
int main() {
    // Example usage
    // vector<int> arr = {5, 2, 8, 4, 1};
   int arr[5] = {5, 2, 8, 4, 1};
    // Call selection sort function
     selectionSortIterative(arr,5);

    // Print sorted vector
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void selectionSortIterative(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the minimum element with the first element of the unsorted part
        if (minIndex != i) {
            swap(arr[minIndex], arr[i]);
        }
    }
}
