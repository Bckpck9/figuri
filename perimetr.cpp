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
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
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
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
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
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
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
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
        cout << "Напишите длину стороны b:" << endl;
        cin >> b;
        if(a<=0 || b<=0)
        {
            cout<<"Ошибка!Введите положительное число\n";
            break;
        }
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
                if (a<=0 || b<=0 || c<=0 || d<=0 ){
                    std::cout << "Wrong input! sides must be positive!";
                    break;}
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
                if (a<=0 || b<=0 || h<=0){
                    std::cout << "Wrong input! sides must be positive!";
                    break;}

                std::cout << "area of a trapezoid is " << area << "\n##############" << std::endl;
                break;
                }

            case 3:{
                std::cout << "Enter sides a and b of the base \n>>>";
                int a, b; //a,b - side of the base and h - height
                scanf("%d %d", &a, &b);
                 if (a<=0 || b<=0){
                    std::cout << "Wrong input! sides must be positive!";
                    break;} 
                int midle_line = (a+b)/2;
                std::cout << "midle line of a trapezoid is " << midle_line \
                    << "\n##############" << std::endl;
                break;
                }
            case 4:{
                std::cout << "Exiting the program...\n";
                return 0; // Выход из программы
                }
             default: {// Обработка неверного ввода
                std::cout << "Wrong input.\n";
                break;
                }   
        }
    }
}
//===============================================treugol

// Функция для вычисления периметра
void perimeter(double& result, double a, double b, double c) {
    result = a + b + c;
}

// Функция для вычисления площади по формуле Герона
void plosh(double& result, double a, double b, double c) {
    double s = (a + b + c) / 2; // Полупериметр
    result = sqrt(s * (s - a) * (s - b) * (s - c)); // Формула Герона
}

// Функция для проверки на равнобедренность
void ravnob(bool& result, double a, double b, double c) {
    result = (a == b || b == c || a == c);
}

int trgl() {
    double a, b, c;
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    // Проверка существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        int input;
        cout << "Что вы хотите определить?:" << endl
            << "1) Периметр" << endl
            << "2) Площадь" << endl
            << "3) Проверить на равнобедренность" << endl
            << "4) Все вместе" << endl;
        cin >> input;

        switch (input) {
        case 1: {
            double perimeterResult;
            perimeter(perimeterResult, a, b, c);
            cout << "Периметр треугольника: " << perimeterResult << endl;
            break;
        }
        case 2: {
            double ploshResult;
            plosh(ploshResult, a, b, c);
            cout << "Площадь треугольника: " << ploshResult << endl;
            break;
        }
        case 3: {
            bool isRavnob;
            ravnob(isRavnob, a, b, c);
            if (isRavnob) {
                cout << "Треугольник является равнобедренным." << endl;
            }
            else {
                cout << "Треугольник не является равнобедренным." << endl;
            }
            break;
        }
        case 4: {
            double perimeterResult, ploshResult;
            bool isRavnob;
            perimeter(perimeterResult, a, b, c);
            plosh(ploshResult, a, b, c);
            ravnob(isRavnob, a, b, c);

            cout << "Периметр треугольника: " << perimeterResult << endl;
            cout << "Площадь треугольника: " << ploshResult << endl;
            if (isRavnob) {
                cout << "Треугольник является равнобедренным." << endl;
            }
            else {
                cout << "Треугольник не является равнобедренным." << endl;
            }
            break;
        }
        default: {
            cout << "Неверный выбор!" << endl;
            break;
        }
        }
    }
    else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }
     return 0;
}
    



int main(){
    int func;
    while(1){
    std::cout << "Выберите фигуру:\n \
    1)Прямоугольник \n \
    2)Треугольник \n \
    3)Трапеция \n";
        scanf("%d", &func);
        switch(func){
            case 1:{
                rectangle();
                break;
                }
            case 2:{
                trgl();
                break;
                }  
            case 3:{
                trapezoid();
                break;
                   }
            default:{
                std::cout << "Wrong input";
            break;}
        }
    }
    return 0;
}
