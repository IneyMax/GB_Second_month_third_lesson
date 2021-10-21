#include <iostream>

#include "Figure.h"
/*
 * Создать абстрактный класс Figure (фигура).
 * Его наследниками являются классы Parallelogram (параллелограмм) и Circle (круг).
 * Класс Parallelogram — базовый для классов Rectangle (прямоугольник), Square (квадрат), Rhombus (ромб).
 * Для всех классов создать конструкторы. Для класса Figure добавить чисто виртуальную функцию area() (площадь).
 * Во всех остальных классах переопределить эту функцию, исходя из геометрических формул нахождения площади.
*/


int main()
{
    circle cir(5);
    rectangle rec(5,8);
    square sq(5);
    rhombus rh(9,4);
    std::cout << cir.area() << "\n";
    std::cout << rec.area() << "\n";
    std::cout << sq.area() << "\n";
    std::cout << rh.area() << "\n";
    return 0;
}
