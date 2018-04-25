#include "Student.h"

Student::Student()
{
	name = "";
	sname = "";
	age = 0;
	male = "man";
	group = 0;
}

Student::Student(string name, string sname, int age, string male, int group)
{
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->male = male;
	this->group = group;
}

Student::~Student() {};

Student::Student(const Student& obj)
{
	this->name = obj.name;
	this->sname = obj.sname;
	this->age = obj.age;
	this->male = obj.male;
	this->group = obj.group;
}

void printStudents(Student*ss, int size)
{
	string male;
	for (int i = 0;i < size;i++)
	{
		cout << ss[i].sname << "\t" << ss[i].name << "\t" << ss[i].age << 
			"\t" << ss[i].male<< "\t" << ss[i].group<<endl;
	}
}

void operator >> (istream& in, Student &s)
{
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '\\');		
	getline(in, s.sname, '\\');	
	in >> s.age >> s.male >> s.group;	
}

bool operator==(string male, Student obj)
{
	return(male == obj.male);
}

bool operator!=(string male, Student obj)
{
	return(male != obj.male);
}

bool operator<(int age, Student obj)
{
	return(age < obj.age);
}

bool Student::operator>(int age)
{
	return(this->age > age);
}

bool operator<(Student obj1, Student obj2)
{
	return(obj1.age < obj2.age);
}