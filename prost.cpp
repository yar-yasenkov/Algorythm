// prost.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int n;
	int flag = 0;
	cout << "enter number \n";
	cin >> n;
	for (int i = 2; i < sqrt(n); i++)
	{
		if ((n % i == 0) && (flag == 0))
		{
			cout << "neprostoe";
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "prostoe";
	system("pause");
	return 0;
}

