#ifndef MODULE_H
#define MODULE_H

#include <vector>
#include <exam.h>
#include <coursework.h>

class Module : public coursework
{
private:
    std::vector<int> courseWork;
    std::vector<int> cWeights;
    int moduleMark;
    int Exam;
    double examWeighting;

public:
    Module();
    void addCoursework();
    void addExam();
    void getMark();
};

#endif // MODULE_H
