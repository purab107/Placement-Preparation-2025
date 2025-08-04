#include <iostream>
using namespace std;

void multiplicationTable(int n){
    for(int i=1; i<=10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    // Your code starts here
    int n;
    cout << "Enter any number: " ;
    cin >> n ;

    multiplicationTable(n);
    
    return 0;
}