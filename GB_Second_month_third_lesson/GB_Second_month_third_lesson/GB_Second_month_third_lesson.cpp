#include <iostream>

#include "Car.h"
#include "Figure.h"
#include "Fraction.h"

int main()
{
    //ДЗ 3 п.1:
    /*
    circle cir(5);
    rectangle rec(5,8);
    square sq(5);
    rhombus rh(9,4);
    std::cout << cir.area() << "\n";
    std::cout << rec.area() << "\n";
    std::cout << sq.area() << "\n";
    std::cout << rh.area() << "\n";
    std::cout << "\n";
    */
    //ДЗ 3 п.2:
    /*
    car c("Vas", "2107");
    passenger_car p("Ford","Mustang");
    bus b("Shcool","Yellow");
    minivan m("Lada", "Granta");
    */

    fraction fr1(1, 3);
    fraction fr2 = -fr1;
    fr1.print_fraction();
    fr2.print_fraction();
    fraction fr3 = fr1 - fr2;
    fr3.print_fraction();
    fr2 = fr3 + fr1;
    fr2.print_fraction();
    fr3 = fr1 * fr2;
    fr3.print_fraction();
    fr3 = fr1 / fr2;
    fr1.print_fraction();
    fr2.print_fraction();
    fr3.print_fraction();
    if (fr1 == fr3)
    {
        std::cout << "Equal \n";
    }
    if (fr2 >= fr1)
    {
        std::cout << "fr2 more than fr1 \n";
    }
    return 0;
}
