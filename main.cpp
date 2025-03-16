#include "header.hpp"

int main() { 

  double assignmentPercent, participationPercent, discussionsPercent, examPercent, 
  testPercent, projectPercent, attendancePercent;

  double assignmentGrade, participationGrade, discussionsGrade, examsGrade, testGrade, projectGrade, attendanceGrade;


  map<string, double> gradePercents = {
    {"Assignment Percent", assignmentPercent = 0.0},
    {"Participation Percent", participationPercent = 0.0},
    {"Discussion Percent", discussionsPercent = 0.0},
    {"Exam Percent", examPercent = 0.0},
    {"Test Percent", testPercent = 0.0},
    {"Project Percent", projectPercent = 0.0},
    {"Attendance Percent", attendancePercent = 0.0}
  };

  map<string, double> gradeValue = {
    {"Assignment Grade", assignmentGrade = 0.0},
    {"Participation Grade", participationGrade = 0.0},
    {"Discussion Grade", discussionsGrade = 0.0},
    {"Exam Grade", examsGrade = 0.0},
    {"Test Grade", testGrade = 0.0},
    {"Project Grade", projectGrade = 0.0},
    {"Attendance Grade", attendanceGrade = 0.0}
  };

  cout << "Let's calculate your grade!\n";
  calculateGrade gradeCalculator;
  gradeCalculator.grade(gradeValue);
  gradeCalculator.percentage(gradePercents); 


  double finalGrade = gradeCalculator.calculateFinalGrade(gradePercents, gradeValue);

  cout << "\nYour final grade is: " << finalGrade << endl;

  
}