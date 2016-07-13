// car.h
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
class Car 
{
    private:
    // attributes
    double _dblSpeed; // the speed of the  (in mph)
    double _dblMaxSpeed; // the maximum speed allowed on the roads.
    string _strMake; // the make of the vehicle
    string _strModel; // the model
    public:
    // methods
    int increaseSpeed(); // accellerate - this method increments the speed by 10mph
    double getSpeed();     // 
    void setSpeed(double); // get/set accessors for the _dblSpeed member variable
    // set acessors return void although often you coudl use an inetger returning zero if the method was successful or an error code 
    // if speed was set at an impossible value - like a skyscraper with negative height. since negative speeds are possible (at least in reverse)
    // we will just leave it as void
    
    
    string getMake(); // get accessors return a value (in this case a string)
    void setMake(string); // sets car's make
    string getModel(); // gets car's model
    void setModel(string); // sets car's model
    Car(string, string, double);    // this one of the constructors for the 'Car' class
                                    // it takes 3 arguments 
    Car();                          // this contructor takes no arguments
    
    // having two Methods with the same name but taking different arguments is an example of method overloading. 
    // For instance if you just ask for a generic car it might give you a robin reliant!! why not implement that now!!
       // ok

};