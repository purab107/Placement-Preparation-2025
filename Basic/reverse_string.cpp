// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& str){
    int n = str.size();
    for(int i=0; i<=n/2; i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    cout << endl;
    
}

int main() {
    // Write C++ code here
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
     for (const auto& val : str) {
        cout << val;
    }
    reverseString(str);
    
    for (const auto& val : str) {
        cout << val;
    }

    return 0;
}