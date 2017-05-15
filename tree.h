#pragma once

#include <iostream>

struct tree_node {
	tree_node * left;
	tree_node * right;
	int value;

	tree_node(int value) {
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}
};

struct binary_tree {
	tree_node * root;

	binary_tree() {
		root = NULL;
	}

	// добавить узел со значением value в дерево
	void add(int value) {
		root = add_recursive(root, value);
	}

	// проверить, существует ли узел со значением value в дереве
	bool find(int value) {
		return find_recursive(root, value);
	}

	// удалить узел со значением value из дерева, если такой найдется
	void remove(int value) {
		// TODO: реализовать удаление узлов дерева по значению
	}

	// рекурсивный поиск узла в дереве
	bool find_recursive(tree_node * n, int value) {
		if (n == NULL) {
			return false;
		}
		if (n->value == value) {
			return true;
		}
		if (n -> value < value) {
			return find_recursive(n->right, value);
		}
		return find_recursive(n->left, value);
	}


	// рекурсивное добавление узла в дерево
	tree_node* add_recursive(tree_node * n, int value) {
		if (n == NULL) {
			return new tree_node(value);
		}
		if (n -> value > value) {
			n -> left = add_recursive(n -> left, value);
		}
		if (n -> value < value) {
			n -> right = add_recursive(n -> right, value);	
		}
		return n;
	}

	~binary_tree() {
		clear_post_order(root);
	}


	// удаление узлов, удаляем в порядке post-order обхода: сначала удалим все узлы 
	// из левого и правого поддеревьев, затем сам узел
	void clear_post_order(tree_node * n) {
		if (n != NULL) {
			clear_post_order(n -> left);
			clear_post_order(n -> right);
			delete n;
		}
	}

	void print_in_order() {
		print_in_order(root);
	}

	void print_in_order(tree_node * n) {
		if (n != NULL) {
			print_in_order(n -> left);
			std::cout << n -> value << " ";
			print_in_order(n -> right);
		}	
	}

};