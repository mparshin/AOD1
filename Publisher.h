#pragma once

#include <iostream>
#include <string>
#include "Man.h"

using namespace std;

class Publisher : Man
{
public:
	string pubname;

	void setPublisher() {
		cout << "Директор издательства: " << endl;
		setMan();
		cout << "Введите название издательства: ";
		cin >> pubname;
	}
};