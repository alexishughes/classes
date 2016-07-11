// cars.h
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
class Car
{
    private:
    // attributes
    double _dblSpeed;
    double _dblMaxSpeed;
    string _strMake;
    string _strModel;
    public:
    // methods
    int increaseSpeed();
    double getSpeed();
    void setSpeed(double);
    string getMake();
    void setMake(string);
    string getModel();
    void setModel(string);
    Car(string, string, double);
    Car();
    
    

};