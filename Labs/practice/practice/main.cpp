//
//  main.cpp
//  practice
//
//  Created by Eden Meseret on 10/19/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

 int main ()
{
    char department;
    double salary, raise;
    
    salary = 100.2323;
    
    cout << "Which department are you in? (A,B,C)";
    cin >> department;
    
    if (toupper(department) == 'A' || toupper(department) == 'B')
    {
        raise = 0.02 * salary;
        cout << "You get a 2% raise" << endl;
        cout << fixed << setprecision(2) << raise << endl;
    }
    else if (toupper(department) == 'C')
    {
        raise = 0.015 * salary;
        cout << "You get a 1.5% raise" << endl;
        cout << fixed << setprecision(2) << raise << endl;

    }
    else
    {
        cout << "That is not a depratment.";
    }


        
    
    
    
    return 0;
}
