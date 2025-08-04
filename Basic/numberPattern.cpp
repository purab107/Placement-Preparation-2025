#include <iostream>

using namespace std;

// 000000
//  11111
//   2222
//    333
//     44
//      5

void patternPrint(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout << " ";
        }
        for(int k=0; k<=n-i-1; k++){
            cout << i ;
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