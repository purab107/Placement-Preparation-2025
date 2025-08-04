#include <iostream>

using namespace std;

//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 


void patternPrint(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        for(int k=0; k<=i; k++){
            cout << "* ";
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