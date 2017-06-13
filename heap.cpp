
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct heap {
	vector<int> data;

	int get_max() {
		return data[0];
	}

	void add(int value) {
		data.push_back(value);
		sift_up(data.size() - 1);
	}

	int remove_max() {
		int result = get_max();
		data[0] = data[data.size() - 1];
		data.pop_back();
		sift_down(0);
		return result;
	}

	void sift_up(int index) {
		if (index > 0) {
			int parent = (index - 1) / 2;
			if (data[parent] < data[index]) {
				iter_swap(data.begin() + index, data.begin() + parent);
				sift_up(parent);
			}
		}
	}

	void sift_down(int index) {
		int mx_index = index;
		int child = 2 * index + 1;
		if (child < data.size() && data[child] > data[mx_index]) {
			mx_index = child;
		}
		child = 2 * index + 2;
		if (child < data.size() && data[child] > data[mx_index]) {
			mx_index = child;
		}
		if (mx_index > index) {
			iter_swap(data.begin() + index, data.begin() + mx_index);
			sift_down(mx_index);
		}
	}
};


int main() {
	heap h;


	h.add(25);
	h.add(13);
	h.add(24);
	h.add(100);
	h.add(-100);
	h.add(1);


	cout << h.remove_max() << endl << h.remove_max() << endl << h.remove_max() << endl;


	return 0;
}
