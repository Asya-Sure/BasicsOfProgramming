#include <iostream>
#include "Task1.h"

using namespace std;

void Task1Method()
{
    while (true)
    {

        setlocale(0, "");
        float a;
        cout << "������� A: ";
        cin >> a;
        if ((a > -6 && a <= 7) || (a >= 10 && a < 30))
            printf("�������� - (-6;7] OR [10;30)\n� - ������ � ��������\n", a);
        else
            printf("� - �� ������ � ��������\n", a);
    }
}