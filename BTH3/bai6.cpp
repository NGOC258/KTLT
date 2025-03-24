#include <iostream>
#include<ctime>
using namespace std;

void randomArray(int* arr, int n) 
{
	for (int i = 0; i < n; i++) // duyet qua tung phan tu trong mang chay tu 0 den n-1
	{
		arr[i] = rand()% 20;// sinh so ngau nhien trong mang tu 1 den 19
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
void daoMang(int* arr, int n)
{
	for (int i = 0; i < n / 2; i++)// chay tu 0 den n/2-1 ( chi can den giua mang)
	{
		int tmp = arr[i]; //luu gia tri cua arr[i] vao bien tam tmp
		arr[i] = arr[n - 1 - i]; //gan arr[n-1-i] vao arr[i]
		arr[n - 1 - i] = tmp; // gan nguoc lai hoan tat viec hoan doi 
	}
}


int main() {
	srand(time(0));
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int *arr = new int[n]; // cap phat dong
	randomArray(arr, n);
	cout << "Mang truoc khi dao nguoc la: ";
	output(arr, n);

	daoMang(arr, n);
	cout << "Mang sau khi dao nguoc la : ";
	output(arr, n);

	delete[]arr;
	arr = NULL;
	system("pause");
	return 0;
}