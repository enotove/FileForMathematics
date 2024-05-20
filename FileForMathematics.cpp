
#include <iostream>
#include "mathematics.h"

int main()
{
    double a, b = 0;
    int c = 0;
    char flag;
    while (true)
    {
        std::cout << "Enter the numbers: a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
        std::cout << "Select an operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - exponentiation): ";
        std::cin >> c;
        switch (c)
        {
        case 1:
            std::cout << a << " + " << b << " = " << Sum(a, b) << std::endl;
            break;
        case 2: 
            std::cout << a << " - " << b << " = " << Sub(a, b) << std::endl;
            break;
        case 3:
            std::cout << a << " * " << b << " = " << Mult(a, b) << std::endl;
            break;
        case 4:
            std::cout << a << " / " << b << " = " << Div(a, b) << std::endl;
            break;
        case 5:
            std::cout << a << " ^ " << b << " = " << Exp(a, b) << std::endl;
            break;
        default:
            std::cout << "Wrong number!" << std::endl;
            break;
        }
        std::cout << "Press any key to update the calculator or 0 to turn it off." << std::endl;
        std::cin >> flag;
        if (flag == '0') return 0;
    }
    
    

    
}

