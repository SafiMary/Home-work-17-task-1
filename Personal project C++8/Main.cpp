#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int num1, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0) {
	int res = 0;
	for (int i = 1; i <= 5; i++)
		res = num1 + num2 + num3 + num4 + num5;
	return res;
}


	int main() {
		setlocale(LC_ALL, "Russian");
		int a, b, c, d, e;
		cout << "Задача 1.\nФункция принимает от 1 до 5 чисел\n";
		cout << sum(3,5,9) << "\n";
		cout << sum(3, 5, 9, 88) << "\n";
		cout << sum(3, 6, 99, 76, 34) << "\n";


		
	
	




	return 0;
}