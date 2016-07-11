// cars.h
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
class Car
{
    private:
    double _dblSpeed;
    string _strMake;
    string _strModel;
    public:
    double getSpeed();
    void setSpeed(double);
    string getMake();
    void setMake(string);
    string getModel();
    void setModel(string);
    Car(string, string, double);
    Car();
    

};