#include<iostream>
int main ()
{
    double length{};
    double width{};
    double area{};
    double perimeter{};

    std::cout<<"Enter the length of the rectangle: ";
    std::cin>>length;
    std::cout<<"Enter the width of the rectangle: ";
    std::cin>>width;
    area = length*width;
    perimeter=2*(length+width);

    std::cout<<"The area of given rectangle is : "<< area <<'\n';
    std::cout<<"The perimeter of the rectangle is : "<<perimeter;

    return 0;

}
