#include "Tolstik.h"

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

double minValue(double** array, int row, int col) {
	int count = 1;
	double min = array[0][0];
	double avg = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			min == array[i][j] ? count++ : count;
			avg += array[i][j];

			if (min > array[i][j]) {
				min = array[i][j];
				count = 1;
			}
		}
	}

	avg /= (row * col);

	if (count > 1) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (min == array[i][j]) {
					array[i][j] = avg;
				}
			}
		}
	}

	return min;
}

int avgCount(double** array, int row, int col) {
	double avg = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			avg += array[i][j];
		}
	}

	avg /= (row * col);
	int count = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j += 2) {
			array[i][j] > avg ? count++ : count;
		}
	}

	return count;
}

void printArray(double** array, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	return;
}