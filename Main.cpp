#include <iostream>
#include<stack>
#include "Author.h"
#include "Publisher.h"
#include "Book.h"
#include "Man.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n;
	stack<int>Mystack;
	cout << "Введите количество книг, которые вы хотите занести в реестр:  ";
	cin >> n;
	Book *boo = new Book[n];
		for (int i = 0; i < n; i++) {
			cout << "========== " << i+1 << endl;
				boo[i].setBook();
			Mystack.push(boo[i].age);
		}
	//if (age >= 18) cout << name;
			//Author aut;
			Publisher pub;
			//aut.setAuthor();
			pub.setPublisher();
		
	system("pause");
	return 0;
}