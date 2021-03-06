#pragma once

/*
Реализация структуры данных Стэк с поддержкой минимума.

Стэк - структура данных, которая работает по принципу LIFO. 
Внутреннее представление данных в стэке - список или вектор (что подходит лучше?).

Для возможности эффективного получения минимума на всем стэке, в стэке нужно хранить не 
сами значения, а пары (значение, текущий минимум). Подробности здесь: http://e-maxx.ru/algo/stacks_for_minima

Интерфейс стэка не меняется - как и прежде, в методы передается только одно число. 
*/


// раскомментируйте одну из следующих строк в зависимости от того, что Вы выбрали
//#include "vector.h"
//#include "list.h"

struct minstack {
	/* опишите поля стэка */

	minstack() {
		// конструктор, в котором, возможно, нужно произвести какую-то инициализацию
	}

	// добавить новый элемент в стэк
	void push(int value) {

	}

	// удалить верхний элемент из стэка, вернуть удаляемое значение
	int pop() {
		return 0;
	}

	// вернуть верхний элемент стэка (не удаляя его)
	int top() {
		return 0;
	}

	// вернуть минимальный элемент из стэка (не удаляя его)
	int min() {
		return 0;
	}

	// размер стэка
	int size() {
		return 0;
	}

	~minstack() {
		// деструктор, подчистить память, если это необходимо
	}
};