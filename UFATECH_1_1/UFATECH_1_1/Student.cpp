#include "stdafx.h"
#include "Student.h"
#pragma warning(disable : 4996)

using namespace std;

	//Конструктор
Student::Student()
{
	this->surname = new char;

	this->name = new char;

	this->lastname = new char;

	this->birthday.date = 0;
	this->birthday.month = 0;
	this->birthday.year = 0;

	this->address = new char;

	this->phone = new char;

	this->faculty = new char;

	this->course = 0;
}


	Student:: Student(char *surname, char *name, char *lastname, Date birthday, char *address, char *phone, char *faculty, int course)
	{
		this->surname = new char;
		this->surname = surname;

		this->name = new char;
		this->name = name;

		this->lastname = new char;
		this->lastname = lastname;

		this->birthday.date = birthday.date;
		this->birthday.month = birthday.month;
		this->birthday.year = birthday.year;

		this->address = new char;
		this->address = address;

		this->phone = new char;
		this->phone = phone;

		this->faculty = new char;
		this->faculty = faculty;

		this->course = course;
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

		this->birthday.date = student.birthday.date;
		this->birthday.month = student.birthday.month;
		this->birthday.year = student.birthday.year;

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
		delete surname;
		delete name;
		delete lastname;
		delete address;
		delete phone;
		delete faculty;
	}

	void Student::setStudent()
	{
		printf("Введите данные о студенте\n");
		cin >> surname;
		cin >> name;
		cin >> lastname;
		scanf("%d.%d.%d", &birthday.date, &birthday.month, &birthday.year);
		cin >> address;
		cin >> phone;
		cin >> faculty;
		cin >> course;
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
		this->birthday.date = birthday.date;
		this->birthday.month = birthday.month;
		this->birthday.year = birthday.year;
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
		printf("%d.%d.%d, ", birthday.date, birthday.month, birthday.year);
		printf("%s, ", address);
		printf("%s, ", phone);
		printf("%s, ", faculty);
		printf("%i. ", course);
	}

	char* Student::getStudentSurname()
	{
		return surname;
	}
	char* Student::getStudentName()
	{
		return name;
	}
	char* Student::getStudentLastname()
	{
		return lastname;
	}
	Date Student::getStudentBirthday()
	{
		return birthday;
	}
	char* Student::getStudentAddress()
	{
		return address;
	}
	char* Student::getStudentPhone()
	{
		return phone;
	}
	char* Student::getStudentFaculty()
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
		printf("%d.%d.%d, ", birthday.date, birthday.month, birthday.year);
		printf("%s, ", address);
		printf("%s, ", phone);
		printf("%s, ", faculty);
		printf("%i. ", course);
	}
	

