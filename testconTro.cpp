
#include<iostream>
#include<cstring>
using namespace std;
//Nhap email: vohongngoc@345
//vohongngoc
//345

void emailToken(char* email)
{
	char* p = strtok(email, "@");
	while (p != NULL)
	{
		cout << p << endl;
		p = strtok(NULL, "@");
	}
}

void nameToken( char* name)
{
    char *p= strtok(name, " ");
    while( p!= NULL)
    {
        if(p[0]>= 97 && p[0]<=122)// neu la ky tu thuong
            p[0]=p[0]-32;   // chuyen thannh ky tu in hoa
        cout<< p<< endl;
        p= strtok(NULL, " ");
    }
}
//Ho va ten: vo hong ngoc
//Vo
//Hong
//Ngoc



int main() {
	char s[100];
//	cout << "Nhap email: ";
//	cin >> s;
//	emailToken(s);
    cout<< "Ho va ten: ";
    cin.getline(s,100);
    nameToken(s);
	

	system("pause");
	return 0;
}
