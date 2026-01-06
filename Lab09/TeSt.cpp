#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;
double calculateAverage(int x, int y, int z);
char calulateGrade(double avg);
int main(){
    int a, b, c;

    for(int i = 1; i <= 3; i++){
        cout << "Student " << i << endl;
        cin >> a >> b >> c;

        double avg = calculateAverage(a, b, c);
        char grade = calulateGrade(avg);

        cout << "Average: " << avg << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------" << endl;

}
}

double calculateAverage(int x, int y, int z){
    return (x + y + z) / 3.0;
}
char calulateGrade(double avg){
    if(avg >= 80) return 'A';
    else if(avg >= 70) return 'B';
    else if(avg >= 60) return 'C';
    else if(avg >= 50) return 'D';
    else return 'F';
}
