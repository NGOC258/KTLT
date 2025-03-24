#include <iostream>
#include <iomanip>
using namespace std;
void initPascal(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			if (j == 0|| j==i)
				arr[i][j] = 1;//phan tu dau cuoi luon luon la 1
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				// congthuc tren cua pascal
	}
}
void inMang(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << setw(4) << arr[i][j];
		cout << endl;
	}
}
int main() {
	int n;
	cout << "Nhao chieu cao : ";
	cin >> n;
	int** arr;
	// cap phat vung nho 
	arr = new int *[n];
	// khoi tao cac phan tu =0
	for (int i = 0; i < n; i++)
		arr[i] = new int[n] {0};
	initPascal(arr, n);
	inMang(arr, n);
	system("pause");
	return 0;
}