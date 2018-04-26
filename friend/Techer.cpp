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


void printTecher(Techer*t, int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << t[i].name << "\t" << t[i].sname << "\t" << t[i].age << "\t" << t[i].male << "\t" << t[i].faculty << endl;
	}		
}

void operator >> (istream& in, Techer &s)
{
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');
	getline(in, s.sname, '\\');
	in >> s.age >> s.male;
	getline(in, s.faculty, '\\');
}

bool operator==(string faculty, Techer obj)
{
	return(faculty == obj.male);
}

bool operator!=(string faculty, Techer obj)
{
	return(faculty != obj.male);
}

bool operator<(int age, Techer obj)
{
	return(age < obj.age);
}

bool operator>(int age, Techer obj)
{
	return(age > obj.age);
}

bool operator>(Techer obj1, Techer obj2)
{
	return(obj1.age > obj2.age);
}

Techer::~Techer()
{
}