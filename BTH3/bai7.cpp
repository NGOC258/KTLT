#include <iostream>
#include <ctime>
using namespace std;
int Find(int* arr, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i;
		
	}
	return -1;
}

void randomArray(int* arr, int n)
{
	for (int i = 0; i < n; i++) // duyet qua tung phan tu trong mang chay tu 0 den n-1
	{
		arr[i] = rand() % 20;// sinh so ngau nhien trong mang tu 1 den 19
		// roi gan gia tri nay cho arr[i]
	}

}
void output(const int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


}
int main() {
	srand(time(0));
	int n,x;
	cout << "Nhap n: ";
	cin >> n;
	int* arr = new int[n]; // cap phat dong
	randomArray(arr, n);
	output(arr, n);
	cout << "So can tim trong mang la: ";
	cin >> x;
	int viTri =Find(arr, n, x);
	if (viTri != -1)
		cout << "Vi tri tim duoc dau tien trong mang la: " << viTri << endl;
	else
		cout << "Khong tim thay !" << endl;


	// giai phong bo nho 
	delete[]arr;
	arr = NULL;
	system("pause");
	return 0;
}