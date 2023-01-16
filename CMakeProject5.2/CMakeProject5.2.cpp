// CMakeProject5.2.cpp: определяет точку входа для приложения.
//Урок 32. Задача 2.  Анализ данных о фильмах.

#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"
#include "CMakeProject5.2.h"
using namespace std;

struct Movie {
	string nameMovie;
	string country;
	string dateCreation;
	string filmDirector;
	string scriptwriter;
	string filmStudio;
	string annotation;
};

int main()
{
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
	Movie movie;
	ofstream file("movie.json");
	if (file.is_open()) {
		cout << "\n" << "The file is open for the record" << "\n";
	}
	else {
		cout << "\n" << "The file not found";
		return 1;
	}
	nlohmann::json dict = "{\"nameMovie\":\"Ivan Vasilievich Changes Profession\", \"country\":\"SSSR\", \"dateCreation\":\"1973\", \"filmDirector\":\"Leonid Gaidai\", \"scriptwriter\":\"Leonid Gaidai, Vladlen Bakhnov\", \"filmStudio\":\"Mosfilm\", \"annotation\":\"The film tells the story of an inventor(Alexandr Demyanenko) who creates a time machine that opens a portal to the 16th century. He then accidentally swaps his apartment building manger, Ivan Vasilyevich Bunsha (Yuriy Yakovlev), with his namesake and doppelganger, Tsar Ivan (Yuriy Yakovlev) the Terrible. Laugh follows laugh, as a bumbling Soviet building manager and the angry Tsar swap roles. The film also starred: Leonid Kuravlyov, Natalia Selezneva, Natalia Krachkovskaya, Saveliy Kramarov, Natalia Kustinskaya, Mikhail Pugovkin, Sergei Filippov, Vladimir Etush\"}"_json;
	movie.nameMovie = dict["nameMovie"];
	movie.country = dict["country"];
	movie.dateCreation = dict["dateCreation"];
	movie.filmDirector = dict["filmDirector"];
	movie.scriptwriter = dict["scriptwriter"];
	movie.filmStudio = dict["filmStudio"];
	movie.annotation = dict["annotation"];
	file << dict;
	file.close();
	string str = "";
	ifstream cfile("movie.json");
	if (cfile.is_open()) {
		cout << "\n" << "The file is open for reading" << "\n";
	}
	else {
		cout << "\n" << "The file not found";
		return 1;
	}
	while (!cfile.eof()) {
		cfile >> str;
		cout << str << " ";
		str = "";
	}
	cfile.close();
	return 0;
}
