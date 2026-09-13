#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of students
    while (true) {
        cout << "Enter number of students (5-15): ";
        cin >> n;

        if (n >= 5 && n <= 15) {
            break;
        }

        cout << "Invalid number of students. Please try again.\n";
    }

    int marks[15];

    // Input marks
    for (int i = 0; i < n; i++) {
        while (true) {
            cout << "Enter marks for student " << i + 1 << " (0-100): ";
            cin >> marks[i];

            if (marks[i] >= 0 && marks[i] <= 100) {
                break;
            }

            cout << "Invalid marks. Please enter a value between 0 and 100.\n";
        }
    }

    int totalComparisons = 0;
    int totalShifts = 0;

    // Insertion Sort - Descending Order
    for (int i = 1; i < n; i++) {
        int temp = marks[i];
        int j = i - 1;

        while (j >= 0) {
            totalComparisons++;

            if (marks[j] < temp) {
                marks[j + 1] = marks[j];
                totalShifts++;
                j--;
            }
            else {
                break;
            }
        }

        marks[j + 1] = temp;
    }

    // Display total comparisons and shifts
    cout << "\nTotal Comparisons: " << totalComparisons << endl;
    cout << "Total Shifts: " << totalShifts << endl;

    // Highest mark
    cout << "Highest Marks: " << marks[0] << endl;

    // Lowest mark
    cout << "Lowest Marks: " << marks[n - 1] << endl;

    // Calculate average
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    double average = (double)sum / n;

    cout << "Average Marks: " << average << endl;

    // Display sorted marks
    cout << "Sorted Marks: ";

    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    cout << endl;

    // Check for high achievers
    bool highAchiever = false;

    for (int i = 0; i < n; i++) {
        if (marks[i] >= 90) {
            highAchiever = true;
            break;
        }
    }

    if (highAchiever) {
        cout << "High Achiever(s) Present" << endl;
    }
    else {
        cout << "No High Achiever" << endl;
    }

    return 0;
}
