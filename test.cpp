#include <iostream>

using namespace std;

void main()
{
    int x;
    cout << "Nhap vao so but can mua: ";
    cin >>x;
    if (x>100) {
        cout <<"So tien can phai tra la: " <<x*7500*0.8 <<"(giam 20%)";
    }
    else if (x>50) {
        cout <<"So tien can phai tra la: " <<x*7500*0.9 <<"(giam 10%)";
    }
    else {
        cout <<"So tien phai tra la: " <<x*7500 <<"(Khong giam gia)";
    }
    system("pause");


}