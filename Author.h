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
		cout << "�����: " << endl;
		setMan();
		cout << "������� ����, � ������� ����� �����:";
		cin >> genre;
		cout << "������� ��� ���������� �����: ";
		cin >> publishdate;
		cout << endl;
	}
};


