#include "Vector.h"

void main()
{

	/*����������� ����� �������, ����������� ������ � 
		���������� ������������ �������� ����� �����.
		����������� ������ � ���������� ������ �������� 
		� ����� ���.�������, ���������� � ��������� �������,
		�������� �� ��������� �������, ��������� �������� � 
		��������� �������, ������� �������� �� ��������� �������.
		��������� �� ��� ������ ������� ����������� ����������� ? 
		���������� ? ���� �� � ����������.*/

	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;

	do
	{
		cout << "����������� ����� �������, ����������� ������ � ���������� ������������ �������� ����� �����." << endl;
		cout << "��� ���������� �������� � ����� ���. �������, ������� - 1" << endl;
		cout << "��� ���������� � ��������� �������, ������� - 2" << endl;
		cout << "��� �������� �� ��������� �������, ������� - 3" << endl;
		cout << "���  ��������� �������� � ��������� �������, ������� - 4" << endl;
		cout << "��� ������� �������� �� ��������� ������� - 5" << endl;
		cout << "��� ������ ������� 0\n ---> ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			system("cls");
			cout << "���������� �������� � ����� ���. �������" << endl;
			cout << "������� ��������, ������� ������ ��������\n ---> ";
			int n;
			cin >> n;
			Vector v1(5);
			cout << "��" << endl;
			v1.printVector();
			cout << "\n�����" << endl;
			v1.push_back(n);
			v1.printVector();
			system("pause");
			system("cls");
		} break;

		case 2:
		{
			system("cls");
			cout << "���������� � ��������� �������" << endl;
			cout << "������� ��������, ������� ������ ��������\n ---> ";
			int n;
			cin >> n;
			cout << "������� �������\n -->";
			int pos;
			cin >> pos;
			Vector v1(5);
			cout << "��" << endl;
			v1.printVector();
			cout << "\n�����" << endl;
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
			cout << "�������� �� ��������� �������" << endl;
			printf("������� �������(��������� ���-�� - %d)\n", size);
			do
			{
				cout << "---> ";
				cin >> pos;
			} while (pos > size || pos <= 0);
			cout << "\n��" << endl;
			v1.printVector();
			v1.push_forward(pos);
			cout << "\n�����" << endl;
			v1.printVector();
			system("pause");
			system("cls");
		} break;

		case 4:
		{
			system("cls");
			cout << "��������� �������� � ��������� �������" << endl;
			int size = 4 + rand() % 4;
			int pos;
			Vector v1(size);
			v1.VectorFilling(size);
			v1.printVector3();
			printf("\n������� �������, ������� ������ ��������(��������� ���-�� - %d)\n", size);
			do
			{
				cout << "---> ";
				cin >> pos;
			} while (pos > size || pos <= 0);
			cout << "�� ����� ����� ������ ��������?\n---> ";
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
			cout << "������� �������� �� ��������� �������" << endl;
			int size = 4 + rand() % 4;
			int pos;
			Vector v1(size);
			v1.VectorFilling(size);
			v1.printVector3();
			printf("\n������� �������,�������� �������� ����� �������(��������� ���-�� - %d)\n", size);
			do
			{
				cout << "---> ";
				cin >> pos;
			} while (pos > size || pos <= 0);
			int res = v1.getMeaning(size, pos);
			printf("�������� %d-� ������� - %d\n", pos, res);
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