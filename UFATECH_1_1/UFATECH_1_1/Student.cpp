#include "stdafx.h"
#include "Student.h"
#pragma warning(disable : 4996)

using namespace std;

	//Конструктор
	Student:: Student()
	{
		this->surname = new char;
		this->name = new char;
		this->lastname = new char;
		this->birthday.d = 1;
		this->birthday.m = 1;
		this->birthday.y = 2000;
		this->address = new char;
		this->phone = new char;
		this->faculty = new char;
		this->course = 0;
	}

	//Конструктор копирования
	Student::Student(const Student& student)
	{
		this->surname = new char[strlen(student.surname) + 1];
		strcpy(this->surname, student.surname);

		this->name = new char[strlen(student.name) + 1];
		strcpy(this->name, student.name);

		this->lastname = new char[strlen(student.lastname) + 1];
		strcpy(this->lastname, student.lastname);

		this->birthday.d = student.birthday.d;
		this->birthday.m = student.birthday.m;
		this->birthday.y = student.birthday.y;

		this->address = new char[strlen(student.address) + 1];
		strcpy(this->address, student.address);

		this->phone = new char[strlen(student.phone) + 1];
		strcpy(this->phone, student.phone);

		this->faculty = new char[strlen(student.faculty) + 1];
		strcpy(this->faculty, student.faculty);

		this->course = student.course;
	}
	//Деструктор
	Student:: ~Student()
	{
		delete[]surname;
		delete[]name;
		delete[]lastname;
		delete[]address;
		delete[]phone;
		delete[]faculty;
	}

	void Student::setStudent()
	{
		printf("Введите данные о студенте\n");
		scanf("%s", surname);
		scanf("%s", name);
		scanf("%s", lastname);
		scanf("%d.%d.%d", &birthday.d, &birthday.m, &birthday.y);
		scanf("%s", address);
		scanf("%s", phone);
		scanf("%s", faculty);
		scanf("%i", &course);
	}

	void Student::setStudentSurname(char *surname)
	{
		this->surname = surname;
	}
	void Student::setStudentName(char *name)
	{
		this->name = name;
	}
	void Student::setStudentLastname(char *lastname)
	{
		this->lastname = lastname;
	}
	void Student::setStudentBirthday(Date birtday)
	{
		this->birthday.d = birthday.d;
		this->birthday.m = birthday.m;
		this->birthday.y = birthday.y;
	}
	void Student::setStudentAddress(char *address)
	{
		this->address = address;
	}
	void Student::setStudentPhone(char *phone)
	{
		this->phone = phone;
	}
	void Student::setStudentFaculty(char *faculty)
	{
		this->faculty = faculty;
	}
	void Student::setStudentCourse(int course)
	{
		this->course = course;
	}

	void Student::getStudent()
	{
		printf("%s, ", surname);
		printf("%s, ", name);
		printf("%s, ", lastname);
		printf("%d.%d.%d, ", birthday.d, birthday.m, birthday.y);
		printf("%s, ", address);
		printf("%s, ", phone);
		printf("%s, ", faculty);
		printf("%i. ", course);
	}

	char * Student::getStudentSurname()
	{
		return surname;
	}
	char * Student::getStudentName()
	{
		return name;
	}
	char * Student::getStudentLastname()
	{
		return lastname;
	}
	Date Student::getStudentBirthday()
	{
		return birthday;
	}
	char * Student::getStudentAddress()
	{
		return address;
	}
	char * Student::getStudentPhone()
	{
		return phone;
	}
	char * Student::getStudentFaculty()
	{
		return faculty;
	}
	int Student::getStudentCourse()
	{
		return course;
	}

	void Student::showStudent()
	{
		printf("%s, ", surname);
		printf("%s, ", name);
		printf("%s, ", lastname);
		printf("%d.%d.%d, ", birthday.d, birthday.m, birthday.y);
		printf("%s, ", address);
		printf("%s, ", phone);
		printf("%s, ", faculty);
		printf("%i. ", course);
	}
	

