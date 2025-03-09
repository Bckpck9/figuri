#include <iostream>
using namespace std;


int perimetr(int &perimeter,int &a,int &b) //Функция вычисления периметра
{
    perimeter = a + b + a + b;
    return perimeter;
}


int square(int &area ,int &a,int &b) //Функция вычисления площади
{
    area=a * b;
    return area;
}

double lengthDiagonal(double &d, int &a, int &b)  //Функция вычисления длины диагонали
{
    d =sqrt((a*a)+(b*b));
    return d;
}


int main(){

    int input;
    cout<<"Что вы хотите определить?:"<<endl<<"1)Периметр"<<endl<<"2)Площадь"<<endl<<"3)Длину диагонали"<<endl<<"4)Все вместе"<<endl;
    cin>>input;
    switch(input)
    {
    case 1:
        {
            int a,b;//стороны прямоугольника
            int perimeter;
            cout<<"Напишите длину стороны a:"<<endl;
            cin>>a;
            cout<<"Напишите длину стороны b:"<<endl;
            cin>>b;
            perimetr(perimeter,a,b);
            cout<<"Периметр прямоугольника равен: "<<perimeter;
            break;
        }
    case 2:
        {
            int a,b;//стороны прямоугольника
            int area;
            cout<<"Напишите длину стороны a:"<<endl;
            cin>>a;
            cout<<"Напишите длину стороны b:"<<endl;
            cin>>b;
            square(area,a,b);
            cout<<"Площадь прямоугольника равна: "<<area;
            break;
        }
    case 3:
        {
            int a,b;//стороны прямоугольника
            double length;
            cout<<"Напишите длину стороны a:"<<endl;
            cin>>a;
            cout<<"Напишите длину стороны b:"<<endl;
            cin>>b;
            lengthDiagonal(length,a,b);
            cout<<"Длина диагонали прямоугольника равна: "<<length;
        }
    case 4:
        {
            int a,b;
            int perimeter;
            int area;
            double length;
            cout<<"Напишите длину стороны a:"<<endl;
            cin>>a;
            cout<<"Напишите длину стороны b:"<<endl;
            cin>>b;
            perimetr(perimeter,a,b);
            cout<<"Периметр прямоугольника равен: "<<perimeter<<endl;
            square(area,a,b);
            cout<<"Площадь прямоугольника равна: "<<area<<endl;
            lengthDiagonal(length,a,b);
            cout<<"Длина диагонали прямоугольника равна: "<<length<<endl;
        }
    }
}
