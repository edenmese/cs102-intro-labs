//
//  main.cpp
//  3_2
//
//  Created by Eden Meseret on 9/16/22.
//

// #include <iostream>

// int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
#include <iostream>
using namespace std;

int totalPurchased;
double totalCost;
const double unitPrice = 0.50;
 
int main () {
   
    int donuts, muffins;
    
    cout << "Enter number of donuts purchased:";
    cin >> donuts;
    cout << "Enter number of muffins purchased: ";
    cin >> muffins;
    
    totalPurchased = donuts + muffins;
    
    cout << "You have purchesed " << totalPurchased << " total number of items" << endl;
    
    totalCost = totalPurchased * unitPrice;
    
    cout << "Your total cost of order is: $" << totalCost << endl;
    
      
    return 0;
}
