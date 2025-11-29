#include "main.h"

double** createDouble(int row, int col) {
	double** array = new double* [row];

	if (array != NULL) {
		for (int i = 0; i < row; i++) {
			array[i] = new double[col];

			if (array[i] == NULL) {

				for (int j = 0; j < i; j++) {
					delete[] array[i];
				}
				delete[] array;
				array = NULL;

				break;
			}
		}
	}

	return array;
}

void userInit(double** array, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "array[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}

	return;
}

double evenSum(double** array, int row, int col) {
	double sum = 0;

	for (int i = 0; i < row; i += 2) {
		for (int j = 0; j < col; j += 2) {
			sum += array[i][j];
		}
	}

	return sum;
}

double mulArray(double** array, int row, int col) {
	double mul = 1;

	for (int i = 1; i < row - 1; i++) {
		for (int j = 0; j < col; j++) {
			if (i != j) {
				mul *= array[i][j];
			}
		}
	}

	return mul;
}