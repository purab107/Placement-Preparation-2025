#include <iostream>

using namespace std;

// *****
// *   *
// *   *
// *   *
// *****

void printPattern(int n){
    for(int i=0; i<n; i++){
        if(i == 0 || i == n-1){
            for(int j=0; j<n; j++){
                cout << "*";
            }
        }
        else{
            for(int k=0; k<n; k++){
                if(k == 0 || k == n-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }

        cout << endl;

    }
}

int main() {
    
    // Your code starts here
    int n;
    cout << "Enter any number : ";
    cin >> n;

    printPattern(n);
    
    return 0;
}