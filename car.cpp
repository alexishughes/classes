#include "car.h"
Car::Car()
{
    // todo set the make and model to robin reliant!!
    
    
    
    _dblMaxSpeed = 70;
    _dblSpeed = 0;
}
Car::Car(string Make, string Model, double Speed)
{
    _dblMaxSpeed = 70;
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
int Car::increaseSpeed() 
{
    _dblSpeed += 10; 
    if (_dblSpeed >= _dblMaxSpeed) 
    {
         cout << "Slow down, you are going to fast" << endl;
         return 1;
    }
    else
    {
        return 0;
    }
}

// ok. a method always does something, that's a given
// but it can return a value such as the get accessors
// or it can return nothing and just do what it's got to do.

// yep.

//often methods return 0 to indicate everything went ok and an error code to say ther was a problem.
// okj how about this.

// need to declare _dblMaxSpeed here as well 
// it's already done in the header


// it doesnt like =>
// should return be "0" even for the text message about going to fast?

// ok the errors were mostly mine. 
// 1) typos with the dlb.
// 2) the header file still had increaseSpeed down as a void



