#include <vector>
#include <string>
#include <iostream>

#include "coursework.h"

coursework::coursework()
{

}

std::vector<int> coursework::getWeighting(std::vector<int> weights)
{
    double weight;
    for (int i = 0; i != numOfCoursework; ++i)
    {
        std::cout << "Enter coursework weighting: ";
        std::cin >> weight;
        weights.push_back(weight);
    }

    CwWeighting = weights;
    return weights;
}

std::vector<int> coursework::getMark(std::vector<int> marks)
{
    int a;
    for (int i = 0; i != numOfCoursework; ++i)
    {
        std::cout << "Enter marks for coursework " << i << " (0-100) :";
        std::cin >> a;
        marks.push_back(a);
    }

    CwMarks = marks;
    return marks;
}

int coursework::getNumberOfCoursework(int& a)
{
    int num;
    std::cout << "Enter the number of courseworks you have done: ";
    std::cin >> num;
    numOfCoursework = num;

    return a;
}
