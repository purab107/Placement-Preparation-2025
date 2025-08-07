#include <iostream>
#include <vector>

using namespace std;

vector<int> firstLastPosition(int *arr, int target, int n){
    int first = -1, last = -1;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] < target) low = mid + 1;
        else{
            if(arr[mid] == target) first = mid;
            high = mid - 1;
        }
    }

    low = 0, high = n-1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] > target) high = mid - 1;
        else{
            if(arr[mid] == target) last = mid;
            low = mid + 1;
        }
    }

    return {first, last};
}

int main() {

    // Your code starts here
    int arr[] = {3, 5, 5, 7, 7, 9, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int target = 9;

    vector<int> ans = firstLastPosition(arr, target, n);

    cout << "First Position : " << ans[0] << " Second Position : " << ans[1];
    
    return 0;
}