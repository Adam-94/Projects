#include "module.h"
#include <vector>
#include <iostream>
#include <algorithm>


Module::Module()
{

}

void Module::addCoursework()
{
    coursework add;
    add.getMark(courseWork);
    add.getWeighting(cWeights);
}

void Module::addExam()
{
    exam add;
    add.enterMark(Exam);
    add.getWeighting(examWeighting);
}

void Module::getMark()
{
    std::vector<int> CWM;

    std::transform( courseWork.begin()+1, courseWork.end(),
                    cWeights.begin()+1, CWM.begin(),  // assumes v1,v2 of same size > 1,
                    //       v one element smaller
                    std::multiplies<int>() );

    for (auto& c : CWM)
    {
        std::cout << c << "\n";
    }

}
