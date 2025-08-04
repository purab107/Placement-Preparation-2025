#include <iostream>

using namespace std;

void reverse(string str){
    int n = str.length();
    
    for(int i=0; i<=n/2; i++){
        int temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }

    cout << str ;
}

int main() {

    // Your code starts here
    string str ;
    cout << "Enter any string : ";
    cin >> str ;

    reverse(str);
    
    return 0;
}