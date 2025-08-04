#include <iostream>

using namespace std;

int sumOfNatural(int n){
    int sum = ( ( n + 1 ) * n ) / 2;
    return  sum;
}

int main() {
    
    // Your code starts here
    int n;
    cout << "Enter any number : ";
    cin >> n ;
    int sum = sumOfNatural(n);
    cout << "Sum of first " << n << " natural number is " << sum ;
    
    return 0;
}