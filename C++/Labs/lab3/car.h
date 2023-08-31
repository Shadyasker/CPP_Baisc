#include <iostream>

class car
{
 private:
    std::string maker;
    int model;
    std::string color;

 public:
    void setMaker(std::string m);
    std::string getMaker();
    void setModel(int m);
    int getModel();

    car();
    ~car();
};
