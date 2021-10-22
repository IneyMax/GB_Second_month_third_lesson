#include "Fraction.h"

#include <iostream>

void fraction::print_fraction()
{
    if (numerator_ == 0)
    {
        std::cout << "0\n";
    }
    else if (numerator_ == denominator_)
    {
        std::cout << "1\n";
    }
    else
    {
        std::cout << numerator_ << "/" << denominator_ << "\n";
    }
}

//Перегрузки (унарные):
fraction fraction::operator-() const
{
    return fraction(-numerator_, denominator_);
}

//Перегрузки (бинарные):
fraction operator+ (fraction &f1, fraction &f2)
{
    const int new_numerator {f1.numerator_ * f2.denominator_ + f2.numerator_ * f1.denominator_};
    const int new_denominator {f1.denominator_ * f2.denominator_};
    return fraction(new_numerator,new_denominator);
}

fraction operator- (fraction &f1, fraction &f2)
{
    const int new_numerator {f1.numerator_ * f2.denominator_ - f2.numerator_ * f1.denominator_};
    const int new_denominator {f1.denominator_ * f2.denominator_};
    return fraction(new_numerator,new_denominator);
}

fraction operator* (fraction &f1, fraction &f2)
{
    const int new_numerator {f1.numerator_ * f2.numerator_};
    const int new_denominator {f1.denominator_ * f2.denominator_};
    return fraction(new_numerator,new_denominator);
}

fraction operator/ (fraction &f1, fraction &f2)
{
    const int new_numerator {f1.numerator_ * f2.denominator_};
    const int new_denominator {f1.denominator_ * f2.numerator_};
    return fraction(new_numerator,new_denominator);
}

//Перегрузки (операторы сравнения):
bool operator == (fraction& f1, fraction& f2)
{
    return f1.numerator_ / f1.denominator_ == f2.numerator_ / f2.denominator_;
}

bool operator != (fraction& f1, fraction& f2)
{
    return !(f2 == f1);
}

bool operator < (fraction& f1, fraction& f2)
{
    return f1.numerator_ * f2.denominator_ < f2.numerator_ * f1.denominator_;
}

bool operator > (fraction& f1, fraction& f2)
{
    return f1.numerator_ * f2.denominator_ > f2.numerator_ * f1.denominator_;
}

bool operator <= (fraction& f1, fraction& f2)
{
    return !(f2 > f1);
}

bool operator >= (fraction& f1, fraction& f2)
{
    return !(f1 < f2);
}

