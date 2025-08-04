#include <iostream>
#include <climits>

using namespace std;

int findLargestInArray(int *arr){
    int n = sizeof(arr) / sizeof(int);
    int largest = INT_MIN;
    for(int i=0; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    // Your code starts here
    int arr[] = {4, 2, 7, 1, 3, 5};

    int largest = findLargestInArray(arr);

    cout << "largest element in array : " << largest;

    return 0;
}