#include <iostream>
#include <vector>
using namespace std;

class AttendanceSession {
private:
    string courseCode;
    string date;
    string startTime;
    int duration;

public:
    AttendanceSession(string code, string d, string time, int dur) {
        courseCode = code;
        date = d;
        startTime = time;
        duration = dur;
    }

    void displaySession() {
        cout << "\nCourse Code: " << courseCode << endl;
        cout << "Date: " << date << endl;
        cout << "Start Time: " << startTime << endl;
        cout << "Duration: " << duration << " minutes\n";
    }
};

int main() {
    vector<AttendanceSession> sessions;

    string code, date, time;
    int duration;

    cout << "Enter Course Code: ";
    cin >> code;
    cout << "Enter Date (YYYY-MM-DD): ";
    cin >> date;
    cout << "Enter Start Time (HH:MM): ";
    cin >> time;
    cout << "Enter Duration (minutes): ";
    cin >> duration;

    AttendanceSession newSession(code, date, time, duration);
    sessions.push_back(newSession);

    cout << "Session Created Successfully!\n";

    return 0;
}