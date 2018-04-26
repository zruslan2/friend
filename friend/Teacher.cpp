#include "Teacher.h"


Teacher::Teacher()
{
	name = "";
	sname = "";
	age = 0;
	male = "man";
	faculty = "history";
}

Teacher::Teacher(string name, string sname, int age, string male, string faculty)
{
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->male = male;
	this->faculty = faculty;
}

Teacher::Teacher(const Teacher& obj)
{
	this->name = obj.name;
	this->sname = obj.sname;
	this->age = obj.age;
	this->male = obj.male;
	this->faculty = obj.faculty;
}


void printTecher(Teacher*t, int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << t[i].sname << "\t" << t[i].name << "\t" << t[i].age << "\t" << t[i].male << "\t" << t[i].faculty << endl;
	}		
}

void operator >> (istream& in, Teacher &s)
{
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');
	getline(in, s.sname, '\\');
	in >> s.age >> s.male;
	getline(in, s.faculty, '\\');
}

bool operator==(string faculty, Teacher obj)
{
	return(faculty == obj.male);
}

bool operator!=(string faculty, Teacher obj)
{
	return(faculty != obj.male);
}

bool operator<(int age, Teacher obj)
{
	return(age < obj.age);
}

bool operator>(int age, Teacher obj)
{
	return(age > obj.age);
}

bool operator>(Teacher obj1, Teacher obj2)
{
	return(obj1.age > obj2.age);
}

Teacher::~Teacher()
{
}