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
	int age;
	stack<int>Mystack;
	cout << "������� ���������� ����, ������� �� ������ ������� � ������:  ";
	cin >> n;
	Book *boo = new Book[n];
	for (int i = 0; i < n; i++) {
		cout << "========== " << i + 1 << endl;
		boo[i].setBook();
		cout << "������� �������:";
		cin >> age;
		boo[i].setAge(age);
		Mystack.push(boo[i].getAge);
		if (boo[i].getAge >= 18) cout << "   ����� ��� ����������������    ";
		else cout << "   ����� ��� ������    ";
		//Author aut;
		Publisher pub;
		//aut.setAuthor();
		pub.setPublisher();
	}

	
	system("pause");
	return 0;
}