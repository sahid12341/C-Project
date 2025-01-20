#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;
    
    cout << "Enter the score (0-100)(It should not less or more this range): ";
    cin >> score;
    
    grade = (score > 100 || score < 0) ? 'X' :  
            (score >= 90) ? 'A' :             
            (score >= 80) ? 'B' :              
            (score >= 70) ? 'C' :               
            (score >= 60) ? 'D' :             
            'F';                               
    

    if (grade == 'X') {
        cout << "Invalid score! Please enter a score between 0 and 100." << endl;
    } else {
        cout << "Score: " << score << endl;
        cout << "Grade: " << grade << endl;
        

        cout << "Feedback: ";
        switch(grade) {
            case 'A':
                cout << "Excellent work!" << endl;
                break;
            case 'B':
                cout << "Well done!" << endl;
                break;
            case 'C':
                cout << "Good job!" << endl;
                break;
            case 'D':
                cout << "You passed, but you could do better." << endl;
                break;
            case 'F':
                cout << "Sorry, you failed." << endl;
                break;
            default:
                cout << "Invalid grade." << endl;
        }
        

        cout << "Eligibility Status: ";
        if (grade >= 'A' && grade <= 'D') {
            cout << "Congratulations! You are eligible for the next level." << endl;
        } else if (grade == 'F') {
            cout << "Please try again next time." << endl;
        }
    }
    
    return 0;
}