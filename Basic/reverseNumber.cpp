#include <iostream>

using namespace std;

int reverseDigit(int n){
    int rev = 0;
    int lastDigit = 0;
    int temp = n;
    while(n > 0){
        lastDigit = n % 10;
        rev = rev * 10 + lastDigit ;
        n = n / 10;
    }
    return rev;
}

int main() {
    // Your code starts here
    int n;
    cout << "Enter a 3 digit number : ";
    cin >> n;

    int rev = reverseDigit(n);

    cout << "Reverse : " << rev ;

    // int temp = 234;
    // cout << temp / 10 ; removes the last digit
    // cout << temp % 10; //stores the last digit only (removes every digit except last one)
    return 0;
}