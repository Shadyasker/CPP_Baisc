#include <iostream>
#include "car.cpp"
int main()
{
    car c1;
    std::cout<<c1.getMaker()<<std::endl;
    std::cout<<c1.getModel()<<std::endl;
    c1.setMaker("hondaa\n");
    c1.setModel(2020);

    std::cout <<"this car is made by " << c1.getMaker();
}