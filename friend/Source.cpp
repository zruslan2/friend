#include "Student.h"
#include "Techer.h"

int main()
{
	setlocale(LC_ALL, "");
	Student *s;
	int n,np;
	Techer *t;


	ifstream in_file("in.txt");
	ifstream t_file("t.txt");
	/*cout << "Enter number of students" << endl;*/
	in_file >> n;
	t_file >> np;
	s = new Student[n];	
	t = new Techer[np];

	for (int i = 0;i < n;i++)
	{
		/*cout << "Enter name, surneme, age, gender and group" << endl;*/
		in_file >> s[i];
	}

	for (int i = 0;i < np;i++)
	{
		/*cout << "Enter name, surneme, age, gender and group" << endl;*/
		t_file >> t[i];
	}
		
	printStudents(s, n);
	printTecher(t, np);
	/*cout << ("man" == s[0]) << endl;
	cout << ("man" != s[0]) << endl;
	cout << (20 < s[0]) << endl;
	cout << (s[0] > 18) << endl;
	cout << (s[0] < s[1]) << endl;*/

	system("pause");
	return 0;
}