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
		cout << "============ Режимы работы ============" << endl;
		cout << "1 - Добавить книгу" << endl;
		cout << "2 - Редактировать книгу" << endl;
		cout << "3 - Печать всех книг" << endl;
		cout << "4 - Поиск книг по автору" << endl;
		cout << "5 - Поиск книги по названию" << endl;
		cout << "6 - Сортировка массива по названию книг" << endl;
		cout << "7 - Сортировка массива по автору" << endl;
		cout << "8 - Сортировка массива по издательству" << endl;
		cout << "=======================================" << endl;
		cout << "Введите номер режима - "; cin >> select;

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
		cout << "Хотите продолжить? Y - да "; cin >> yesNo;
	} while (yesNo == 'Y' || yesNo == 'y');
	cout << "До свидания..." << endl;
	return 0;
}