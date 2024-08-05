#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i;
    cout << "hay nhap so ban muon: ";
    cin >> i;
    int sum = 0;
    while (i != 0){
        sum += i%10;
        i/=10;
    }
    cout << "tong cac chu so la: " << sum << endl;
    return 0;
}
