#include < iostream>
#include <ctime> // thu vien de sinh so ngau nhien
using namespace std;
const int MAX = 30;
int main() {
	srand(time (0));
	int arr[MAX];
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = rand() % 10;// khoi tao mang so nguyen va cac gia tri nho hon 10
	}
	int* p = arr; // khai bao con tro va tro den mang hien tai

	cout << "Con tro va ky phap do doi la\n" ;
	for (int offset = 0; offset < MAX; offset++)
	{
		cout << *(p + offset) <<  '\t';
	}
	cout << endl;
	cout << "Con tro va ky phap chi so la \n";
	for (int i = 0; i < MAX; i++)
	{
		cout << p[i] << '\t';
	}
	cout << endl;

	system("pause");
	return 0;
}