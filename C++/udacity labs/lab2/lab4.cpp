#include <iostream>
#include <string>
#include <sstream>
int main()
{
float length;
float width;
float area;
std::string w;
std::string l;
std::cout<<"please enter the length of the room\n";
std::getline(std::cin,l);
std::stringstream(l)>>length;

std::cout<<"please enter the width of the roomm\n";
std::getline(std::cin,w);
std::stringstream(w)>>width;
area = length*width;
std::cout<<"the area is : "<<area;
return 0;
}