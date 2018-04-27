#pragma once
#include "library.h"
#include "Exam.h"

class Teacher
{
private:
	string name;
	string sname;
	int age;
	string male;
	string faculty;
public:
	Teacher();
	Teacher(string name, string sname, int age, string male, string faculty);
	Teacher(const Teacher& obj);	
	string getSname() { return sname; }
	int getAge() { return age; }
	friend void printTechers(Teacher*t, int size);
	friend void printTecher(Teacher&t);
	friend void operator >> (istream& in, Teacher &s);
	friend bool operator==(string faculty, Teacher obj);
	friend bool operator!=(string faculty, Teacher obj);
	friend bool operator<(int age, Teacher obj);
	friend bool operator>(int age, Teacher obj);
	friend bool operator>(Teacher obj1, Teacher obj2);
	friend class Exam;
	friend void minA(Teacher *t, int r);
	friend void maxA(Teacher *t, int r);
	friend void faculty(Teacher *t, string f, int r);
	virtual ~Teacher();
};

