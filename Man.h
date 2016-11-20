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
		cout << "Ââåäèòå èìÿ : ";
		cin >> name;
		cout << "Ââåäèòå ôàìèëèþ : ";
		cin >> surname;
	}
};
