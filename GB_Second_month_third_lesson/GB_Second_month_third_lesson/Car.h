#pragma once
#include <iostream>
#include <string>


class car
{
protected:
 std::string company_;
 std::string model_;
 
public:
 car(std::string company, std::string model):
 company_(company), model_(model)
 {
  std::cout << "It's Car of company: " << company_ << " and model: "<< model_ << "\n\n";
 }
};


class bus : virtual public car
{
public:
 bus(const std::string& company, const std::string& model)
  : car(company, model)
 {
  std::cout << "It's Bus of company: " << company_ << " and model: "<< model_ << "\n\n";
 }
};


class passenger_car : virtual public car
{
public:
 passenger_car(const std::string& company, const std::string& model)
  : car(company, model)
 {
  std::cout << "It's Passenger car of company: " << company_ << " and model: "<< model_ << "\n\n";
 }
};


class minivan : public passenger_car, public bus
{
public:
 minivan(const std::string& company, const std::string& model)
  : car(company, model),
    passenger_car(company, model), bus(company, model)
 {
  std::cout << "It's Minivan car of company: " << company_ << " and model: "<< model_ << "\n\n";
 }
};





