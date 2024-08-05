#include <iostream>
#include <cmath>
using namespace std;
    int main(){
    int n;
    cout << "type n: ";
    cin >> n;
    if (n<=1){
        cout << "no" << "\n";
        return 0;
    }
        for (int i=2;i<=n-1; i++){
            if (n%i==0){
                cout << "no" << "\n";
                return 0;
            }
        }
        cout << "yes";
        return 0;
    }
