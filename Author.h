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
		cout << "Author info: " << endl;
		setMan();
		cout << "Enter genre of book:";
		cin >> genre;
		cout << "Enter date of publish: ";
		cin >> publishdate;
		cout << endl;
	}
};


