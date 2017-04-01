/*
Реализация структуры данных Двусвязный список.

Список состоит из узлов, каждый узел хранит в себе указатель на следующий и на 
предыдущий элементы списка. Следовательно, сам список можно представить с помощью 
двух указателей - начало и конец списка.
*/

/*
Реализация узла списка.
*/
struct node {
	// опишите необходимые поля: указатели на предыдущий и на следующий узлы, значение в узле

	// конструкторы
	node(int value, node* next, node* prev) {

	}

	node(int value) {
		//в этом конструкторе нужно не забыть занулить ссылки на следующий и предыдущий узлы
	}

	node(int value, node* prev) {

	}

	// нужен ли деструктор?

};


/*
Собственно, сам список
*/
struct list {
	// опишите необходимы поля: указатели на начало и конец списка, размер списка

	list() {
		//в этом конструкторе необходимо занулить все поля
	}

	// методы для работы со списком
	void add(int value) {
		// добавить новый узел со значеним value в конец списка
	}

	int get(int index) {
		//получить значение в узле по индексу
		return 0;
	}

	void remove(int index) {
		//удалить из списка узел с заданным индексом
	}

	int size() {
		// получить размер списка
		return 0;
	}

	// деструктор, в котором нужно подчистить всю память, которая выделялась через new
	~list() {

	}
};
