#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <map>
#include <string>
using namespace std;
class calculateGrade {
public:
    void grade(map<string, double>& gradeValue);
    void percentage(map<string, double>& gradePercents);
    double calculateFinalGrade(map<string, double>& gradePercents, map<string, double>& gradeValue);
};

#endif
