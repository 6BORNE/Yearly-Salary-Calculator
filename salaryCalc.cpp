/** NOTES
 >Promt user to input $/hr
 >Promt user to input hours per day
 >Promt user to imput days per week
 <Output weekly
 <Output yearly salary
 ex. $20/hr * 5 hours a day * 3 days a week = weekly * 52 = yearly salary
 >Enter length of lunch break (ex 0.5 or 1) and output the yearly salary after
 >Output Tax (HST) and remove Tax from the total salary
 By Victor Krenzel <06/12/20> Practice 
 **/
#include <iostream>
using namespace std;

double DollarsperHour, hoursPerDay, daysPerWeek, weekly, yearlySalary, lunchTime;
const int weeksInYear {50};
const double HST {0.13}; // 13%

int main() 
{

    cout << "\nYearly Salary Calculator <By Victor Krenzel 06/12/20>" << endl;

    // Promt user to input desired pay per hour and days per week
    cout << "Enter desired $ per hour: . . . " << endl;
    cin >> DollarsperHour;
    cout << "Enter hours per day: . . . " << endl;
    cin >> hoursPerDay;
        if(hoursPerDay > 24) {cout << "Too many hours per day!! Enter a number below 24: . . . "; cin >> hoursPerDay;};
    cout << "Enter days per week: . . ." << endl;
    cin >> daysPerWeek;
        if(daysPerWeek > 7) {cout << "Too many days per week!! Enter a number below 7: . . . "; cin >> daysPerWeek;};

    // Calculate and output weekly with the above information
    weekly = DollarsperHour * hoursPerDay * daysPerWeek;
    cout << "Weekly: $" << weekly << endl;
    
    // Output Yearly Salary (Without Lunch)
    cout << "____________________" << endl;
    yearlySalary = weekly * weeksInYear;
    cout << "\nYearly Salary is $" << yearlySalary << endl;

    // Promt and include lunch time in the Yearly Salary
    cout << "\nEnter lunch break time you would take a day: . . . ";
    cin >> lunchTime;
    double totalDay = hoursPerDay - lunchTime;
    weekly = totalDay * weeksInYear;
    cout << "____________________" << endl;
    cout << "\n*Lunch Break Included* Yearly Salary is $" << weekly * weeksInYear << endl;
    int totalYearlySalary = weekly * weeksInYear;

    // Display tax and remove it from the total yearly salary
    cout << "\nTotal HST: $" << totalYearlySalary * HST << endl;
    cout << "\n*Lunch/HST Included* Yearly salary is $" << totalYearlySalary - (totalYearlySalary * HST);

    return 0;
}




