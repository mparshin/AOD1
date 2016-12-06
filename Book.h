#pragma once

#include <iostream>
#include<string>
#include<stack>

using namespace std;

class Book 
{
private:
	string genre;
	string name;
	Author author;
	Publisher publisher;
	int age;
public:
	void setAge(int a){
		age=a;
	}
	int getAge(){
		return age;
	}
	void setBook() {
		cout << "Введите название книги: ";
		cin >> name;
		cout << "Введите жанр: ";
		cin >> genre;
		author.setAuthor();
		publisher.setPublisher();
		cout << "Введите возраст, с которого стоит читать книгу: ";
		cin >> age;

	}
};
