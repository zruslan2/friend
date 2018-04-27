#pragma once
#include "library.h"
#include "Student.h"
#include "Teacher.h"

class Student;
class Teacher;

class Exam
{
private:
	string subject;
	string teacher_sname;
	string student_snam;
	double grade;
public:
	Exam()=default;
	Exam(string sub, string tech, string stud, double gr);
	Exam(string Subj, Student sobj, Teacher tobj,double gr);
	Exam(Exam&ex);
	void creat_exam(string Subj, Student sobj, Teacher tobj, double gr);
	
	friend void printExam(Exam *obj, int size);
	friend void printExc(Exam *obj, int size);
	friend void printDeu(Exam *obj, int size);
	virtual ~Exam();
};

