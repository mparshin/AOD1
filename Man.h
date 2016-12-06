#pragma once

#include <iostream>
#include <string>

using namespace std;

class Man
{
private:
	string name;
	string surname;
public:
	void setMan() {
		cout << "Enter name : ";
		cin >> name;
		cout << "Enter surname  : ";
		cin >> surname;
	}
};
