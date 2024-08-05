#include <iostream>
#include <cmath>
using namespace std;
int tong(int n){
    return n*(n+1)/2;
}
int main(){
    int i;
    cout << "hay nhap i: ";
    cin >> i;
    long long Sum = tong(i);
    cout << "tong cac so trong day la: " << Sum;
    return 0;
}

