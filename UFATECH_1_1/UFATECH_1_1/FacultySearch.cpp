#include "stdafx.h"
#include "FacultySearch.h"

using namespace std;

 void FacultySearch(Student * mass, char* faculty, int n)
{
	 int k = 0;
	 for (int i = 0; i < n; i++) {

		 if (string(faculty) == string(mass[i].getStudentFaculty())) {
			 mass[i].showStudent();
			 k = -1;
		 }
		 k++;
	 }

	 if (k == n) cout << "Таких студентов нет" << endl;
}
