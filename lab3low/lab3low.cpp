#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char str[1025];
	cout << "Введите строку:" << endl;
	cin.getline(str, 1205);
	int size = strlen(str), cntR = 0, cntK = 0, cntT = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == 'r' || str[i] == 'R')
			cntR++;
		if (str[i] == 'k' || str[i] == 'K')
			cntK++;
		if (str[i] == 't' || str[i] == 'T')
			cntT++;
	}
	cout << "количество символов r:" << cntR << endl;
	cout << "количество символов k:" << cntK << endl;
	cout << "количество символов t:" << cntT << endl;
	system("pause");
	return 0;
}