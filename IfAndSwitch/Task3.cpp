#include <iostream>
#include "Task3.h"

using namespace std;

void Task3Method()
{
	while (true)
	{
		setlocale(0, "");
		int x, y, z;

		cout << "������� ������ �� ���������� :";
		cin >> x;
		if (x <= 5 || x >= 0)
			cout << "������ �� ����������: " << x << endl;
		else
			cout << "��� ����� ������";

		cout << "������� ������ �� ������ :";
		cin >> y;
		if (y <= 5 || y >= 0)
			cout << "������ �� ������: " << y << endl;
		else
			cout << "��� ����� ������";

		cout << "������� ������ �� ��� ���� :";
		cin >> z;
		if (z <= 5 || z >= 0)
			cout << "������ �� ��� ����: " << z << endl;
		else
			cout << "��� ����� ������";

		if (x <= 2 || y <= 2 || z <= 2)
			cout << "�� ��������\n";
		else if (((x + y + z) / 2) > 3.75)
			cout << "�������� �� ������\n";
		else
			cout << "�������� �� ��������\n";
	}
}