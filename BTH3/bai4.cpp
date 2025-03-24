#include <iostream>
using namespace std;
const int MAX = 30;

// nhap mang
void input(int* arr, int n) // int  *arr tham so la 1 con tro tro den mang so nguyen
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "] :";
		cin >> arr[i];
	}
}
// xuat mang co dieu kien la ca phan tu le
void output(int* arr, int n)
{
	for (int offset = 0; offset < n; offset++) // day la ky phap do doi
	{
		if (*(arr + offset) % 2 != 0)
			cout << *(arr + offset) << '\t';
	}
	cout << endl;
}
// tra ve dia chi lon nhat trong mang (gia su cac phan tu trong mang ko trung nhau)
int *maxArr(int* arr, int n)
{
	int MAX = arr[0];
	int *p = NULL;
	for (int i = 0; i < n; i++)
	{
		if (MAX < arr[i])// neu MAX ma be hon vi tri cua i trong mang
		{
			MAX = arr[i]; // suy ra vi tri do la max
			p = &arr[i];// p chi den dia chi cua i trong mang
		}
	}
	return p;

}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* arr = new int[n];
	input(arr, n);
	cout << "So phan tu le tong mang la: "; 
	output(arr, n);
	cout << endl;

	int* pMAX = maxArr(arr, n);
	cout << "Dia chi lon nhat trong mang la:  " << *pMAX  << endl;


	delete[] arr;
	arr = NULL;

	system("pause");
	return 0;

}