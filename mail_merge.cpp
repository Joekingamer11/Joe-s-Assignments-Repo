#include <iostream>
#include <ctime>
using namespace std;

string ordinalSuffix(int day) {
    if (day >= 11 && day <= 13)
        return "th";

    switch (day % 10) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}

string monthName(int month) { // month: 0-11 (from struct tm)
    string months[] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    return months[month];
}

int main() {
    string firstName, lastName, program, academicYear;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter study program: ";
    cin.ignore(); 
    getline(cin, program);
    cout << "Enter academic year (e.g. 2027/2028): ";
    cin >> academicYear;

    time_t now = time(0);
    tm *localTime = localtime(&now);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon;
    int year = localTime->tm_year + 1900;

    cout << "\n";
    cout << "Date: " << day << ordinalSuffix(day) << " " << monthName(month) << " " << year << "\n\n";

    cout << "To: " << firstName << " " << lastName << ",\n\n";

    cout << "Dear " << firstName << ",\n\n";

    cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University\n"
         << "Admissions Board has approved your application for admission to the\n"
         << academicYear << " academic year.\n\n";

    cout << "You have been offered a place for the following course:\n"
         << "PROGRAM: " << program << "\n\n";

    cout << "As a student of Makerere University, you will be part of a historic\n"
         << "institution dedicated to academic excellence and innovation. Please ensure\n"
         << "that you report to the Academic Registrar's office with your original\n"
         << "academic documents for verification during the orientation week.\n\n";

    cout << "We look forward to welcoming you to the Makerere University.\n\n";

    cout << "Yours sincerely,\n\n\n";

    cout << "Ms. Caroline Nanono Jjingo\n";
    cout << "Registrar\n";

    return 0;
}