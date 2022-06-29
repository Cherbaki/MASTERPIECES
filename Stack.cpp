#include "Stack.h"


typedef int T;



Stack::Stack() {
		Container = new T[capasity];
	}
	
Stack::Stack(std::initializer_list<T> list) {
		this->capasity = list.size();

		Container = new T[capasity];

		for (auto item : list)
			Add(item);
	}

bool Stack::isEmpty() {
		return Top == -1;
	}

void Stack::Add(T data) {
		if (Top + 1 == capasity) { std::cout << "Stack is full" << std::endl; return; }
		Top++;
		this->Container[Top] = data;
	}

void Stack::Delete() {
		if (isEmpty())std::cout << "Stack is emty" << std::endl;
		Top--;
	}

void Stack::Dispaly(std::ostream& out) {

		if (isEmpty()) {
			std::cout << "List is empty can't display anything" << std::endl;

			return;
		}

		for (int i = 0; i <= Top; i++) {
			out << this->Container[i] << "\t";
		}
	}

std::ostream& operator <<(std::ostream& out, Stack& S1) {

	S1.Dispaly(out);
	return out;

}
