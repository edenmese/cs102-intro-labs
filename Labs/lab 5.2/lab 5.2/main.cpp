//
//  main.cpp
//  lab 5.2
//
//  Created by Eden Meseret on 9/26/22.
//
#include <iostream>
#include <string>
using namespace std;

int main (){
    
    const double medium = 9.99 , large = 12.99, discountL = 2.00, discountM = 1.00;
    char coupon = ' ';
    
    double total_price;
    int chosen_size;
    
    cout << "Enter 1 for MEDIUM PIZZA or 2 for LARGE PIZZA";
    cin >> chosen_size;
    cout << "Do you have a coupon?(Y/N)";
    cin >> coupon;

    double base_price;
    if (chosen_size == 1)
    {
        base_price = medium;
    }
    else if (chosen_size == 2)
    {
        base_price = large;
    }
    else
    {
        cout << "invalid pizza size given" << endl;
    }

    double discount = 0;
    if (coupon == 'Y' || coupon == 'y')
    {
        if(chosen_size == 1)
        {
            discount = discountM;
        }
        else if(chosen_size == 2)
        {
            discount = discountL;
        }
    }
    else if(coupon == 'N' || coupon == 'n')
    {
        discount = 0;
    }
    else
    {
        cout << "invalid response to coupon question" << endl;
    }

    total_price = base_price - discount;

  
    
    cout << "The price of pizza is: " << total_price << endl;
   
    if (coupon == 'Y' || coupon == 'y')
    {
        cout << "You used your $2 coupon." << endl;
    }
    else
    {
        cout << "You did not use your $2 coupon." << endl;
    }
    
    
    return 0;
}


