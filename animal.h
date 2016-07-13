// animal.h
#include <string>
#include <iostream>
#include <regex>
using namespace std;

class Animal
{
    private:
    string _strName;
    regex _rgxIsNumeric;
    public:
    void Eat();
    void Sleep();
    string getName();
    void setName(string);
    Animal(string);
    
    
};

class Dog : Animal
{
    private: 
    string _strCollarType;
    string _strBreed;
};
