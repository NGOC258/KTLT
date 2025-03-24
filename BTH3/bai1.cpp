#include <iostream>
using namespace std;
int main() {
	int x, y; // khai bao 2 gia tri nguyen x va y
	int* p = &x;// khai bao con tro p va tro den dia chi cua x
	*p = 80;// nhan gia tri luu tru la 80
	cout << &x << endl; // xuat dia chi cua bien x
	cout << p << endl; // xua gia tri luu trong p
	cout << *p << endl; // xuat gia trij ma bien p tro den
	cout << x << endl; // gia tri cua x
	system("pause");
	return 0;


}