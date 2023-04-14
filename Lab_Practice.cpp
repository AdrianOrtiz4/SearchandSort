#include <iostream>
#include <vector>

//Try making the functions yourself
int Function(std::vector<int> arr, int target, int index);
int HelperRecursiveFunction(std::vector<int> arr,int target, int index);
int RecursivebinarySearch(std::vector<int> arr, int l, int r, int x);
int ItrBinarySearch(std::vector<int> arr, int l, int r, int x);



int main(){
     std::vector<int> sorted;
    for (int i = 0; i <= 100; i++){
        sorted.push_back(i);
    }
    std::cout << RecursivebinarySearch(sorted, 0 ,sorted.size()-1,1)<< std::endl;
    return 0;
}
int RecursivebinarySearch(std::vector<int> arr, int low, int high, int x){
   if(high >= low){
     int mid = low + (high -low)/2;
     if(arr[mid] == x){
        return mid;
     }
     if(arr[mid] > x){
        return RecursivebinarySearch(arr,low, mid -1,x);
     }
     else{
        return RecursivebinarySearch(arr,mid +1,high,x);
     }
   } 
   return -1;
}














// int RecursivebinarySearch(std::vector<int> arr, int low, int high, int x){
//     if(high >= low){
//       int mid = low + (high - low)/2;
//       if(arr[mid] == x){
//         return mid;

//       }
//       if(arr[mid] > x){
//         return RecursivebinarySearch(arr,low,mid - 1,x);
//       }
//       else{
//          return RecursivebinarySearch(arr,mid + 1, high,x);
//       }
//     }
//     return -1;
// }
// int ItrBinarySearch(std::vector<int> arr, int low, int high, int target){
//     while(high - low > 1){
//         int mid = (high + low)/2;
//         if(mid > target){
//              low = mid + 1;
//         }  
//         else {
//             high = mid;
//         }
//     }
//     if(arr[low] == target){
//         return target;
//     }
//     if(arr[high] == target){
//         return target;
//     }
//     else{
//         return -1;
//     }

// };

