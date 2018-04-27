#include "Student.h"
#include "Teacher.h"

int main()
{
	setlocale(LC_ALL, "");
	Student *s;
	int n,np,en;
	Teacher *t;
	
	ifstream in_file("in.txt");
	ifstream t_file("t.txt");
	ofstream out_file("exams.txt");
	/*cout << "Enter number of students" << endl;*/
	in_file >> n;
	t_file >> np;
	s = new Student[n];	
	t = new Teacher[np];

	for (int i = 0;i < n;i++)
	{
		/*cout << "Enter name, surneme, age, gender and group" << endl;*/
		in_file >> s[i];
	}

	int i = 0;
	while(!t_file.eof())
	{
		t_file >> t[i++];
	}
	cout << "Students:\n";
	printStudents(s, n);
	cout << "Teachers:\n";
	printTecher(t, np);
	en = n*np;
	Exam *ex = new Exam[en];
	string subj;
	int k = 0;
	double gr;
	for (int i = 0; i < np;i++)
	{
		cout << "������� �������� �������� "; cin >> subj;
		for (int j = 0;j < n;j++)
		{
			cout << "������� ������ ";cin >> gr;
			/*Exam e(subj, s[i].getSname(), t[i].getSname, gr);*/
			ex[k++].creat_exam(subj, s[j], t[j], gr);
		}
	}
	printExam(ex, en);
	int task;
	while (true)
	{
		cout << "�������� ������:	" << endl;
		cout << "0 - �����" << endl;
		cout << "1 - �������� �������� ����" << endl;
		cout << "2 - �������� �������� ����" << endl;
		cout << "3 - �������� �� �������" << endl;
		cout << "4 - ������ �������� �������������" << endl;
		cin >> task;
		switch (task)
		{
		case 1:
		{
			/*system("cls");*/
			cout << "C������� �������� ����:" << endl;
			for (int i = 0;i < n;i++)
			{
				if ("man" == s[i])printStudent(s[i]);
			}
		}
		break;
		case 2:
		{
			cout << "C������� �������� ����:" << endl;
			for (int i = 0;i < n;i++)
			{
				if ("woman" == s[i])printStudent(s[i]);
			}
		}
		break;
		case 3:
		{
			int gr;
			cout << "������� ����� ������: " << endl; cin >> gr;
			for (int i = 0;i < n;i++)
			{
				if(s[i].getGroup()==gr)printStudent(s[i]);
			}
		}
		break;
		case 4:
		{

		}
		break;
		default:
			break;
		}
	}
	
	

	delete[] s;
	delete[] t;
	system("pause");
	return 0;
}