#include <iostream>
#include "./CodeActivation.hpp"

int main()
{
    CodeActivation test = CodeActivation();
    if (test.getStatus() == false)
    {
        test.verifCodeActivation();
    }
    if (test.getPoint() > 0)
    {

        if (test.getStatus() == true)
        {
            std::cout << "This is the program" << std::endl;
        }
        else
        {
            std::cout << "Pay for the activation key" << std::endl;
        }
    }
    else
    {
        std::cout << "No more" << std::endl;
    }
    return 0;
}
