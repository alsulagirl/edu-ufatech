#include "stdafx.h"
#include "YearAfterSearch.h"

void  YearAfterSearch(Student * mass, int year, int n)
{
	for (int i = 0; i < n; i++) {
		if (year < mass[i].getStudentBirthday().y) {
			mass[i].showStudent();
		}
	}
}
