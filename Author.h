#pragma once

#include <iostream>
#include <string>
#include "Man.h"

using namespace std;

class Author : Man
{
public:
	string name;
	string secondname;
	string genre;
	int publishdate;
	void setAuthor() {
		cout << "Автор: " << endl;
		setMan();
		cout << "Введите жанр, в котором пишет автор:";
		cin >> genre;
		cout << "Введите год публикации книги: ";
		cin >> publishdate;
		cout << endl;
	}
};


