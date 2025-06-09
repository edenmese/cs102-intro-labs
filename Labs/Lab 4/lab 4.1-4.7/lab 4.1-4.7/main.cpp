//
//  main.cpp
//  lab 4.1-4.7
//
//  Created by Eden Meseret on 9/19/22.
//

//#include <iostream>

//int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}




//Created/revised by Eden on Sep 19, 2022

#include <iostream>
using namespace std;

int main()
{
    //declare named constant and variables
    double COMM_RATE;
    double sales = 0.0;
    double commission = 0.0;
    
    //enter input item
    cout << "Sales amount";
    cin >> sales;
    
    cout << "Commission Rate:";
    cin >> COMM_RATE;

    
    
    
    // calculate and display the commission
    commission = sales * COMM_RATE;
    cout << "Commission $" << commission << endl;
    
    
    
    
    return 0;
}

