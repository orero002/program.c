#include <iostream>
using namespace std;

char calculateGrade(double average) {
    int avarege {
        
    }
}

int main() {
    int subject1, subject2, subject3;
    
    // Prompt the user for scores in three subjects
    cout << "Enter the score for subject 1: ";
    cin >> subject1;
    cout << "Enter the score for subject 2: ";
    cin >> subject2;
    cout << "Enter the score for subject 3: ";
    cin >> subject3;

    // Calculate the average score
    double average = (subject1 + subject2 + subject3) / 3.0;

    // Display the average score
    cout << "Average Score: " << average << endl;

    // Calculate the grade using switch-case
    char grade = calculateGrade(average);
    
    // Display the grade
    cout << "Your grade is: " << grade << endl;

    return 0;
}
