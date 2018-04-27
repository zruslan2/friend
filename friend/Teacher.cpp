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


void printTechers(Teacher*t, int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << t[i].sname << "\t" << t[i].name << "\t" << t[i].age << "\t" << t[i].male << "\t" << t[i].faculty << endl;
	}		
}

void printTecher(Teacher&t)
{
	cout << t.sname << "\t" << t.name << "\t" << t.age << "\t" << t.male << "\t" << t.faculty << endl;
}

void operator >> (istream& in, Teacher &s)
{
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');
	getline(in, s.sname, '\\');
	in >> s.age >> s.male;
	getline(in, str, ' ');
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

void minA(Teacher *t, int r)
{
	int min = 100,im=0;
	for (int i = 0;i < r;i++)
	{
		if (t[i].age < min)
		{
			min = t[i].age;
			im = i;
		}
	}
	printTecher(t[im]);
}

void maxA(Teacher *t, int r)
{
	int max = 0, im = 0;
	for (int i = 0;i < r;i++)
	{
		if (t[i].age > max)
		{
			max = t[i].age;
			im = i;
		}
	}
	printTecher(t[im]);
}

void faculty(Teacher *t, string f,int r)
{
	for (int i = 0;i < r;i++)
	{
		if(t[i].faculty==f)
			printTecher(t[i]);
	}
}

Teacher::~Teacher()
{
}