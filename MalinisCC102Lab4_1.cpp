#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int students, quizzes;
        double scores[100][100];
        double average[100];
        
        cout << "***Class Record***\n \n"<< endl;
        cout << "ENTER NUMBER OF STUDENTS: ";
        cin >> students;

        cout << "ENTER NUMBER OF QUIZZES: ";
        cin >> quizzes;

        
        for (int i = 0; i < students; i++) {
            cout << "Enter scores for Student " << i + 1 << ":\n";
            double sum = 0;

            for (int j = 0; j < quizzes; j++) {
                cout << "Quiz " << j + 1 << ": ";
                cin >> scores[i][j];
                sum += scores[i][j];
            }

            average[i] = sum / quizzes;
        }

        
        cout << "\nStudent\t";
        for (int j = 0; j < quizzes; j++) {
            cout << "Quiz " << j + 1 << "\t";
        }
        cout << "Average\n";

        
        for (int i = 0; i < students; i++) {
            cout << i + 1 << "\t";
            for (int j = 0; j < quizzes; j++) {
                cout << scores[i][j] << "\t";
            }
            cout << average[i] << endl;
        }

        cout << "\nTry again? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "" << endl;

    return 0;
}
