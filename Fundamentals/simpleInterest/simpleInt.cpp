#include <iostream>

int main()
{
    double principal{};
    double rateOfInterest{};
    int numYear{};
    double simpleInt{};

    std::cout << "Enter the principal amount : ";
    std::cin>> principal;

    std::cout<<"Enter the rate of interest: ";
    std::cin>>rateOfInterest;

    std::cout<<" ENter the number of years: ";
    std::cin>>numYear;

    simpleInt= (principal*numYear*rateOfInterest)/100;

    std::cout<< "The simple interest is : "<< simpleInt<<'\n';

    return 0;

}