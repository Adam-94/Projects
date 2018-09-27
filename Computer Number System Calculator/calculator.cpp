#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
#include <cstdlib>
#include "calculator.h"

void Calculator::init()
{
    std::cout << "Welcome to the Decimcal, Binary, Octal and Hexadecimal Calculator" << std::endl;
    std::cout << std::endl;
}

// Main menu for the calculator

void Calculator::menu_userInput()
{
    Calculator Calc;
    std::string menu
    ("Decimal, Binary, Octal and Hexadecimal Calculator\n\n"
        "\n1: Decimal to Binary"
        "\n2: Binary to Decimal"
        "\n3: Decimal to Octal"
        "\n4: Octal to Decimal"
        "\n5: Decimal to Hexadecimal"
        "\n6: Hexadecimal to Decimal\n\n"
        "Enter a number to select an operation: ");

    //User input variables
    int menu_Choice;
    int num;
    std::string hexa;

    // Taking user input
    std::cout << menu << std::endl;
    std::cin >> menu_Choice;

    // Clears the terminal if the user chooses a selection
    // that isn't a choice, and recalls the menu
    if (menu_Choice < 1 || menu_Choice > 6)
    {
        std::cout.flush();
        system("clear");
        std::cerr << "Error: That choice isn't available" << std::endl;
        menu_userInput();
    }

    /*/ Switch statement for the users choice input
       1. Decimal to Binary
       2. Binary to Decimal
       3. Decimal to Octal
       4. Octal to Decimal
       5. Decimal to Hexadecimal
       6. Hexadecimal to Decimal
    /*/
    switch (menu_Choice)
    {
    case 1:
        std::cout.flush();
        system("clear");
        std::cout << "Enter a decimal number: ";
        std::cin >> num;
        std::cout << num << " In Binary: " << Calc.decimal_Binary(num) << std::endl;
        break;
    case 2:
        std::cout.flush();
        system("clear");
        std::cout << "Enter a binary number: ";
        std::cin >> num;
        std::cout << num << " In Decimal: " << Calc.binary_Decimal(num) << std::endl;
        break;
    case 3:
        std::cout.flush();
        system("clear");
        std::cout << "Enter a decimal number: ";
        std::cin >> num;
        std::cout << num << " In Octal: " << Calc.decimal_Octal(num) << std::endl;
        break;
    case 4:
        std::cout.flush();
        system("clear");
        std::cout << "Enter a Octal number: ";
        std::cin >> num;
        std::cout << num << " In Decimal: " << Calc.octal_Decimal(num) << std::endl;
        break;
    case 5:
        std::cout.flush();
        system("clear");
        std::cout << "Enter a decimal number: ";
        std::cin >> num;
        std::cout << num << " In Hexadecimal: " << Calc.decimal_Hex(num) << std::endl;
        break;
    case 6:
        std::cout.flush();
        system("clear");
        std::cout << "Enter a Hexadecimal number: ";
        std::cin >> hexa;
        std::cout << hexa << " In Decimal: " << Calc.hex_Decimal(hexa) << std::endl;
        break;
    default:
        break;
    }
}

/*/
     The binary string is going to check whether num is
     divisble by 2 and if its equal to "0"
     if so then it'll add a "0"to the string,
     else it will add a "1"
/*/
std::string Calculator::decimal_Binary(int num)
{
    std::string binary;
    while (num != 0)
    {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

int Calculator::binary_Decimal(int num)
{
    long fact = 1;
    long decimal = 0;

    while (num != 0)
    {
        decimal += (num % 10) * fact;
        num /= 10;
        fact *= 2;
    }

    return decimal;
}

int Calculator::decimal_Octal(int num)
{
    long fact = 1;
    int octal = 0;

    while (num != 0)
    {
        octal += (num % 8) * fact;
        num /= 8;
        fact *= 10;
    }

    return octal;
}

int Calculator::octal_Decimal(int num)
{
    long fact = 1;
    int decimal = 0;

    while (num != 0)
    {
        decimal += (num % 10) * fact;
        num /= 10;
        fact *= 8;
    }

    return decimal;
}

std::string Calculator::decimal_Hex(int num)
{
    std::stringstream ss;
    ss << std::hex << num;
    std::string res = ss.str();

    return res;
}

int Calculator::hex_Decimal(std::string hexa)
{
    int decimal;
    std::stringstream ss;
    ss << hexa;
    ss >> std::hex >> decimal;

    return decimal;
}
