#include <iostream>

using namespace std;

int countDigits(int n){
    int count = 0;
    int lastDigit = 0;
    while(n > 0){
        lastDigit = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

int main() {
    
    // Your code starts here
    int n;
    cout << "Enter any number : ";
    cin >> n ;

    cout << "Number of digits in " << n << " = " << countDigits(n);
    
    
    return 0;
}