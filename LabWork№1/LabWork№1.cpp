#include <iostream>
#include <cstdlib>
using namespace std;
void one();
void two();
void three();
void four();
int main(){
	setlocale(LC_ALL, "RU");
	while (true)
	{
		bool flag = true;
		if (flag)
		{
			cout << "{1}Кол-во байт отводимые на тип данных.\n";
			cout << "{2}Двоичное представление в памяти целого числа.\n";
			cout << "{3}Вывести на экран двоичное представление в памяти типа float.\n";
			cout << "{4}Выход из программы\n";
		}
		int a;
		cin >> a;
		if (a > 4)
		{
			system("cls");
			cout << "\tОшибка. Введите число от 1 до 4.\n";
			flag = false;
			continue; 
		}
		else {
			flag = true;
		}
		switch (a)
		{
		case(1): system("cls"); one(); break;
		case(2): system("cls"); two(); break;
		case(3): system("cls"); three(); break;
		case(4): system("cls"); four(); break;
		}
	}
	return 0;
}
void one() {
	do
	{
		cout << "int: " << sizeof(int) << "\n";
		cout << "short int: " << sizeof(short int) << "\n";
		cout << "long int: " << sizeof(long int) << "\n";
		cout << "float: " << sizeof(float) << "\n";
		cout << "double: " << sizeof(double) << "\n";
		cout << "long double: " << sizeof(long double) << "\n";
		cout << "char: " << sizeof(char) << "\n";
		cout << "bool: " << sizeof(bool) << "\n\n";
		cout << "Выберите следующее действие:\n";
		cout << "1. Вернуться к главному меню\n";
		cout << "2. Выйти из программы\n";
		int choice;
		cin >> choice;
		if (choice == 1) {
			system("cls");
			break;
		}
		else if (choice == 2) {
			exit(0);
		}
		else {
			system("cls");
			cout << "\tОшибка\n";
			continue;
		}
	} while (true);
}
void two() {
	do
	{
		cout << "Введите целое число.\n";
		int num;
		cin >> num;
		unsigned int raz = sizeof(int) * 8 - 1; // Количество разрядов
		unsigned mask = 1 << raz - 1; // Маска побитового сравнения
		for (int i = 0; i <= raz -1 ; i++)
		{
			putchar(num & mask ? '1' : '0'); // если 1, то возвращается 1, иначе 0
			num <<= 1;
			if (i % 8 == 0)
			{
				putchar(' ');// Разделитель
			}
		}
		cout << "\n\n";
		cout << "Выберите следующее действие:\n";
		cout << "1. Вернуться к главному меню\n";
		cout << "2. Выйти из программы\n";
		int choice;
		cin >> choice;
		if (choice == 1) {
			system("cls");
			break;
		}
		else if (choice == 2) {
			exit(0);
		}
		else {
			system("cls");
			cout << "\tОшибка\n";
			continue;
		}
	} while (true);
	
}
void three() {
	do
	{
		cout << "Введите дробное число.\n";
		unsigned int raz = sizeof(float) * 8; // Количество разрядов
		unsigned int mask = 1 << raz - 1; // Маска побитового сравнения
		union
		{
			int num;
			float float_num;
		};
		cin >> float_num;
		while (float_num != 0) {

			for (int i = 1; i <= raz; i++)
			{
				putchar(num & mask ? '1' : '0'); // если 1, то возвращается 1, иначе 0
				num <<= 1;
				if (i == 1 || i == 2 || i == 9)
					putchar(' ');// Разделитель
			}

		}
		cout << "\n\n";
		cout << "Выберите следующее действие:\n";
		cout << "1. Вернуться к главному меню\n";
		cout << "2. Выйти из программы\n";
		int choice;
		cin >> choice;
		if (choice == 1) {
			system("cls");
			break;
		}
		else if (choice == 2) {
			exit(0);
		}
		else {
			system("cls");
			cout << "\tОшибка\n";
			continue;
		}
	} while (true);
}
void four()
{
	exit(0);
}
