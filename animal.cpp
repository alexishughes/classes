// animal.cpp
#include "animal.h"
void Animal::Eat()
{
    cout << _strName << " has eaten, munch munch\n";
}
void Animal::Sleep()
{
    cout << "Snore snore";
}
string Animal::getName()
{
    return _strName;
}
void Animal::setName(string Name)
{
    if(regex_match(Name, _rgxIsNumeric)) // todo the name must not contain only numeric digits
    // must conatin at least 1 alphabet character.
    {
        cout << "I am not a number I am a free animal";
        throw("Invalid name for an aminal (names must not be exclusively numeric");
        
    }
    else
    {
        _strName = Name;
    }
    
}
Animal::Animal(string Name)
{
    _rgxIsNumeric = regex("[0-9]+");
    _strName = Name;
}