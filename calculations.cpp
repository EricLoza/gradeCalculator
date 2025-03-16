#include "header.hpp"

void calculateGrade::grade(map<string, double>& gradeValue) {
    for (auto &value : gradeValue) {
        cout << "Enter your grade value for " << value.first << ": ";
        cin >> value.second;
    }
    
    // Output entered grade values for debugging
    for (auto &value : gradeValue) { 
        cout << value.first << ": " << value.second << endl; 
    }
    cout << endl;
}

void calculateGrade::percentage(map<string, double>& gradePercents) {
    for (auto &percent : gradePercents) {
        cout << "Enter the weight percentage for " << percent.first << ": ";
        cin >> percent.second;
    }

    // Output entered weight percentages for debugging
    for (auto &percent : gradePercents) { 
        cout << percent.first << ": " << percent.second << endl; 
    }
    cout << endl;
}

double calculateGrade::calculateFinalGrade(map<string, double>& gradePercents, map<string, double>& gradeValue) {
    double finalGrade = 0.0;
    double totalWeight = 0.0;


    for (auto &value : gradeValue) {

        if (gradePercents.find(value.first) != gradePercents.end()) {
            double weight = gradePercents[value.first];
            totalWeight += weight; 
            finalGrade += (value.second * (weight * 0.01)); 
        }
    }
    cout << "Total weight: " << totalWeight << endl;
    cout << "Final grade before adjustment: " << finalGrade << endl;


    if (totalWeight != 100) {
        cout << "Error: The total weight percentages do not add up to 100%. Total weight is: " << totalWeight << endl;
        return -1; 
    }

    return finalGrade;
}
