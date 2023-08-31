#include "car.h"


car::car():maker("toyota"),model(20),color("orange")
{
std::cout<<"you've entered\n";
}


car::~car()
{
std::cout<<"Goodbye\n";
}


void car::setMaker(std::string m)
  {
        maker = m;
  }
std::string car::getMaker()
    {
        return maker;
    }
void car::setModel(int m)
    {
         model = m;
    }
int  car::getModel()
    {
        return model;
    }