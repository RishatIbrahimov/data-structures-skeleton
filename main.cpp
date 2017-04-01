

// файл для проверки корректности работы структур данных
#include <iostream>
#include "list.h"
#include "vector.h"
#include "stack.h"
#include "queue.h"
#include "minstack.h"
#include "minqueue.h"

using namespace std;

void check_list() {
	list* l = new list();
	// заполним список значениями от 0 до 9
	for (int i = 0; i < 10; i++) {
		l->add(i);
	}

	// выведем на экран, должно получиться "0 1 2 3 4 5 6 7 8 9"
	for (int i = 0; i < 10; i++) {
		cout << l->get(i) << " ";
	}
	cout << endl;

	//удаляем первый элемент, должно быть выведено "1"
	l->remove(0);
	cout << l->get(0) << endl;

	//удаляем последний элемент, должно быть выведено "8"
	l->remove(l->size() - 1);
	cout << l->get(l->size() - 1) << endl;

	//удаляем четвертый элемент, должно быть выведено "6"
	l->remove(4);
	cout << l->get(4) << endl;

	delete l;
}

void check_vector() {
	vector* v = new vector();
	// заполним вектор значениями от 0 до 9
	for (int i = 0; i < 10; i++) {
		v->add(i);
	}

	// выведем на экран, должно получиться "0 1 2 3 4 5 6 7 8 9"
	for (int i = 0; i < 10; i++) {
		cout << v->get(i) << " ";
	}
	cout << endl;

	//удаляем первый элемент, должно быть выведено "1"
	v->remove(0);
	cout << v->get(0) << endl;

	//удаляем последний элемент, должно быть выведено "8"
	v->remove(v->size() - 1);
	cout << v->get(v->size() - 1) << endl;

	//удаляем четвертый элемент, должно быть выведено "6"
	v->remove(4);
	cout << v->get(4) << endl;

	delete v;
}

void check_stack() {

}

void check_queue() {

}

void check_minstack() {

}

void check_minqueue() {

}



int main() {
	// раскомментируйте вызов соответствующего метода для структуры данных, которую хотите проверить
	//check_list();
	//check_vector();
	//check_stack();
	//check_queue();
	//check_minstack();
	//check_minqueue();

	return 0;
}