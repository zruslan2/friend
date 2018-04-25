#include "Student.h"

int main()
{
	setlocale(LC_ALL, "");
	Student *s;
	int n;

	ifstream in_file("in.txt");
	/*cout << "Enter number of students" << endl;*/
	in_file >> n;
	s = new Student[n];	

	for (int i = 0;i < n;i++)
	{
		/*cout << "Enter name, surneme, age, gender and group" << endl;*/
		in_file >> s[i];
	}
		
	printStudents(s, n);
	cout << ("man" == s[0]) << endl;
	cout << ("man" != s[0]) << endl;
	cout << (20 < s[0]) << endl;
	cout << (s[0] > 18) << endl;
	cout << (s[0] < s[1]) << endl;

	system("pause");
	return 0;
}