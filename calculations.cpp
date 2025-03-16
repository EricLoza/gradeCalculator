#include "header.hpp"
#include "main.cpp"
class calculateGrade {

    public: 
    void percentage( map<string, double> gradePercents) {

        for(auto &percent : gradePercents) {
            cout << "Enter the weight percentage for " << percent.first << ": ";
            cin >> percent.second; 
        
          }
        
          for(auto &percent : gradePercents) { 
            cout << percent.first << " " << percent.second << endl; 
          }
          cout << endl;
    }

    public: 
    void grade(map<string, double> gradeValue) {
        for(auto &value : gradeValue) {
            cout << "Enter the weight percentage for " << value.first << ": ";
            cin >> value.second; 
        
        }
        
        for(auto &value : gradeValue) { 
            cout << value.first << " " << value.second << endl; 
        }       
    }

    public:
    double calculatePercentage(double assignmentPercent, double participationPercent, double discussionsPercent, double examPercent, double testPercent, double projectPercent, double attendancePercent) {

    }
};