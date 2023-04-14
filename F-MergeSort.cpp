//Time complexity of Merge Sort is O(n*Log n)
#include <iostream>
#include <vector>
using namespace std;




using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    
    vector<int> L(n1);
    vector<int> R(n2);
    
    for(int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for(int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }
    
    int i = 0, j = 0, k = l;
    
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l >= r) {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    
    mergeSort(arr, 0, arr.size() - 1);
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}


// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
// void merge(int array[], int const left, int const mid,
// 		int const right)
// {
// 	auto const subArrayOne = mid - left + 1;
// 	auto const subArrayTwo = right - mid;

// 	// Create temp arrays
// 	auto *leftArray = new int[subArrayOne],
// 		*rightArray = new int[subArrayTwo];

// 	// Copy data to temp arrays leftArray[] and rightArray[]
// 	for (auto i = 0; i < subArrayOne; i++)
// 		leftArray[i] = array[left + i];
// 	for (auto j = 0; j < subArrayTwo; j++)
// 		rightArray[j] = array[mid + 1 + j];

// 	auto indexOfSubArrayOne
// 		= 0, // Initial index of first sub-array
// 		indexOfSubArrayTwo
// 		= 0; // Initial index of second sub-array
// 	int indexOfMergedArray
// 		= left; // Initial index of merged array

// 	// Merge the temp arrays back into array[left..right]
// 	while (indexOfSubArrayOne < subArrayOne
// 		&& indexOfSubArrayTwo < subArrayTwo) {
// 		if (leftArray[indexOfSubArrayOne]
// 			<= rightArray[indexOfSubArrayTwo]) {
// 			array[indexOfMergedArray]
// 				= leftArray[indexOfSubArrayOne];
// 			indexOfSubArrayOne++;
// 		}
// 		else {
// 			array[indexOfMergedArray]
// 				= rightArray[indexOfSubArrayTwo];
// 			indexOfSubArrayTwo++;
// 		}
// 		indexOfMergedArray++;
// 	}
// 	// Copy the remaining elements of
// 	// left[], if there are any
// 	while (indexOfSubArrayOne < subArrayOne) {
// 		array[indexOfMergedArray]
// 			= leftArray[indexOfSubArrayOne];
// 		indexOfSubArrayOne++;
// 		indexOfMergedArray++;
// 	}
// 	// Copy the remaining elements of
// 	// right[], if there are any
// 	while (indexOfSubArrayTwo < subArrayTwo) {
// 		array[indexOfMergedArray]
// 			= rightArray[indexOfSubArrayTwo];
// 		indexOfSubArrayTwo++;
// 		indexOfMergedArray++;
// 	}
// 	delete[] leftArray;
// 	delete[] rightArray;
// }

// // begin is for left index and end is
// // right index of the sub-array
// // of arr to be sorted */
// void mergeSort(int array[], int const begin, int const end)
// {
// 	if (begin >= end)
// 		return; // Returns recursively

// 	auto mid = begin + (end - begin) / 2;
// 	mergeSort(array, begin, mid);
// 	mergeSort(array, mid + 1, end);
// 	merge(array, begin, mid, end);
// }

// // UTILITY FUNCTIONS
// // Function to print an array
// void printArray(int A[], int size)
// {
// 	for (auto i = 0; i < size; i++)
// 		cout << A[i] << " ";
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 12, 11, 13, 5, 6, 7 };
// 	auto arr_size = sizeof(arr) / sizeof(arr[0]);

// 	cout << "Given array is \n";
// 	printArray(arr, arr_size);

// 	mergeSort(arr, 0, arr_size - 1);

// 	cout << "\nSorted array is \n";
// 	printArray(arr, arr_size);
// 	return 0;
// }

// // This code is contributed by Mayank Tyagi
// // This code was revised by Joshua Estes
