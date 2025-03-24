#include <iostream>
using namespace std;

void Nhap(int*& a, int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] =" ;
		cin >> a[i];
	}
}
void Xuat(int*& a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	
	}
	cout << endl;
}
void noiMang(int *&c,int *a,int m,int *b, int n)
{
	c = new int[m + n];
	int dem = 0;
	for (int i = 0; i < m; i++)
		c[dem++] = a[i];
	for (int i = 0; i < n; i++)
		c[dem++] = b[i];


}
//sap xep giam dan
void hoanVi(int* a, int *b)
{
	int c = *a;
	*a= *b;
	*b = c;


}
void sxGiam(int* a, int n)
{
	for( int i=0; i<n-1; i++)
		for( int j=i+1; j<n; j++)
			if(a[i]<a[j])
				hoanVi (&a[i], &a[j]);
			
}


// cho ma tran a co kthuoc m dong va n cot( m,n do ng dung nhap).//
// Yc cap phat dong cho ma tran a.
//tim tat ca cac diem yen ngua tren ma tran(la diem nho nhat tren dong nhung lonw nhat tren cot)

void nhapmaTran(int**&p, int& m, int& n)
{
	cout << "So dong: ";
	cin >> m;
	cout << "So cot: ";
	cin >> n;
	p = new int* [m];// cap phat m dong, moi dong la mot com tro
	for (int i = 0; i < m; i++)// duyet qua tung dong
		p[i] = new int[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "p[" << i << " ," << j << "] =";
			cin >> p[i][j];
		}
}
void xuatmaTran(int**& p, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for( int j=0; j<n; j++)
			cout << p[i][j] <<"\t";
		cout << endl;
	}
	
}
// tim diem yen ngua -> 2 bai toan nho
// tim vi tri nho nhat dong
// tim vi tri lon nhat cot

int timvtNhoNhatDOng(int** p, int soCot, int vtDong)
{
	int vt = 0;
	for (int i = 0; i < soCot; i++)
		if (p[vtDong][i]< p[vtDong][vt])
			vt = i;
	return vt;
}
bool ktLonNhatCot(int** p, int soDong, int vtDong, int vtCot)
{
	int m = p[vtDong][vtCot];
	for (int i = 0; i < soDong; i++)
		if (p[i][vtCot] > m)
			return false;
	return true;
}
int main() {
	int** p, m, n;
	nhapmaTran(p, m, n);
	xuatmaTran(p, m, n);
	
	for (int i = 0; i < m; i++)
	{
		int vtCot = timvtNhoNhatDOng(p, n, i);
		if (ktLonNhatCot(p, m, i, vtCot) == true)
			cout << "Diem yen ngua la: " << i << "," << vtCot <<":" << p[i][vtCot];
	}
	for (int i = 0; i < m; i++)
		delete[]p[i];
	delete[]p;


	//int* a, m;
	//int* b, n;
	//int* c;
	//Nhap(a, m);
	//Nhap(b, n);
	//noiMang(c, a, m, b, n);
	//Xuat(a, m);
	//Xuat(b, n);
	//Xuat(c, m + n);
	//cout << "Mang c giam: " << endl;
	//sxGiam(c, m + n);
	//Xuat(c, m + n);
	//delete[]c;
	//delete[]b;
	//delete[]a;


	system("pause");
	return 0;
 }