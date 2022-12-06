#include <iostream>
using namespace std;
int main()
{
	int m[] = { 11,5,6,7,8,2,9,1,66,-1,33,12,16 };
	int nom1, nom2;
	cout << "nom1=";
	cin >> nom1;
	cout << "nom2=";
	cin >> nom2;
	int ser = (m[nom1] + m[nom2]) / 2;
		for (int i = 0; i < 13; i++)
			if (m[i] % ser == 0)
				cout << m[i] << endl;
}