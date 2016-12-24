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
		cout << "Publish company director: " << endl;
		setMan();
		cout << "Name of publish company: ";
		cin >> pubname;
	}
};