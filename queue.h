#pragma once

/*
Реализация структуры данных Очередь.

Очередь - структура данных, которая работает по принципу FIFO. 
Внутреннее представление данных в очереди - список или вектор (что подходит лучше?).
*/


// раскомментируйте одну из следующий строк в зависимости от того, что Вы выбрали
//#include "vector.h"
//#include "list.h"

struct queue {
	/* опишите поля очереди */

	queue() {
		// конструктор, в котором, возможно, нужно произвести какую-то инициализацию
	}

	// добавить новый элемент в очередь
	void enqueue(int value) {
		
	}

	// удалить первый элемент из очереди, вернуть удаляемое значение
	int dequeue() {
		return 0;
	}

	// вернуть первый элемент из очереди (не удаляя его)
	int first() {
		return 0;
	}

	// размер очереди
	int size() {
		return 0;
	}

	~queue() {
		// деструктор, подчистить память, если это необходимо
	}
};