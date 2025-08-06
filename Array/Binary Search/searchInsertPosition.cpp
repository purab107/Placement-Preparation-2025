#include <iostream>

using namespace std;

int searchInserPosition(int* arr, int target, int n){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }

    return low;
}

int main() {
    // Your code starts here
    int arr[] = {1,3,5,6};
    int target = 7;
    int n = sizeof(arr) / sizeof(int);
    
    cout << "index is : " << searchInserPosition(arr, target, n) ;
    return 0;
}