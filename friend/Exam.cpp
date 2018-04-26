#include "Exam.h"

Exam::Exam(string sub, string tech, string stud, double gr)
{
	this->subject = sub;
	this->teacher_sname = tech;
	this->student_snam = stud;
	this->grade = gr;
}

Exam::Exam(Exam&ex)
{
	this->subject = ex.subject;
	this->teacher_sname = ex.teacher_sname;
	this->student_snam = ex.student_snam;
	this->grade = ex.grade;
}

Exam::Exam(string Subj, Student sobj, Teacher tobj, double gr)
{
	this->subject = Subj;
	this->student_snam = sobj.sname;
	this->teacher_sname = tobj.sname;
	this->grade = gr;
}

void Exam::creat_exam(string Subj, Student sobj, Teacher tobj, double gr)
{
	this->subject = Subj;	
	this->student_snam = sobj.sname;
	this->teacher_sname = tobj.sname;
	this->grade = gr;	
}

void printExam(Exam *obj, int size)
{
	for (int i = 0;i < size;i++)	
		cout <<setw(35)<< obj[i].subject << setw(15) << obj[i].student_snam << setw(15) << obj[i].teacher_sname << setw(6) << obj[i].grade << endl;
}

Exam::~Exam()
{
}
