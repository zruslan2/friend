#pragma once
#include"library.h"
#include "Exam.h"

class Student
{
private:
	string name;
	string sname;
	int age;
	string male;
	int group;
public:
	//constructor
	Student();
	Student(string name, string sname, int age, string male, int group);
	Student(const Student& obj);
	//destructor
	virtual ~Student();

	string getSname() { return sname; }

	int getGroup() { return this->group; }

	bool operator>(int age);

	friend void printStudents(Student*ss, int size);
	friend void printStudent(Student&s);
	friend void operator >> (istream& in, Student &s);
	/*friend void add(Student*s);*/
	friend bool operator==(int group, Student obj);
	friend bool operator!=(string male, Student obj);
	friend bool operator<(int age, Student obj);
	friend bool operator<(Student obj1, Student obj2);
	friend class Exam;
};
