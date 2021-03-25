#pragma once

#include<string>

using namespace std;

enum Genre
{
	Adventures, Thriller, Fantasy, Historical, Novel, Horror
};

struct Book
{
	string nameBook;
	string author;
	string publishingHouse;
	Genre genre;
};

void InitLybrery(vector<Book>& lybrery) {
	Book temp;
	temp.nameBook = "B1";
	temp.author = "A2";
	temp.publishingHouse = "C3";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B2";
	temp.author = "A3";
	temp.publishingHouse = "C1";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B3";
	temp.author = "A1";
	temp.publishingHouse = "C2";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B4";
	temp.author = "A2";
	temp.publishingHouse = "C3";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B5";
	temp.author = "A3";
	temp.publishingHouse = "C1";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B6";
	temp.author = "A1";
	temp.publishingHouse = "C2";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B7";
	temp.author = "A2";
	temp.publishingHouse = "C3";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B8";
	temp.author = "A3";
	temp.publishingHouse = "C1";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B9";
	temp.author = "A1";
	temp.publishingHouse = "C2";
	temp.genre = Novel;
	lybrery.push_back(temp);

	temp.nameBook = "B10";
	temp.author = "A2";
	temp.publishingHouse = "C3";
	temp.genre = Novel;
	lybrery.push_back(temp);
}