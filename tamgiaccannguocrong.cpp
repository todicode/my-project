#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cout << "nhap chieu cao cua tam giac: ";
cin >> n;
for (int i=1; i<=n;i++){
    for (int j=1; j<=2*n-1; j++){
        if (i==1||j==i||j==2*n-i)
            cout << "*";
        else cout << " ";
    }
    cout << "\n";
}
}
