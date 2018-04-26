#pragma once
#include "library.h"

class Techer
{
private:
	string name;
	string sname;
	int age;
	string male;
	string faculty;
public:
	Techer();
	Techer(string name, string sname, int age, string male, string faculty);
	Techer(const Techer& obj);	

	friend void printTecher(Techer*t, int size);

	friend bool operator==(string male, Techer obj);
	friend bool operator!=(string male, Techer obj);
	friend bool operator<(int age, Techer obj);
	friend bool operator>(int age, Techer obj);

	virtual ~Techer();
};

