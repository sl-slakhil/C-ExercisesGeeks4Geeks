#include<iostream>

int main()
{
    double celcius{};
    double faren{};
    std::cout<<"Enter temp in degree celcius: ";
    std::cin>>celcius;

    faren = (celcius-32)*5/9;
    std::cout<<faren;

    std::cout<<"Change Check git";
    return 0;

}