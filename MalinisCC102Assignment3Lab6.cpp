#include <iostream>
#include <string>
using namespace std;

struct student {
    int studentID;
    string name;
    string course;
    int gpa;
};

void input(student s[], int &num) {
    cout << "Enter number of students: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << endl;


        do {
            cout << "Enter student ID: ";
            cin >> s[i].studentID;

            bool duplicate = false;
            for (int j = 0; j < i; j++) {
                if (s[j].studentID == s[i].studentID) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                cout << "Student ID already exists. Please enter another one." << endl;
            } else {
                break;
            }
        } while (true);

        cout << "Enter student name: ";
        cin >> s[i].name;
        cout << "Enter course: ";
        cin >> s[i].course;

        do {
            cout << "Enter GPA (0-100): ";
            cin >> s[i].gpa;
            if (s[i].gpa > 100 || s[i].gpa < 0) {
                cout << "GPA is out of range. Please enter a valid one." << endl;
            }
        } while (s[i].gpa > 100 || s[i].gpa < 0);
    }
}

void display(student s[], int num) {
    cout << "\n***STUDENT INFORMATION***" << endl;
    cout << "Student ID\tName\tCourse\tAcademic Standing\n";
    cout << "==================================================" << endl;

    for (int i = 0; i < num; i++) {
        cout << s[i].studentID << "\t";
        cout << s[i].name << "\t";
        cout << s[i].course << "\t";

        if (s[i].gpa == 100) {
            cout << "Excellent";
        } else if (s[i].gpa >= 90) {
            cout << "Excellent";
        } else if (s[i].gpa >= 80) {
            cout << "Very Good";
        } else if (s[i].gpa >= 70) {
            cout << "Good";
        } else if (s[i].gpa >= 60) {
            cout << "Passing";
        } else {
            cout << "Failed";
        }
        cout << endl;
    }
}

int main() {
    const int def = 100;
    student obj[def];
    int num = 0;

    input(obj, num);
    display(obj, num);

    return 0;
}