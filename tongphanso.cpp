#include <iostream>
#include <cmath>
using namespace std;
float tong(int n){
    float tongphanso = 0;
    for (int i=1;i<=n;i++){
        tongphanso +=1.0/i;
    }
    return tongphanso;
}
int main(){
    int a;
    cout << "hay nhap a: ";
    cin >> a;
    float sum = tong(a);
    cout << "tong cac phan so trong day la: " << sum;
    return 0;
}
