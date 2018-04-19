#include "Vector.h"

void main()
{

	/*Разработать класс «Вектор», реализующий работу с 
		одномерным динамическим массивом целых чисел.
		Возможности класса – добавление нового значения 
		в конец дин.массива, добавление в указанную позицию,
		удаление из указанной позиции, изменение значения в 
		указанной позиции, возврат значения из указанной позиции.
		Необходим ли для класса «Вектор» конструктор копирования ? 
		Деструктор ? Если да – реализуйте.*/

	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;

	do
	{
		cout << "Разработать класс «Вектор», реализующий работу с одномерным динамическим массивом целых чисел." << endl;
		cout << "Для добавления значения в конец дин. массива, введите - 1" << endl;
		cout << "Для добавления в указанную позицию, введите - 2" << endl;
		cout << "Для удаления из указанной позиции, введите - 3" << endl;
		cout << "Для  изменение значения в указанной позиции, введите - 4" << endl;
		cout << "Для возврат значения из указанной позиции - 5" << endl;
		cout << "Для выхода введите 0\n ---> ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			system("cls");
			cout << "Добавление значения в конец дин. массива" << endl;
			cout << "Введите значение, которое хотите добавить\n ---> ";
			int n;
			cin >> n;
			Vector v1(5);
			cout << "ДО" << endl;
			v1.printVector();
			cout << "\nПосле" << endl;
			v1.push_back(n);
			v1.printVector();
			system("pause");
			system("cls");
		} break;

		case 2:
		{
			system("cls");
			cout << "Добавление в указанную позицию" << endl;
			cout << "Введите значение, которое хотите добавить\n ---> ";
			int n;
			cin >> n;
			cout << "Введите позицию\n -->";
			int pos;
			cin >> pos;
			Vector v1(5);
			cout << "ДО" << endl;
			v1.printVector();
			cout << "\nПосле" << endl;
			v1.push_back(n, pos);
			v1.printVector2();
			system("pause");
			system("cls");
		} break;

		case 3:
		{
			system("cls");
			int size = 4 + rand() % 4;
			int pos;
			Vector v1(size);
			v1.VectorFilling(size);
			cout << "Удаление из указанной позиции" << endl;
			printf("Введите позицию(доступное кол-во - %d)\n", size);
			do
			{
				cout << "---> ";
				cin >> pos;
			} while (pos > size || pos <= 0);
			cout << "\nДО" << endl;
			v1.printVector();
			v1.push_forward(pos);
			cout << "\nПосле" << endl;
			v1.printVector();
			system("pause");
			system("cls");
		} break;

		case 4:
		{
			system("cls");
			cout << "Изменение значения в указанной позиции" << endl;
			int size = 4 + rand() % 4;
			int pos;
			Vector v1(size);
			v1.VectorFilling(size);
			v1.printVector3();
			printf("\nВведите позицию, которую хотите изменить(доступное кол-во - %d)\n", size);
			do
			{
				cout << "---> ";
				cin >> pos;
			} while (pos > size || pos <= 0);
			cout << "На какое число хотите заменить?\n---> ";
			int numb;
			cin >> numb;
			v1.PositionChange(size, pos, numb);
			v1.printVector3();
			system("pause");
			system("cls");
		} break;

		case 5:
		{
			system("cls");
			cout << "Возврат значения из указанной позиции" << endl;
			int size = 4 + rand() % 4;
			int pos;
			Vector v1(size);
			v1.VectorFilling(size);
			v1.printVector3();
			printf("\nВведите позицию,значение которого хотит вернуть(доступное кол-во - %d)\n", size);
			do
			{
				cout << "---> ";
				cin >> pos;
			} while (pos > size || pos <= 0);
			int res = v1.getMeaning(size, pos);
			printf("Значение %d-й позиции - %d\n", pos, res);
			system("pause");
			system("cls");
		} break;
		}
	} while (task != 0);
	
	/*Vector v1(5);
	Vector v2(v1);
	v2.printVector();
	v2.push_back(5);
	v2.printVector();*/
	//system("pause");
}