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
		cout << "¬ведите название книги: ";
		cin >> name;
		cout << "¬ведите жанр: ";
		cin >> genre;
		cout << "¬ведите им€ автора: ";
		cin >> authorname;
		cout << "¬ведите фамилию автора: ";
		cin >> authorsurname;
		cout << "¬ведите возраст, с которого стоит читать книгу: ";
		cin >> age;

	}
};