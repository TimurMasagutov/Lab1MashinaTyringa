﻿// Равнобедренные треугольники.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	int z = 1;
	do {
		cout << "Введите N(N>3 и N нечетное: ";
		cin >> N;
	} while (N <= 3 || N % 2 == 0);
	for (int i = 1; i <= (N + 1) / 2; ++i) {
		for (int j = 1; j <= (N + 1) / 2 - i; ++j) {
			cout << ' ';
		}
		for (int k = 1; k <= z; ++k) {
			cout << '*';
		}
		z = z + 2;
			cout << endl;
	}
	
		
		
	
}

