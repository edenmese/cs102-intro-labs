//  main.cpp
//  lab 6_0_1
//
//  Created by Eden Meseret on 10/11/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int day = 1;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;
    
    while (day <= 7)
    {
        cout<< "How many text messages did you send on day " << day << "? " ;
        day ++;
        cin >> dailyTexts;
        totalTexts += dailyTexts;
    }
    
    average = static_cast<double>(totalTexts) / (day - 1);
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately " << average << " text messages per day." << endl ;
  
    return 0;
}
