#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string indexNumber;
    string fullName;
    string programme;

public:
    void setStudent(string index, string name, string prog) {
        indexNumber = index;
        fullName = name;
        programme = prog;
    }

    void displayStudent() const {
        cout << "Index Number : " << indexNumber << endl;
        cout << "Full Name    : " << fullName << endl;
        cout << "Programme    : " << programme << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        cout << "\n===== DIGITAL ATTENDANCE SYSTEM (WEEK 1) =====\n";
        cout << "1. Register Student\n";
        cout << "2. View All Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            if (studentCount >= MAX_STUDENTS) {
                cout << "Student list is full!\n";
                continue;
            }

            string index, name, programme;

            cout << "Enter Index Number: ";
            getline(cin, index);

            cout << "Enter Full Name: ";
            getline(cin, name);

            cout << "Enter Programme: ";
            getline(cin, programme);

            students[studentCount].setStudent(index, name, programme);
            studentCount++;

            cout << "Student registered successfully!\n";
        }
        else if (choice == 2) {
            if (studentCount == 0) {
                cout << "No students registered yet.\n";
            } else {
                cout << "\n--- Registered Students ---\n";
                for (int i = 0; i < studentCount; i++) {
                    students[i].displayStudent();
                }
            }
        }
        else if (choice == 3) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}