#pragma once

#include <iostream>
#include <string>

using namespace std;

class Man
{
public:
	string name;
	string surname;
	void setMan() {
		cout << "¬ведите им€ : ";
		cin >> name;
		cout << "¬ведите фамилию : ";
		cin >> surname;
	}
};