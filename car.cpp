#include "car.h"
Car::Car()
{
    _dblSpeed = 0;
}
Car::Car(string Make, string Model, double Speed)
{
    _strMake = Make;
    _strModel = Model;
    _dblSpeed = Speed;
}
void Car::setMake(string Make)
{
    _strMake = Make;
}
string Car::getMake()
{
    return _strMake;
}
void Car::setModel(string Model)
{
    _strModel = Model;
}
string Car::getModel()
{
    return _strModel;
}
void Car::setSpeed(double Speed)
{
    _dblSpeed = Speed;
}
double Car::getSpeed()
{
    return _dblSpeed;
}
