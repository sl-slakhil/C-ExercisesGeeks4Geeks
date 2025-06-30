#include<iostream>

int main()
{
    int num1{};
    int num2{};
    int temp{};
    std::cout<< " Enter first nmber ";
    std::cin>>num1;
    std::cout<<"Enter second number";
    std::cin>>num2;
    temp =num2;
    num2 = num1;
    num1=temp;

    std::cout<<"The numbers swapped is "<< num1<< " "<< num2;
    return 0;

}