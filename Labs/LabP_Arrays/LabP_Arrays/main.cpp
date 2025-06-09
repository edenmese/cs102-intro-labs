//
//  main.cpp
//  LabP_Arrays
//
//  Created by Eden Meseret on 11/17/22.
//

#include <iostream>
#include <string>
using namespace std;

void displayWeeklyTitle ();
 
int main() {
    
    int yearly [12][2] = {{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
    
    string monthsArray [12] = {"January", "February", "March", "April", "May","June","July","August","September","October","November","December"};
    
    int placement = 6;
    
    for (int month = 0; month <= 12; month++)
        {
            cout << "------- "  << monthsArray[month] << "  --------"<< endl;
            displayWeeklyTitle();
    
            for (int monthDays = 1; monthDays <= yearly[month][1]; monthDays++)
            {
                if (monthDays == 1)  // first day of the month
                {
                    for (int i = 0; i < placement; i++) // this for loop will create a space in beggining of each month; if placement is 0 code will not run
                    {
                        cout << "\t";
                    }
                }
                cout << monthDays << "\t" ;
                placement++;
                
                if (placement%7 == 0) //
                {
                    cout << endl;
                    placement = 0;  //this is keeping placment back to 0
                    
                }
            }
            
            cout << endl;
                
        }
        
    
    return 0;
}

void displayWeeklyTitle ()
{
    cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;

}







/* for (int days = 0; days < 11; days++)
{
    int totalDays = yearly[i][1];
    cout << days < totalDays ; */


/* for (month = 0; month <= 12; month++)
{
    cout << "----------------  "  << monthsArray[month] << "  --------------------"<< endl;
    cout << "Sun    Mon    Tue    Wed    Thur    Fri    Sat" << endl;
    
*/




/* for (int days = 0; days < 11; days++)
{
    int totalDays = yearly[i][1];
    cout << days < totalDays ;
}*/

    /*
     
     for (int x = 1; x <= maxDays; x++)
     {
         
     }
     
     int x = 1
     while ( x <= maxDays)
     {
        while ( x <= 7)
        {
            cout << x << "\t";
        }
     }
     
     
     
     int x = yearly[month][1];
     
     while (month <= 12)
     {
         cout << x << "\t" << endl;
     }
     
     
     
     cout << yearly[month][1];
     
     int numOfDays = yearly[i][1];
     cout << numOfDays << endl;
     
     
     switch (month)
     {
     case 1:
     cout << "January";
     break;
     case 2:
     cout << "February";
     break;
     case 3:
     cout << "March";
     break;
     case 4:
     cout << "April";
     break;
     case 5:
     cout << "May";
     break;
     case 6:
     cout << "June";
     break;
     case 7:
     cout << "July";
     break;
     case 8:
     cout << "August";
     break;
     case 9:
     cout << "September";
     break;
     case 10:
     cout << "October";
     break;
     case 11:
     cout << "November";
     break;
     case 12:
     cout << "December";
     break;
     default:
     cout << "error"; */
