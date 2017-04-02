#pragma once
/*
Реализация структуры данных Куча.

Куча - бинарное дерево, удовлетворяющее следующим условиям:
1. Значение в узле не меньше значения в любом из дочерних узлов в поддереве
2. Последний слой дерева всегда заполняется слева направо

Внутренне представление кучи - обыкновенный массив, где индексы элементов имеют следующую семантику:
1. Элемент с индексом 0 - корень дерева
2. Для элемента с индексом i левым потомком является элемент с индексом 2i + 1
3. Для элемента с индексом i правым потомком является элемент с индексом 2i + 2
4. Для элемента с индексом i > 0 родительским является элемент с индексом (i - 1) / 2

*/

#include "vector.h"

struct heap {
	/* поля кучи - vector для хранения данных */

	heap() {
		// конструктор по умолчанию, необходимо провести инициализацию
	}

	heap(int capacity) {
		// конструктор, создающий кучу заданной вместимости
	}

	void add(int value) {
		// добавить значение value в кучу
		// добавляем значение в конец массива, после чего вызываем push_up для проталкивания вверх
	}

	int find_max() {
		// вернуть максимальный элемент из кучу (не удаляя его)
		return 0;
	}

	int remove_max() {
		// удалить максимальный элемент из кучи и вернуть удаляемое значение
		return 0;
	}

	int size() {
		// размер кучи
		return 0;
	}
};
