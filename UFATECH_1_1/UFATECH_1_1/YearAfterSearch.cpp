#include "stdafx.h"
#include "YearAfterSearch.h"

void  YearAfterSearch(Student * mass, int year, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (year < mass[i].getStudentBirthday().year) {
			mass[i].showStudent();
			k = -1;
		}
		k++;
	}
	if (k == n) cout << "Таких студентов нет" << endl;
}
