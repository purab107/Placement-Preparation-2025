#include <iostream>

using namespace std;

// *****
// *   *
// *   *
// *   *
// *****

void patternPrint(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
}
int main() {
    
    // Your code starts here
    int n;
    cout << "enter any number : ";
    cin >> n;

    patternPrint(n);
    
    return 0;
}