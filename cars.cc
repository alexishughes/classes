#include "car.cpp"
using namespace std;
int main()
{
    Car myCar("Honda","Civic",0);
    Car myCar2("Ford", "Escort", 0);
    cout << "Your Car is a " << myCar.getMake() << " " << myCar.getModel() << endl;
    cout << "Your car is a " << myCar2.getMake() << " " << myCar2.getModel() << endl;
    
    return 0;
}