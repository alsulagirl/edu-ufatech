#include "stdafx.h"
#include "CourseSearch.h"

void CourseSearch(Student * mass, int course, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (course == mass[i].getStudentCourse()) {
			mass[i].showStudent();
			k = -1;
		}
		k++;
	}
	if (k == n) cout << "Таких студентов нет" << endl;
}
