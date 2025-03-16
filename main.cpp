#include "header.hpp"
/*A C++ project is designed with an object-oriented approach, with classes for customers, accounts, transactions, and banking services. Features included creating and managing customers, accounts, and transactions, as well as performing banking services such as withdrawals, deposits, and transfers. It also allows customers to view their account information, including account balances, recent transactions, and other details.

Technologies Required: C++ programming language, OOPS, and MySQL.*/

int main() { 

  double assignmentPercent, participationPercent, discussionsPercent, examPercent, 
  testPercent, projectPercent, attendancePercent;

  double assignmentGrade, participationGrade, 
  discussionsGrade, examsGrade, testGrade, projectGrade, attendanceGrade; 


  map<string, double> gradePercents = {
    {"Assignment Percent", assignmentPercent},
    {"Participation Percent", participationPercent},
    {"Discussion Percent", discussionsPercent},
    {"Exam Percent", examPercent},
    {"Test Percent", testPercent},
    {"Project Percent", projectPercent},
    {"Attendance Percent", attendancePercent}
  };

  map<string, double> gradeValue = {
    {"Assignment Grade", assignmentGrade},
    {"Participation Grade", participationGrade},
    {"Discussion Grade", discussionsGrade},
    {"Exam Grade", examsGrade},
    {"Test Grade", testGrade},
    {"Project Grade", projectGrade},
    {"Attendance Grade", attendanceGrade}
  };

  cout << "Let's calculate your grade!\n";
  calculateGrade gradeCalculator;
  gradeCalculator.percentage(gradePercents); 
  gradeCalculator.grade(gradeValue);
    


  cout << endl;
  cout << endl;
  cout << attendanceGrade;
}