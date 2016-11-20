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
	int i;
	stack<int>Mystack;
	cout << "Ââåäèòå êîëè÷åñòâî êíèã, êîòîðûå âû õîòèòå çàíåñòè â ðååñòð:  ";
	cin >> n;
	Book *boo = new Book[n];
	for (int i = 0; i < n; i++) {
		cout << "========== " << i + 1 << endl;
		boo[i].setBook();
		cout << "Введите возраст:";
		cin >> age;
		boo[i].setAge(age);
		Mystack.push(boo[i].getAge);
		if (boo[i].getAge >= 18) cout << "    Книга для совершеннолетних    ";
		else cout << "   Книга для малышей    ";
		Publisher pub;
		pub.setPublisher();
	}


	
	system("pause");
	return 0;
}
