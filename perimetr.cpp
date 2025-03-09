#include <iostream>
#include <cmath>
using namespace std;

int perimetr(int &perimeter, int &a, int &b) // Функция вычисления периметра
    {
    perimeter = 2 * (a + b); // Исправлена формула периметра
    return perimeter;
    }

int square(int &area, int &a, int &b) // Функция вычисления площади
    {
    area = a * b;
    return area;
    }

double lengthDiagonal(double &d, int &a, int &b) // Функция вычисления длины диагонали
    {
    d = sqrt((a * a) + (b * b));
    return d;
    }   

int rectangle()
    {
    int input;
    cout << "Что вы хотите определить?:" << endl
         << "1) Периметр" << endl
         << "2) Площадь" << endl
         << "3) Длину диагонали" << endl
         << "4) Все вместе" << endl
         << "5) Выход" << endl;
    cin >> input;

    switch (input)
    {
    case 1:
    {
        int a, b; // стороны прямоугольника
        int perimeter;
        cout << "Напишите длину стороны a:" << endl;
        cin >> a;
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        perimetr(perimeter, a, b);
        cout << "Периметр прямоугольника равен: " << perimeter;
        break;
    }
    case 2:
    {
        int a, b; // стороны прямоугольника
        int area;
        cout << "Напишите длину стороны a:" << endl;
        cin >> a;
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        square(area, a, b);
        cout << "Площадь прямоугольника равна: " << area;
        break;
    }
    case 3:
    {
        int a, b; // стороны прямоугольника
        double length;
        cout << "Напишите длину стороны a:" << endl;
        cin >> a;
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        lengthDiagonal(length, a, b);
        cout << "Длина диагонали прямоугольника равна: " << length;
        break; // Добавлен break
    }
    case 4:
    {
        int a, b;
        int perimeter;
        int area;
        double length;
        cout << "Напишите длину стороны a:" << endl;
        cin >> a;
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        perimetr(perimeter, a, b);
        cout << "Периметр прямоугольника равен: " << perimeter << endl;
        square(area, a, b);
        cout << "Площадь прямоугольника равна: " << area << endl;
        lengthDiagonal(length, a, b);
        cout << "Длина диагонали прямоугольника равна: " << length << endl;
        break;
    }
    case 5:
    {
        std::cout << "Exiting the program...\n";
        return 0; // Выход из программы
    }
    default: // Обработка неверного ввода
    {
        std::cout << "Ошибка: неверный выбор. Пожалуйста, выберите от 1 до 5.\n";
        break;
    }
    }

    return 0; // Возврат значения в конце функции
}


//Trapezoid part
int trapezoid(){
    int option;

    while(1){
        std::cout << "Enter any option \n \
            1) perimeter of a trapezoid \n \
            2) area of a trapezoid \n \
            3) midle line of a trapezoid \n \
            4) exiting the program \n \
            "; 
        scanf("%d", &option);
        switch(option){
            case 1: {
                std::cout << "Enter all sides \n>>>";
                int a, b, c, d; //this is sides!
                scanf("%d %d %d %d", &a, &b, &c, &d);
                int perimeter = a+b+c+d;
                std::cout <<"perimeter of trapezoid is " << perimeter \
                    << "\n##############" << std::endl;
                break;
                }
            case 2:{
                std::cout << "Enter sides a, b of the base and height h \n>>>";
                int a, b, h;//a,b - side of the base and h - height
                scanf("%d %d %d", &a, &b, &h);
                int area = ((a+b)/2)*h;
                std::cout << "area of a trapezoid is " << area << "\n##############" << std::endl;
                break;
                }
            case 3:{
                std::cout << "Enter sides a and b of the base \n>>>";
                int a, b; //a,b - side of the base and h - height
                scanf("%d %d", &a, &b);
                int midle_line = (a+b)/2;
                std::cout << "midle line of a trapezoid is " << midle_line \
                    << "\n##############" << std::endl;
                break;
                }
             case 4:{
                std::cout << "Exiting the program...\n";
                return 0; // Выход из программы
            }
        }
    }
}

int main(){
    int func;
    while(1){
        scanf("%d", &func);
        switch(func){
            case 1:{
                rectangle();
                break;
                }
            case 2:{
                trapezoid();
                break;
                   }
        }
    }
    return 0;
}
