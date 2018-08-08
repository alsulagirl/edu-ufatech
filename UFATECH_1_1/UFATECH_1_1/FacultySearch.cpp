#include "stdafx.h"
#include "FacultySearch.h"

using namespace std;

 void FacultySearch(Student * mass, char * faculty, int n)
{
	 for (int i = 0; i < n; i++) {
		 if (strcmp(faculty, mass[i].getStudentFaculty()) == 0 ) {
			 mass[i].showStudent();
		 }
	 }
}
