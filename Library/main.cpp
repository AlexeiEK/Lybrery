#include<iostream>
#include<vector>
#include<string>

#include "Library.h"
#include "Utilites.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	vector<Book> lybrery;

	InitLybrery(lybrery);

	int select;
	char yesNo;
	do
	{
		cout << "============ ������ ������ ============" << endl;
		cout << "1 - �������� �����" << endl;
		cout << "2 - ������������� �����" << endl;
		cout << "3 - ������ ���� ����" << endl;
		cout << "4 - ����� ���� �� ������" << endl;
		cout << "5 - ����� ����� �� ��������" << endl;
		cout << "6 - ���������� ������� �� �������� ����" << endl;
		cout << "7 - ���������� ������� �� ������" << endl;
		cout << "8 - ���������� ������� �� ������������" << endl;
		cout << "=======================================" << endl;
		cout << "������� ����� ������ - "; cin >> select;

		switch (select) {
		case 1: {
			Book temp = InputBook();
			lybrery.push_back(temp);
			break;
		}
		case 2: {
			EditingBook(lybrery);
			break;
		}
		case 3: {
			PrintBooks(lybrery);
			break;
		}
		case 4: {
			SearchAuthorBook(lybrery);
			break;
		}
		case 5: {
			SearchNameBook(lybrery);
			break;
		}
		case 6: {
			SortingNameBook(lybrery);
			break;
		}
		case 7: {
			SortingAuthorBook(lybrery);
			break;
		}
		case 8: {
			SortingHomeBook(lybrery);
			break;
		}
		}
		cout << "������ ����������? Y - �� "; cin >> yesNo;
	} while (yesNo == 'Y' || yesNo == 'y');
	cout << "�� ��������..." << endl;
	return 0;
}