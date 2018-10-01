#ifndef COURSEWORK_H
#define COURSEWORK_H

#include <vector>

class coursework
{
private:
    std::vector<int> CwMarks;
    std::vector<int> CwWeighting;
public:
    coursework();
    int numOfCoursework;
    int getNumberOfCoursework(int&);
    std::vector<int> getWeighting(std::vector<int>);
    std::vector<int> getMark(std::vector<int>);
};

#endif // COURSEWORK_H
