#include <iostream>
#include<math.h>

int main()
{
    double principal{};
    double rateOfInt{};
    double timeSpan{};
    double interest{};

    std::cout<<"Enter the principal amounbt: ";
    std::cin>>principal;

    std::cout<<" Enter the rate of interest: ";
    std::cin>>rateOfInt;

    std::cout<<" Enter the term in years: ";
    std::cin>>timeSpan;

    interest= principal*pow((1+rateOfInt/100),timeSpan)-principal;

    std::cout<<"The interest amount is: "<< interest;

    return 0;

}