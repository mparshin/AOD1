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
<<<<<<< HEAD
		cout << "Author info: " << endl;
		setMan();
		cout << "Enter genre of book:";
		cin >> genre;
		cout << "Enter date of publish: ";
=======
		cout << "Àâòîð: " << endl;
		setMan();
		cout << "Ââåäèòå æàíð, â êîòîðîì ïèøåò àâòîð:";
		cin >> genre;
		cout << "Ââåäèòå ãîä ïóáëèêàöèè êíèãè: ";
>>>>>>> origin/master
		cin >> publishdate;
		cout << endl;
	}
};


