#pragma once

#include <iostream>
#include <string>
#include "Man.h"

using namespace std;

class Author : Man
{
private:
	string name;
	string secondname;
	string genre;
	int publishdate;
public:
	void setAuthor() {
		cout << "Àâòîð: " << endl;
		setMan();
		cout << "Ââåäèòå æàíð, â êîòîðîì ïèøåò àâòîð:";
		cin >> genre;
		cout << "Ââåäèòå ãîä ïóáëèêàöèè êíèãè: ";
		cin >> publishdate;
		cout << endl;
	}
};


