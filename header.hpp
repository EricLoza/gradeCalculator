#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>
#include <map>

using namespace std;

class calculateGrade {
public:
    void percentage(map<string, double>& gradePercents);
    void grade(map<string, double>& gradeValue);
    double calculateFinalGrade(map<string, double>& gradePercents, map<string, double>& gradeValue);
};

#endif // HEADER_HPP