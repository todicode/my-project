#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cout << "hay nhap a: ";
    cin >> a;
    int b;
    cout << "hay nhap b: ";
    cin >> b;
    long long sum = 0;
    for (int i=a;i<=b;i++){
        sum += i;
    }
        cout << "tong cua day so la: " << sum;
        return 0;
}
