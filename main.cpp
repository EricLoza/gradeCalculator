#include "header.hpp"

int main() { 

  map<string, double> gradePercents = {
    {"Assignment", 0.0},
    {"Participation", 0.0},
    {"Discussion", 0.0},
    {"Exam", 0.0},
    {"Test", 0.0},
    {"Project", 0.0},
    {"Attendance", 0.0}
  };

  map<string, double> gradeValue = {
    {"Assignment",  0.0},
    {"Participation", 0.0},
    {"Discussion", 0.0},
    {"Exam", 0.0},
    {"Test", 0.0},
    {"Project", 0.0},
    {"Attendance", 0.0}
  };

  cout << "Let's calculate your grade!\n";
  calculateGrade gradeCalculator;
  gradeCalculator.grade(gradeValue);
  gradeCalculator.percentage(gradePercents); 


  double finalGrade = gradeCalculator.calculateFinalGrade(gradePercents, gradeValue);

  cout << "\nYour final grade is: " << finalGrade << endl;

  
}