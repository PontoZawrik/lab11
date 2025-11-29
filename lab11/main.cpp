#include "main.h"

int getRandomInt(int min, int max) {
	return min + rand() % (max - min + 1);
}

double getRandomFloat(double min, double max) {
	return min + (max - min) / RAND_MAX * rand();
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int n = 10;
	int array[n]{ 4, 7, 10, 16, 8, -34, 234, 76, -123, 54 };

	int p;
	
	do {
		cout << "Введите номер задания (-1 для выхода): ";
		cin >> p;

		switch (p) {
		case 1: {
			cout << boolalpha << task01(array, n) << endl;
		} break;

		case 2: {
			int* temp = task02(array, n);
			cout << "Сумма элементов кратных восьми: " << temp[0] << endl;
			cout << "Произведение элементов кратных восьми: " << temp[1] << endl;
			cout << "Количество отрицательных элементов: " << temp[2] << endl;
		} break;

		case 3: {
			double xn, xk;

			cout << "Введите диапазон x: ";
			cin >> xn >> xk;

			if (xn > xk) {
				double t = xn;
				xn = xk;
				xk = t;
			}

			cout << "------------------------------" << endl;
			for (double i = xn; i <= xk; i += 0.1) {
				cout << "f(" << i << ") = " << mathFunc1(i) << endl;
				cout << "u(" << i << ") = " << mathFunc2(i) << endl;
				cout << "------------------------------" << endl;
			}
		} break;

		case 4: {
			int row, col;

			do {
				cout << "Введите размерность массива: ";
				cin >> row >> col;
			} while (row <= 0 || col <= 0);

			double** array = createDouble(row, col);
			if (array == NULL) {
				break;
			}

			userInit(array, row, col);

			cout << evenSum(array, row, col) << endl;
		}


		case -1: cout << "Выход из программы.\n"; break;
		default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	system("pause");
	return 0;
}