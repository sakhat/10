#include "Descendant.h"
#include <conio.h>

int main(int argc, char** argv)
{

	setlocale(LC_ALL, "Russian");
	Ancestor *ptr1 = new Ancestor();
	Descendant *ptr2 = new Descendant();
	Ancestor *ptr3 = ptr2;
	Descendant *ptr4 = static_cast<Descendant*> (ptr3);

	cout << "��������� �� ������� �����, �������� �������� ������ �������� ������:" << endl;
	ptr1->func();
	ptr1->Virtualfunc();
	cout << endl;
	cout << "��������� �� ����������� �����, �������� �������� ������ ������������ ������:" << endl;
	ptr2->func();
	ptr2->Virtualfunc();
	cout << endl;
	cout << "��������� �� ������� �����, �������� �������� ������ �� ������� ���������:" << endl;
	ptr3->func();
	ptr3->Virtualfunc();
	cout << endl;
	cout << "��������� �� ����������� �����, �������� � �������������� ����������� �������� ���������� ���� �������� ������ �� �������� ���������:" << endl;
	ptr4->func();
	ptr4->Virtualfunc();
	cout << endl;
	_getch();
}