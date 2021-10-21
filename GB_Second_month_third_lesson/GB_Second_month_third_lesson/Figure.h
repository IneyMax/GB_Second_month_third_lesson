#pragma once
#include <cmath>

class figure
{
public:
    virtual ~figure() = default;
    
    virtual  double area() = 0;
};

class circle : virtual  public figure
{
private:
    double radius_;
public:
    explicit circle(double radius)
        : radius_(radius)
    {
    }

    double area() override
    {
        return ((pow(radius_, 2)) * (22 / 7));
    }
};

class parallelogram  : virtual public figure
{
protected:
    parallelogram(const int side = 0, const int height = 0)
        : side_(side),
          height_(height)
    {
    }
    
    int side_;
    int height_;
};

class rectangle : virtual public parallelogram
{
public:
    rectangle(int side, int height)
        : parallelogram(side, height)
    {
    }
    
    double area() override
    {
        return side_ * height_;
    }
};

class square : virtual public parallelogram
{
public:
    square(int side)
        : parallelogram(side, side)
    {
    }

    double area() override
    {
        return side_ * side_;
    }
};

class rhombus : virtual public parallelogram
{
public:
    rhombus(int side, int height)
        : parallelogram(side, height)
    {
    }
    
    double area() override
    {
        return side_ * height_;
    }
};



