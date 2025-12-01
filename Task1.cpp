#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int numCourses;
    cout << "Enter the number of courses taken: ";
    cin >> numCourses;

    vector<double> grades(numCourses);
    vector<int> creditHours(numCourses);
    double totalGradePoints = 0.0;
    int totalCredits = 0;

    // Input grades and credit hours for each course
    for (int i = 0; i < numCourses; ++i)
    {
        cout << "Enter grade for course " << (i + 1) << ": ";
        cin >> grades[i];
        cout << "Enter credit hours for course " << (i + 1) << ": ";
        cin >> creditHours[i];

        // Calculate total grade points and total credits
        totalGradePoints += grades[i] * creditHours[i];
        totalCredits += creditHours[i];
    }

    // Calculate GPA for the semester
    double semesterGPA = (totalCredits > 0) ? (totalGradePoints / totalCredits) : 0.0;

    // Display individual course grades
    cout << fixed << setprecision(2);
    cout << "\nIndividual Course Grades and Credit Hours:\n";
    for (int i = 0; i < numCourses; ++i)
    {
        cout << "Course " << (i + 1) << ": Grade = " << grades[i]
             << ", Credit Hours = " << creditHours[i] << endl;
    }

    // Display final GPA and CGPA
    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Semester GPA: " << semesterGPA << endl;

    // Assuming this is the only semester, CGPA is the same as semester GPA
    double overallCGPA = semesterGPA;
    cout << "Overall CGPA: " << overallCGPA << endl;

    return 0;
}