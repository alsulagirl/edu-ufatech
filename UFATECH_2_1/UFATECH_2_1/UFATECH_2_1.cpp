#include<iostream>
#include<Windows.h>
#include"Figure.h"
#include"Square.h"
#include"Circle.h"
#include"Rectangle.h"

using namespace std;

int main() {

	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	int n = 3;
	Figure **geometry = new Figure*[n];

	for (int i = 0; i < n; i++) {
		cout << "1 Квадрат \n2 Окружность \n3 Прямоугольник" << endl;
		int a=1; cin >> a;
		switch (a) {
		case 1:
		{
			cout << "Введите длину стороны квадрата" << endl;
			double side; cin >> side;
			geometry[i] = new Square(side);
			break;
		}
		case 2:
		{
			cout << "Введите длину радиуса" << endl;
			double radius; cin >> radius;
			geometry[i] = new Circle(radius);
			break;
		}
		case 3:
		{
			cout << "Введите длины сторон прямоугольника" << endl;
			double st1, st2; cin >> st1; cin >> st2;
			geometry[i] = new Rect(st1, st2);
			break;
		}
		}
		
	}
	cout << "Информация о фигурах" << endl;
	for (int i = 0; i < n; i++) {
		geometry[i]->show();
	}

		delete[] geometry;
	
	system("pause");
	return 0;
}