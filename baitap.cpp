#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "type n: ";
    cin >> n;
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n-i-1;j++){
                cout << "*";
}
        cout << " " << "\n";
    }
}
