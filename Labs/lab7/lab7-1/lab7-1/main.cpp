//
//  main.cpp
//  lab7-1
//
//  Created by Eden Meseret on 11/2/22.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getSaveBalance(int amount, double rate, int y);
double getCheckBalance(int amount, double rate, int y);

int main() {
    
    int depositS = 0;
    int depositC = 0;
    double interestRate = 0.0;
    double acctSaveBalance = 0.0;
    double acctCheckBalance = 0.0;

    cout << "Deposit (savings): ";
    cin >> depositS;
    cout << "Deposit (checkings): ";
    cin >> depositC;
    cout << "Rate (in decimal form): ";
    cin >> interestRate;
    
    cout << fixed << setprecision(2);
    for (int year = 1; year < 4; year += 1)
    {
        acctSaveBalance =
            getSaveBalance(depositS, interestRate, year);
        cout << "Year " << year << ": $" << acctSaveBalance << " (savings)" << endl;
       
        acctCheckBalance =
            getCheckBalance(depositC, interestRate, year);
        cout << "Year " << year << ": $" << acctCheckBalance << " (checkings)" << endl;
    }
    return 0;
}

double getSaveBalance(int amount, double rate, int y)
{
    double balance = 0.0;
    balance = amount * pow((1 + rate), y);
    return balance;
}

double getCheckBalance(int amount, double rate, int y)
{
    double balance = 0.0;
    balance = amount * pow((1 + rate), y);
    return balance;
}

 
