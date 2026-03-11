#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure to organize student data
struct Student {
    string name;
    float grade;
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<Student> classList(numStudents);
    float sum = 0;

    // Input data
    for(int i = 0; i < numStudents; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> classList[i].name;
        cout << "Enter grade: ";
        cin >> classList[i].grade;
        sum += classList[i].grade;
    }

    // Statistics
    float average = sum / numStudents;
    cout << "\n--- Class Statistics ---" << endl;
    cout << "Class Average: " << average << endl;

    // Identifying performance
    cout << "\nIndividual Results:" << endl;
    for(const auto& s : classList) {
        string status = (s.grade >= 60) ? "Passed" : "Failed";
        cout << s.name << ": " << s.grade << " [" << status << "]" << endl;
    }

    return 0;
}
