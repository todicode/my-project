#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cout << "hay nhap chieu cao cua 2 tam giac: ";
cin >> n;
int d1 = 1, d2 = 1 + 2*(n-1);
while(n--){
    for (int i =1; i<=n; ++i) cout << " ";
    for (int i=1; i<=d1;++i) cout << "*"; cout << " ";
    for (int i=1; i<=d2;++i) cout << "*"; cout << "\n";
    d1+=2;
    d2-=2;
}
    return 0;
}

