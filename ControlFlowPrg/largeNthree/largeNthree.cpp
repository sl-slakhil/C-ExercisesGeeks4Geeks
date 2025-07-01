#include<iostream>

int main()
{
    int num1{};
    int num2{};
    int num3{};
    int max{};

    std::cout<<" Enter first number: ";
    std::cin>>num1;

    std::cout<<"Enter the second number; ";
    std::cin>>num2;

    std::cout<<" Enter the third number: ";
    std::cin>>num3;

    if (num1>num2){
        max=num1;
    }
    else
    max =num2;
    if(num3>max){
        max =num3;
    }
    std::cout<<"The maximum is:"<<max;
    return 0;

}