//
//  main.cpp
//  5_0
//
//  Created by Eden Meseret on 10/3/22.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const double discountMrate = 0.12;
    const double discountNMrate = 0.07;
    const double shipChg1 = 0.99;
    const double shipChg2 = 4.99;
    double amt0wed;
    char member = ' ';
       cout << "Amount owed before any discount and shipping: ";
       cin >> amt0wed;
       cout << "Premier Club member (Y/N)? ";
       cin >> member;
    
if (toupper(member) == 'Y')
    {
        amt0wed -= amt0wed * discountMrate;
    }
    else if (toupper(member) == 'N')
    {
        amt0wed -= amt0wed * discountNMrate;
    }
    else
        cout << "invalid" << endl;
    
if (amt0wed >= 100.0)
    {
        amt0wed += shipChg1;
    }
    else
    {
        amt0wed += shipChg2;
    }
    
    cout << fixed << setprecision(2);
    cout << "Amount owed afer any discount and shipping: " << amt0wed << endl;
     
    
    
    
    
    
    
    
    
    
    return 0;
}
