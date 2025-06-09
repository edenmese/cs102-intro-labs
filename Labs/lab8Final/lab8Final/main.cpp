//
//  main.cpp
//  lab8Final
//
//  Created by Eden Meseret on 12/8/22.
//

#include <iostream>
#include <fstream>
using namespace std;

void displayWeeklyTitle ();
ofstream myCal;

int main() {
    
    int yearly [12][2] = {{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
    
    string monthsArray [12] = {"January", "February", "March", "April", "May","June","July","August","September","October","November","December"};
    
    
   // ofstream myCal;
   // myCal.open("myCal.txt");
    myCal.open("myCal.txt");

    if (myCal.is_open())
    {
        cout << "success";
        
        int placement = 6;
        
        for (int month = 0; month <= 12; month++)
        {
            myCal << "----------------  "  << monthsArray[month] << "  ----------------"<< endl;
            displayWeeklyTitle();
            
            for (int monthDays = 1; monthDays <= yearly[month][1]; monthDays++)
            {
                if (monthDays == 1)  // first day of the month
                {
                    for (int i = 0; i < placement; i++) // this for loop will create a space in beggining of each month; if placement is 0 code will not run
                    {
                        myCal << "\t";
                    }
                }
                myCal << monthDays << "\t" ;
                placement++;
                
                if (placement%7 == 0) //
                {
                    myCal << endl;
                    placement = 0;  //this is keeping placment back to 0
                    
                }
            }
            
            myCal << endl;
            
            
        }
    }
    myCal.close();
}

    void displayWeeklyTitle ()
    {
        myCal << "Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;

    }

