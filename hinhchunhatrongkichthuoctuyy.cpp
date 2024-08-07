#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a; cout << "hay nhap so dong: "; cin >> a;
    int b; cout << "hay nhap so cot: "; cin >> b;
    for (int i=1;i<=a;i++){
        for (int j=1;j<=b;j++){
            if (i==1 || i==a || j==1 || j==b)
                cout << "*";
            else cout << "-";
        }
        cout << endl;
    }

}
