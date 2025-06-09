//
//  main.cpp
//  lab 5_1_2
//
//  Created by Eden Meseret on 10/3/22.
#include <iostream>
#include <ostream>
using namespace std;

int main (){
    
const double pizzaM = 9.99, pizzaL = 12.99, discountL = 2.00, discountM = 1.00;
double orderCost;
int pizzaSize = 1;
char coupon = ' ';


 while (pizzaSize != 0) {
    cout << "Type 1 for MEDIUM PIZZA and 2 for LARGE PIZZA (0 to exit) ";
    cin >> pizzaSize;
    
    if (pizzaSize != 0) {

    cout << "Do you have a $2.00 coupon? (Y/N) ";
    cin >> coupon;


    if (pizzaSize == 1 && toupper(coupon) == 'Y')
    {
        orderCost = pizzaM - discountM;
        cout << "Your price is $" << orderCost << endl;
    }
    else if (pizzaSize == 1 && toupper(coupon) == 'N')
    {
        cout << "Your price is $" << pizzaM << endl;
    }
    else if (pizzaSize == 2 && toupper(coupon) == 'Y')
    {
        orderCost = pizzaL - discountL;
        cout << "Your price is $" << orderCost << endl;
    }
    else
    {
        cout << "Your total price is " << pizzaL << endl;
    }
        
    }

 }
 
    
    return 0;
}
 
    
  







