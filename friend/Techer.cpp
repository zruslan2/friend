#include "Techer.h"


Techer::Techer()
{
	name = "";
	sname = "";
	age = 0;
	male = "man";
	faculty = "history";
}

Techer::Techer(string name, string sname, int age, string male, string faculty)
{
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->male = male;
	this->faculty = faculty;
}

Techer::Techer(const Techer& obj)
{
	this->name = obj.name;
	this->sname = obj.sname;
	this->age = obj.age;
	this->male = obj.male;
	this->faculty = obj.faculty;
}


void printTecher(Techer&t, int size)
{

}

Techer::~Techer()
{
}