#include "car.cpp"
using namespace std;
int main()
{
    Car myCar("Honda","Civic",0);
    cout << "Your Car is a " << myCar.getMake() << " " << myCar.getModel() << endl;
    return 0;
}