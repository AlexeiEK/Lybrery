#pragma once

#include "Library.h"

Genre InputGenre()
{
	int temp;
	cout << "0 - �����������" << endl;
	cout << "1 - �������" << endl;
	cout << "2 - ����������" << endl;
	cout << "3 - ������������ �����" << endl;
	cout << "4 - �������� �����" << endl;
	cout << "5 - �����" << endl;
	cout << "������� ����� - "; cin >> temp;

	switch (temp) {
	case 0:
		return Adventures;
	case 1:
		return Thriller;
	case 2:
		return Fantasy;
	case 3:
		return Historical;
	case 4:
		return Novel;
	case 5:
		return Horror;
	}
}
void PrintGenre(Genre genre)
{
	switch (genre) {
	case Adventures:
		cout << "�����������" << endl;
		break;
	case Thriller:
		cout << "�������" << endl;
		break;
	case Fantasy:
		cout << "����������" << endl;
		break;
	case Historical:
		cout << "������������ �����" << endl;
		break;
	case Novel:
		cout << "�������� �����" << endl;
		break;
	case Horror:
		cout << "�����" << endl;
		break;
	}
}

Book InputBook()
{
	Book temp;

	cout << "���� ������ � �����: " << endl;
	cout << "������� �������� �����: "; cin >> temp.nameBook;
	cout << "������� ������: "; cin >> temp.author;
	cout << "������� ������������: "; cin >> temp.publishingHouse;
	cout << "������� ����: " << endl; temp.genre = InputGenre();

	return temp;
}
Book InputNewBook()
{
	Book temp;

	cout << "��������� ������ � �����: " << endl;
	cout << "������� ����� �������� �����: "; cin >> temp.nameBook;
	cout << "������� ������ ������: "; cin >> temp.author;
	cout << "������� ����� ������������: "; cin >> temp.publishingHouse;
	cout << "������� ����: " << endl; temp.genre = InputGenre();

	return temp;
}

void PrintBook(Book book)
{
	cout << "======�����======" << endl;
	cout << book.nameBook << endl;
	cout << book.author << endl;
	cout << book.publishingHouse << endl;
	PrintGenre(book.genre);
	cout << "=================" << endl;
}
void EditingBook(vector<Book>& lybrery)
{
	cout << "������� �������� ����� ��� ��������������: ";
	string temp2;
	cin >> temp2;
	int iter = 0;
	for (auto item : lybrery)
	{
		if (temp2 == item.nameBook)
		{
			PrintBook(item);
			lybrery[iter] = InputNewBook();
		}
		iter++;
	}
}

void PrintBooks(vector<Book>& lybrery)
{
	for (Book element : lybrery) {
		PrintBook(element);
	}
	cout << endl;
}

void SearchNameBook(vector<Book>& lybrery) {
	cout << "������� �������� �����: ";
	string temp2;
	cin >> temp2;
	for (auto item : lybrery)
	{
		if (temp2 == item.nameBook) PrintBook(item);
	}
}
void SearchAuthorBook(vector<Book>& lybrery) {
	cout << "������� �������� �����: ";
	string temp2;
	cin >> temp2;
	for (auto item : lybrery)
	{
		if (temp2 == item.author) PrintBook(item);
	}
}

void SortingNameBook(vector<Book>& lybrery)
{
	Book temp;
	for (int i = 0; i < lybrery.size(); i++)
	{
		for (int j = i + 1; j < lybrery.size(); j++)
		{
			if (lybrery[i].nameBook > lybrery[j].nameBook)
			{
				temp = lybrery[i];
				lybrery[i] = lybrery[j];
				lybrery[j] = temp;
			}
		}
	}
	PrintBooks(lybrery);
}
void SortingAuthorBook(vector<Book>& lybrery)
{
	Book temp;
	for (int i = 0; i < lybrery.size(); i++)
	{
		for (int j = i + 1; j < lybrery.size(); j++)
		{
			if (lybrery[i].author > lybrery[j].author)
			{
				temp = lybrery[i];
				lybrery[i] = lybrery[j];
				lybrery[j] = temp;
			}
		}
	}
	PrintBooks(lybrery);
}
void SortingHomeBook(vector<Book>& lybrery)
{
	Book temp;
	for (int i = 0; i < lybrery.size(); i++)
	{
		for (int j = i + 1; j < lybrery.size(); j++)
		{
			if (lybrery[i].publishingHouse > lybrery[j].publishingHouse)
			{
				temp = lybrery[i];
				lybrery[i] = lybrery[j];
				lybrery[j] = temp;
			}
		}
	}
	PrintBooks(lybrery);
}
