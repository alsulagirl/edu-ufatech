#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>

using namespace std;

typedef struct
{
	int date;
	int month;
	int year;
} Date;

class Student
{
private:
	
	Date birthday;

	char *surname,
		*name,
		*lastname,
		*address,
		*phone,
		*faculty;
	int course;

public:
	Student();//конструктор
	Student(char *surname, char *name, char *lastname, Date birthday, char *address, char *phone, char *faculty, int course);
	Student(const Student &student);//конструктор копирования
	~Student();//деструктор

	void setStudentSurname(char *surname);
	void setStudentName(char *name);
	void setStudentLastname(char *lastname);
	void setStudentBirthday(Date birthday);
	void setStudentAddress(char *address);
	void setStudentPhone(char *phone);
	void setStudentFaculty(char *faculty);
	void setStudentCourse(int course);
	void setStudent();

	char* getStudentSurname();
	char* getStudentName();
	char* getStudentLastname();
	Date getStudentBirthday();
	char* getStudentAddress();
	char* getStudentPhone();
	char* getStudentFaculty();
	int getStudentCourse();
	void getStudent();

	void showStudent();
};

#endif STUDENT_H_
