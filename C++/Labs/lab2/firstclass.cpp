#include <iostream>

class Rectangle
{
private:
        float length;
        float width;
public:
        void SetLength (float len){
            if (len >=0)
            length = len;
            else
                std::cout <<"Error, please enter only positive values";
        }
        float GetLength ()
        {
            return length;
        }

                void SetWidth(float wid){
            if (wid >=0)
            width = wid;
            else
                std::cout <<"Error, please enter only positive values";
        }
        float GetWidth ()
        {
            return width;
        }

        float GetArea()
        {
            return length * width ;
        }
};

int main()
{
    Rectangle box;
    box.SetLength(20);
    box.SetWidth(4);
    std::cout << "the rectangle area is : " << box.GetArea()<< "\n";
    return 0;
}
