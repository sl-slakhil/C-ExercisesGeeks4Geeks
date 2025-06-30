#include<iostream>

int main()
{
    int num1{};
    int num2{};
    int sum{};
    std::cout << "Enter first unmbers : ";
    std::cin>>num1;
    std::cout<<" Enter the second number";
    std::cin>>num2;
    sum = num1+num2;
    std::cout<<"The sum of two numbers is "<< sum;
    return 0;

}