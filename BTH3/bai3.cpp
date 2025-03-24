#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a % b);
}

int main() {

	int* p;
	int* q;
	p = new int;
	q = new int;
	do{
		cout << "Nhap so nguyen thu nhat: ";
		cin >> *p;	
	} while (*p <= 0);
	do
	{
		cout << "Nhap so nguyen thu hai : ";
		cin >> *q;
	} while (*q <= 0);
	cout << "Uoc chung lon nhat la: " << UCLN(*p, *q) << endl;

	delete p, q;
	system("pause");
	return 0;
}