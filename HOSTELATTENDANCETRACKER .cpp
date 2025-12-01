/*Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.
(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
*/

#include <iostream>
using namespace std;

int main() {
    int A[10][7];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> A[i][j];
        }
    }

    int totalPresent[10] = {0};
    int dayTotal[7] = {0};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            totalPresent[i] += A[i][j];
            dayTotal[j] += A[i][j];
        }
    }

    int maxAttendance = totalPresent[0];
    int maxStudent = 1;

    for (int i = 1; i < 10; i++) {
        if (totalPresent[i] > maxAttendance) {
            maxAttendance = totalPresent[i];
            maxStudent = i + 1;
        }
    }

    int minDay = 1;
    int minAttendance = dayTotal[0];

    for (int j = 1; j < 7; j++) {
        if (dayTotal[j] < minAttendance) {
            minAttendance = dayTotal[j];
            minDay = j + 1;
        }
    }

    cout << "Weekly Attendance Summary" << endl;

    cout << "Total Present Days:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << totalPresent[i] << endl;
    }

    cout << endl;
    cout << "Student with Highest Attendance: Student " 
         << maxStudent << " (" << maxAttendance << " Days)" << endl;

    cout << endl;
    cout << "Day with Lowest Overall Attendance: Day " << minDay << endl;

    return 0;
}
