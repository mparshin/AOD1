#include <iostream>
#include "Author.h"
#include "Publisher.h"
#include "Book.h"
#include "Man.h"
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n,age;
	BookStack my_stack;
	cout << "Enter number of books which you want to add to stack: ";
	cin >> n;
	Book *boo = new Book[n];
	for (int i = 0; i < n; i++) {
		cout << "========== " << i + 1 << endl;
		boo[i].setBook();
		cout << "Enter age:";
		cin >> age;
		boo[i].setAge(age);
		my_stack.push(boo[i]);
		if (boo[i].getAge() >= 18) cout << "    Book for adults    ";
		else cout << "   Book for kids    ";
		Publisher pub;
		pub.setPublisher();
	}


	
	system("pause");
	return 0;
}
