#include <iostream>
using namespace std;

void processGrades(int *arr, int rows, int cols) {
    int highest = *(arr); 

    cout << "\nGrade Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(arr + i * cols + j) << "\t";

            // check highest
            if (*(arr + i * cols + j) > highest) {
                highest = *(arr + i * cols + j);
            }
        }
        cout << endl;
    }

    cout << "\nAverage of each student:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += *(arr + i * cols + j);
        }
        cout << "Student " << i + 1 << ": " << (float)sum / cols << endl;
    }

    
    cout << "\nHighest Grade: " << highest << endl;
}

int main() {
    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    int grades[100][100]; 

    
    cout << "\nEnter grades:\n";
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            cout << "Student " << i + 1 << ", Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    
    processGrades(&grades[0][0], students, subjects);

    return 0;
}