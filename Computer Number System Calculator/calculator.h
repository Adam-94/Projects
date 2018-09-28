#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>

class Calculator
{
public:
    void init();
    void menu_userInput();
    std::string decimal_Binary(int);
    int binary_Decimal(int);
    int decimal_Octal(int);
    int octal_Decimal(int);
    std::string decimal_Hex(int);
    int hex_Decimal(std::string);
    void go_Back();
private:

};

#endif // CALCULATOR_H
