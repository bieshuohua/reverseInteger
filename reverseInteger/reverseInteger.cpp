// reverseInteger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void reverse(int x) {
	int y = x;
	int answer = 0;
	int holder[11];
	int count = 0;//number of digits
	if (x == 0) {
		//return 0;
	}
	//清除末尾的零
	else if (abs(y % 10) == 0) {
		while (abs(y % 10) == 0) {
			y /= 10;
		}
	}
	//对10求余数
	while (abs(y / 10) >= 0 && y != 0) {
		holder[count] = abs(y % 10);
		count++;
		y /= 10;
	}
	cout << count << endl;

	//todo:整型溢出问题
	try {
		for (int i = 0; i < count; i++) {
			if (answer * 10 / 10 != answer) {//判断乘法(*10)结果是否溢出int_max
				answer = 0;
				break;
			}
			if (2147483647 - answer * 10 < holder[i]) {//判断加法 + holder[i]结果是否溢出int_max
				answer = 0;
				break;
			}

			answer = answer * 10 + holder[i];
		}
	}
	catch(exception e){
		answer = 0;
	}
	
	if (x < 0) {
		answer *= -1;
	}
	cout << answer << endl;

	//return answer

	for (int i = 0; i < count; i++) {
		cout << holder[i];
	}
	cout << endl;
}


int main()
{
	reverse(1534236469);
	system("pause");
	return 0;
}

