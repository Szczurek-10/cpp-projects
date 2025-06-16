#include<iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "**** temperature conversion ****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "what unit would you like to cenvert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f')
    {
        std::cout << "enter the temperature in celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c')
    {
        std::cout << "enter the temperature in fahrenheits: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "temperature is: " << temp << "C\n";
    }
    else
    {
        std::cout << "please enter only C or F\n";
    }

    std::cout << "********************************";

    return 0;
}