#pragma once
#include <iostream>
#include <string>
#include  "Book.h"


class BookStack {
private:

	static const int MAX_SIZE = 10;
	Book booksarray[MAX_SIZE];
	int top;
	
public:
	BookStack() {
		top = 0;
	}

	bool isEmpty() {
		return (top == 0);
	}

	bool isFull() {
		return (top == MAX_SIZE);
	}

	void push(Book book) {
		if (!isFull()) {

			booksarray[top] = book;
			top++;
		}
	}

	Book pop() {
		if (!isEmpty()) {

			top = top--;
			return booksarray[top];
		}
	}

};