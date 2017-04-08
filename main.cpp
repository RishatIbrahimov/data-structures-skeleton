

// файл для проверки корректности работы структур данных
#include <iostream>
#include "list.h"
#include "vector.h"
#include "stack.h"
#include "queue.h"
#include "minstack.h"
#include "minqueue.h"
#include "priority_queue.h"

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
	stack* st = new stack();

	for (int i = 0; i < 10; i++) {
		st->push(i);
	}

	cout << st->size() << endl; //должно быть 10

	// должно получиться "9 8 7 6 5 4 3 2 1 0"
	while (st->size() > 0) {
		cout << st->pop() << " ";
	}
	cout << endl;

	delete st;
}

void check_queue() {
	queue* q = new queue();

	for (int i = 0; i < 10; i++) {
		q->enqueue(i);
	}

	cout << q->size() << endl; //должно быть 10

	// должно получиться "0 1 2 3 4 5 6 7 8 9"
	while (q->size() > 0) {
		cout << q->dequeue() << " ";
	}
	cout << endl;

	delete q;

}

void check_minstack() {

}

void check_minqueue() {

}

void check_priority_queue() {
	priority_queue* pq = new priority_queue();

	pq -> enqueue(10);

	pq -> enqueue(8);

	pq -> enqueue(15);


	// должно быть выведено 15 10 8
	cout << pq -> dequeue() << endl;
	cout << pq -> dequeue() << endl;
	cout << pq -> dequeue() << endl;

	delete pq;
}



int main() {
	// раскомментируйте вызов соответствующего метода для структуры данных, которую хотите проверить
	//check_list();
	check_vector();
	//check_stack();
	//check_queue();
	//check_minstack();
	//check_minqueue();
	//check_priority_queue();

	return 0;
}