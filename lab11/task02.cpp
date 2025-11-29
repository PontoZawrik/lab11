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