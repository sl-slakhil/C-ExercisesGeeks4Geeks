#include <iostream>

int main()
{
    int num1{};
    std::cout<<" Enter the number to be checked: ";
    std::cin>>num1;

    if(num1%2==0){
        std::cout<<"Even";
    }
    else{
        std::cout<<"Odd";

    }
    return 0;


}