#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int>& vec, int n, int target) {
    int low = 0, high= n-1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(vec[mid] == target) return true;
        else if(vec[mid] > target) high = mid - 1;
        else low  = mid + 1;
    }
    return false;
}


int main() {
    // Your code starts here
    vector<int> vec;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    
    int target;
    cout << "Enter Any Target : ";
    cin >> target;


    if(binarySearch(vec, n, target)){
        cout << "element found!";
    }else{
        cout << "element not found!";
    }
    
    
    return 0;
}