#pragma once

#include "Library.h"

Genre InputGenre()
{
	int temp;
	cout << "0 - приключени€" << endl;
	cout << "1 - триллер" << endl;
	cout << "2 - фантастика" << endl;
	cout << "3 - исторический роман" << endl;
	cout << "4 - любовный роман" << endl;
	cout << "5 - ужасы" << endl;
	cout << "введите номер - "; cin >> temp;

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
		cout << "ѕриключени€" << endl;
		break;
	case Thriller:
		cout << "“риллер" << endl;
		break;
	case Fantasy:
		cout << "‘антастика" << endl;
		break;
	case Historical:
		cout << "»сторический роман" << endl;
		break;
	case Novel:
		cout << "Ћюбовный роман" << endl;
		break;
	case Horror:
		cout << "”жасы" << endl;
		break;
	}
}

Book InputBook()
{
	Book temp;

	cout << "¬вод данных о книге: " << endl;
	cout << "¬ведите название книги: "; cin >> temp.nameBook;
	cout << "¬ведите автора: "; cin >> temp.author;
	cout << "¬ведите издательство: "; cin >> temp.publishingHouse;
	cout << "¬ведите жанр: " << endl; temp.genre = InputGenre();

	return temp;
}
Book InputNewBook()
{
	Book temp;

	cout << "»зменение данных о книге: " << endl;
	cout << "¬ведите новое название книги: "; cin >> temp.nameBook;
	cout << "¬ведите нового автора: "; cin >> temp.author;
	cout << "¬ведите новое издательство: "; cin >> temp.publishingHouse;
	cout << "¬ведите жанр: " << endl; temp.genre = InputGenre();

	return temp;
}

void PrintBook(Book book)
{
	cout << "====== нига======" << endl;
	cout << book.nameBook << endl;
	cout << book.author << endl;
	cout << book.publishingHouse << endl;
	PrintGenre(book.genre);
	cout << "=================" << endl;
}
void EditingBook(vector<Book>& lybrery)
{
	cout << "¬ведите название книги дл€ редактировани€: ";
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
	cout << "¬ведите название книги: ";
	string temp2;
	cin >> temp2;
	for (auto item : lybrery)
	{
		if (temp2 == item.nameBook) PrintBook(item);
	}
}
void SearchAuthorBook(vector<Book>& lybrery) {
	cout << "¬ведите название книги: ";
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
