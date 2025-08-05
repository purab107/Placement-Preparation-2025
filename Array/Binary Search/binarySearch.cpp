#include <iostream>

using namespace std;

bool binarySearch(int *arr, int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return true;
        else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}


int main() {
    // Your code starts here

    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);

    int key = 0;

    if(binarySearch(arr, n, key)){
        cout << "element found!";
    }else{
        cout << "element not found!";
    }
    
    
    return 0;
}