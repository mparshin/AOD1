#pragma once

#include <iostream>
#include<string>
#include<stack>

using namespace std;

class Book 
{
public:
	string genre;
	string name;
	string authorname;
	string authorsurname;
	int age;
	void setBook() {
		cout << "������� �������� �����: ";
		cin >> name;
		cout << "������� ����: ";
		cin >> genre;
		cout << "������� ��� ������: ";
		cin >> authorname;
		cout << "������� ������� ������: ";
		cin >> authorsurname;
		cout << "������� �������, � �������� ����� ������ �����: ";
		cin >> age;

	}
};