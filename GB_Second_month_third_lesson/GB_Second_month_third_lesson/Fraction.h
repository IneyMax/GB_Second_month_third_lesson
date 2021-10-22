#pragma once
#include <cassert>

/*
Продемонстрировать использование перегруженных операторов.
*/

class fraction
{
 int numerator_;
 int denominator_;
 
public:
 // Конструктор по умолчанию
 fraction(int numerator = 0, int denominator = 1) :
  numerator_(numerator), denominator_(denominator)
 {
  assert(denominator != 0);
 }
 
 void print_fraction();
 fraction operator-() const;
 
private:
 friend fraction operator+(fraction &f1, fraction &f2);
 friend fraction operator-(fraction &f1, fraction &f2);
 friend fraction operator*(fraction &f1, fraction &f2);
 friend fraction operator/(fraction &f1, fraction &f2);
 friend bool operator==(fraction &f1, fraction &f2);
 friend bool operator!=(fraction &f1, fraction &f2);
 friend bool operator<(fraction &f1, fraction &f2);
 friend bool operator>(fraction &f1, fraction &f2);
 friend bool operator<=(fraction &f1, fraction &f2);
 friend bool operator>=(fraction &f1, fraction &f2);
 
};



