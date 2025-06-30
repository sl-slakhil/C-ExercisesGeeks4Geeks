#include <iostream>

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    std::cout<<"Size of int is "<< sizeof(integerType)<<'\n';
    std::cout<<"Size of char type is :"<< sizeof(charType)<<'\n';
    std::cout<<"Size of the float type is :"<< sizeof(floatType)<<'\n';
    std::cout<<"Size of the double is : "<<sizeof(doubleType)<<'\n';
    return 0;
}