#ifndef EXAM_H
#define EXAM_H

#include <string>

class exam
{
private:
    int examMark;
    int examWeighting;

public:
    exam();
    double getWeighting(double);
    int enterMark(int);
};

#endif // EXAM_H
