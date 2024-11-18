#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
    string licencePlate;
    string manufacturar;
    int carriageSizeLimit;
    public:
    Vehicle(string lp , string m , float limit) : licensePlate(lp) , manufacturar(m) , carriageSizeLimit(limit)
    {

    };
};

class gasoline : public Vehhicle
{
protected:
    int fuelTankCapacity;
    string fuelType;

};

class electricity : public Vehicle
{
    int batteryCapacity;
    int chargingTime;
};
class motorcycle : public gasoline
{
protected:

};

class car : public gasoline
{
protected:
     int numberOfPassenger;
};
};

class truck : public gasoline
{
protected:
    int cargoCapacity;
}





