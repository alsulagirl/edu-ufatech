#include "stdafx.h"
#include "CourseSearch.h"

void CourseSearch(Student * mass, int course, int n)
{
	for (int i = 0; i < n; i++) {
		if (course == mass[i].getStudentCourse()) {
			mass[i].showStudent();
		}
	}
}
