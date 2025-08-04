#include <iostream>

using namespace std;

int findFactorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}
int main() {

    // Your code starts here
    int n;
    cout << "Enter any number : ";
    cin >> n;

    int factorial = findFactorial(n);

    cout << "factorial of " << n << " is " << factorial;
    
    return 0;
}