// reverseInteger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int digits;//输入位数

	char input[32];
	cin.getline(input, 32);
	cout << input << endl;
	for (int i = 0; i < 32; i++) {
		if (input[i] == NULL) {
			digits = i;
			break;
		}
		cout << input[i] << endl;
	}
	for (int i = 0; i < digits / 2; i++) {
		char temp = input[i];
		input[i] = input[digits - i];
		input[digits - i] = temp;
	}
	cout << input << endl;
	system("pause");
	return 0;
}

