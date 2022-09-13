#include <iostream>

// Встроенная функция
inline int sum(int n1, int n2) {
	return n1 + n2;
}

// Т.к. функцию нельзя встроить, она становится обычной функцией.
inline int sum_AB(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}

// Перегруженная функция
int max_val(int n1, int n2) {
	std::cout << "INT\n";
	return n1 > n2 ? n1 : n2;
}

double max_val(double n1, double n2) {
	std::cout << "DOUBLE\n";
	return n1 > n2 ? n1 : n2;
}

float  max_val(float n1,float n2) {
	std::cout << "FLOAT\n";
	return n1 > n2 ? n1 : n2;
}

int max_val(int n1, int n2, int n3) {
	std::cout << " THREE INT\n";
	return n1 > (n2 > n3 ? n2 : n3) ? n1 : (n2 > n3 ? n2 : n3);
}

//Шаблонная функция
template <typename T>
T abs(T n) {
	return n < 0 ? -n : n;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;

	std::cout << abs(-5) << "\n";
	std::cout << abs(7.4) << "\n";

	// Перегруженная 
	/*std::cout << max_val(4, 6) << "\n";        // 6
	std::cout << max_val(1.2, 1.1) << "\n";   // 1.2
	std::cout << max_val(5.5f, 6.7f) << "\n";
	std::cout << max_val(4, 3, 2) << "\n";*/
	// SUM SUM_AB
	/*std::cout << " Введите два числа: ";
	std::cin >> x >> y;

	std::cout << sum_AB(x, y) << "\n";
	std::cout << sum(x, y) << "\n";*/


	return 0;



	// Система контроля версий.
	// Проект в GitHub - РЕПОЗИТОРИЙ
}