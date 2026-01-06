#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    double score1, score2, score3;
    double average;
    char grade;
};

double calculateAverage(double x, double y, double z);
char calculateGrade(double avg);

int main() {
    const int TOTAL_STUDENTS = 3;
    vector<Student> students(TOTAL_STUDENTS);

    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        cout << "Enter Data for Student " << i + 1 << endl;
        
        cin >> students[i].score1 >> students[i].score2 >> students[i].score3;

        students[i].average = calculateAverage(students[i].score1, students[i].score2, students[i].score3);
        students[i].grade = calculateGrade(students[i].average);
    }

    cout << endl;
    cout << fixed << setprecision(2); 

    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Average: " << students[i].average << endl;
        cout << "Grade: " << students[i].grade << endl;
    }
    
    return 0;
}

double calculateAverage(double x, double y, double z) {
    return (x + y + z) / 3.0;
}

char calculateGrade(double avg) {
    if (avg >= 80) return 'A';
    if (avg >= 70) return 'B';
    if (avg >= 60) return 'C';
    if (avg >= 50) return 'D';
    return 'F';
}