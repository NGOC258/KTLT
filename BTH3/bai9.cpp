#include <iostream>
using namespace std;
const int maxR = 30;
const int maxC = 20;
void input(int** p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << "so nguyen cho dong thu " << i + 1 << ":";
		for (int j = 0; j < c; j++)
			cin >> p[i][j] ;
	}
}

void output(int** p, int r, int c)
{
	cout << "Mang dang luu tru la: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << p[i][j]<< "\t";
		cout << endl;
	}
}
bool soNguyenTo(int n) {
	if (n < 2) return false;
	else
		for (int i = 2; i <= sqrt(n * 1.0); i++)
			if (n % i == 0)
				return false;
	return true;
}
int tongSNT(int** p, int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (soNguyenTo(p[i][j]))
				tong += p[i][j];
	return tong;
}


	
int main() {
	int** p;
	int r, c;
	do {
		cout << "Nhap so dong: ";
		cin >> r;
		if (r <= 0 || r > maxR)
			cout << "Nhap lai di ba\n";

	} while (r<=0 || r> maxR);

	do {
		cout << "Nhap so cot: ";
		cin >> c;
		if (c <= 0 || c > maxC)
			cout << "Nhap lai di ba\n";

	} while (c <= 0 || c > maxC);
	// cap phat dong 2 chieu
	p = new int* [r];
	for (int i = 0; i < r; i++)
		p[i] = new int[c];
	// tinh toan & cu ly 
	input(p, r, c);
	output(p, r, c);
	cout << "Tong cac so nguyen to trong mang la: " << tongSNT(p, r, c) << endl;
	// huy cap phat
	for (int i = 0; i < r; i++)
		delete[]p[i];
	delete[]p;
	p = nullptr;


	system("pause");
	return 0;
}