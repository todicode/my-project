#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "hay nhap chieu cao cua tam giac: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=2*n-1; j++){
            if (i==n || j==n+i-1 || j==n-i+1)
            cout << "*";
        else
            cout << " ";
    }
    cout <<endl;
}
}
