#include <iostream>
using namespace std;
void fiBo(int n) {
	int* u, * v, * t;
	u = new int;
	v = new int;
	t = new int;
	*u = 0;
	*v = 1;
	if (n == 0) return;// ham se ket thuc va ko lam gi ca
	if (n == 1)
	{
		cout << "0\n";// neu n =1 thi chuong trinh se in ra so 0 va dung lai
		return;
	}
	cout << "0\t1";// chuong trinh in ra hai so dau tien cua day Fibo la 0 va 1, va duoc cach nhau boi \t
	int i = 2; // bien dem

	while (i < n)
	{
		*t = *u + *v;
		cout << '\t' << *t ;// int ra so Fibo(*t)
		*u = *v;
		*v = *t;
		i++;

	}






	delete u;
	delete v;
	delete t;
	cout << endl;
}


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "gia tri cua day so FiBo la: ";
	fiBo(n);

	system("pause");
	return 0;
}