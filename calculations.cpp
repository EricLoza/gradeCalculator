#include "header.hpp"
class calculateGrade {
    
    public: 
    void percentage( map<string, double>& gradePercents) {

        for(auto &percent : gradePercents) {
            cout << "Enter the weight percentage for " << percent.first << ": ";
            cin >> percent.second; 
        
            }
        
            for(auto &percent : gradePercents) { 
            cout << percent.first << " " << percent.second << endl; 
            }
            cout << endl;
    }

    void grade(map<string, double>& gradeValue) {
        for(auto &value : gradeValue) {
            cout << "Enter the weight percentage for " << value.first << ": ";
            cin >> value.second; 
        
        }
        
        for(auto &value : gradeValue) { 
            cout << value.first << " " << value.second << endl; 
        }       
    }

    double calculatePercentage(map<string, double>& gradePercents, map<string, double>& gradeValue) {

    }
};