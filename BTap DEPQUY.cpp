#include <iostream>
using namespace std;
const int MAX = 5;
int s1(int n) {
	if (n == 1)
		return 1;
	return n + s1(n - 1);
}

int s2(int n) {
	if (n == 1)
		return 1;
	return n*n + s2(n - 1);
}

//double s3(int n) { // ra gia trij racs ?????/
//	if (n % 2 != 0)
//	{
//		if (n == 1)
//			return 1;
//		return 1.0 / n + s3(n - 2);
//	}
//}
//


int tinhGT(int n) {
	if (n == 1)
		return 1;
	return n* tinhGT(n - 1);
}

int tongGT(int n) {
	if (n == 1)
		return 1;
	return tinhGT(n) + tinhGT(n - 1);
}

int Fibo(int n) {
	if (n == 0 || n == 1)
		return n;
	return Fibo(n - 1) + Fibo(n - 2);

}

int LT(int x, int n) {
	if (n == 0)
		return 1;
	return x*LT(x, n - 1);
}

int dem(int n) {
	if (n >= 0 && n <= 9)
		return 1;
	return 1 + dem(n / 10);
}

int tinhSDN(int n, int sdn=0) {
	if (n == 0)
		return sdn;
	return tinhSDN(n / 10, sdn * 10 + n % 10);
}

int tongChan(int n) {
	if (n == 0)
		return 0;
	if (n % 2 == 0)
		return n % 10 + tongChan(n / 10);
	return tongChan(n / 10);
}

int tongLe(int n) {
	if (n == 0)
		return 0;
	if (n % 2 != 0)
		return n % 10 + tongLe(n / 10);
	return tongLe(n / 10);
}


int chuyen10sang2(int n) {
	if (n == 0)
		return 0;
	return chuyen10sang2 (n / 2) * 10 + n % 2;
}

int chuyen2sang10(int n, int mu=0) {
	if (n == 0);
		return 0;
		return (n % 10)* LT(2, mu) + chuyen2sang10(n / 10, mu + 1);
}

int ucln(int a, int b) {
	if (b == 0)
		return a;
	return ucln(b, a%b);

}

int sumArray(int a[MAX], int n){
	if (n == 1)
		return a[0];
	return a[n - 1] + sumArray(a, n - 1);
}

int gtnn(int a[MAX], int n) {
	if (n == 1)
		return a[0];
	int m = gtnn(a, n - 1);
	if(a[n-1]<m)
		return a[n - 1];
	return m;

}

// tim so X bat ky trong mang 
//dao nguoc mang


int main() {

	//int n;
	//cout << "Nhap n:";
	//cin >> n;
	//cout << "s1 =" << s1(n) << endl;
	//cout << "s2 =" << s2(n) << endl;
	//cout << "s3 =" << s3(n) << endl;
	//cout << "s4= " << tongGT(n) << endl;
	//cout << "Fibo =" << Fibo(n) << endl;
	//cout << "Luy thua = " << LT(2, 2) << endl;
	//cout << "so luong chu so = " << dem(n) << endl;
	//cout << "So sau khi dao nguoc =" << tinhSDN(n) << endl;
	//cout << "Tong chan= " << tongChan(n) << endl;
	//cout << "Tong le = " << tongLe(n) << endl;
	//cout << "chuyen 10 sang 2 (10) = " << chuyen10sang2(10) << endl;
	//cout << "chuyen 2 sang 10  = " << chuyen2sang10(1010) << endl;
	int a[] = { 4, 1, 7, 2, 5 };
	int n = 5;
	cout << "Sum: " << sumArray(a, n) << endl;
	cout << "Phan tu nho nhat = " << gtnn(a, n) << endl;
	//cout << "Uoc chung lon nhat (8,32) = " << ucln(8, 32) << endl;
	system("pause");
	return 0;
 }
