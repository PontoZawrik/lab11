#include "main.h"

bool task01(int* array, int size) {
	bool flag = true;

	for (int i = 1; i < size; i += 2) {
		if (array[i] % 2 != 0) {
			flag = false;
			break;
		}
	}

	return flag;
}

int* task02(int* array, int size) {
	int n = 3;
	int* arr = new int[n]{0, 1, 0};

	for (int i = 0; i < size; i++) {
		if (array[i] % 8 == 0) {
			arr[0] += array[i];
			arr[1] *= array[i];
		}

		if (array[i] < 0) {
			arr[2]++;
		}
	}

	return arr;
}