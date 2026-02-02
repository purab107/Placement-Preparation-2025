// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int addDigits(int num){
    if(num < 10) return num;
    while(num >= 10){
        num = num/10 + num%10;
    }
    return num;
}
int main() {
    
    int num; 
    cout << "Enter any number : " << endl;
    cin >> num;
    
    cout << addDigits(num);

    return 0;
}