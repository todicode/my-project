#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "type n: ";
    cin >> n;
    int i,j,k;
    for (i=1;i<=n;i++){
        for (j=1;j<=i-1;j++){
            cout << " ";
        }
        for (k=1;k<=2*(n-i+1)-1;k++){
            cout << "*";
        }
        cout << endl;
    }
}
