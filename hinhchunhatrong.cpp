#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cout << "nhap chieu cao cua hinh chu nhat: "; cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i==1 || i==n || j==1 || j==n)
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
