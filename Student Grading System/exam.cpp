#include <iostream>
#include "exam.h"


exam::exam()
{

}

int exam::enterMark(int mark)
{
    std::cout << "Enter exam mark (0-100): ";
    std::cin >> mark;

    examMark = mark;
    return mark;
}

double exam::getWeighting(double weight)
{
    std::cout << "Enter exam weighting: ";
    std::cin >> weight;

    examWeighting = weight;
    return weight;
}

