//
//  main.cpp
//  lab8-files
//
//  Created by Eden Meseret on 12/5/22.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void displayWeeklyTitle ();

int main() {
    
    ofstream outFile;
    outFile.open("eBooks.txt");
    
    
    if (outFile.is_open())
    {
        outFile << "test";
        cout << "success!";
        outFile.close();
    }
    else
    {
        cout << "File cannot be found.";
    }
    
    
    //calander << "test";
    int yearly [12][2] = {{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
    
    string monthsArray [12] = {"January", "February", "March", "April", "May","June","July","August","September","October","November","December"};
    

    
  /*
   ofstream calander ("monthlyCalander.txt");
    if (calander.is_open())
    {
        calander << yearly << "#" << monthsArray << endl;
    }
    else
    {
        cout << "Error; File cannot be opened." << endl;
    }
    calander.close();
   */


    
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





