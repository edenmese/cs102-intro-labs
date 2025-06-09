//
//  main.cpp
//  lab6_2
//
//  Created by Eden Meseret on 10/12/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  
    int sumX = 0;
    int sumY = 0;
    
    for (int x = 2; x < 7; x += 2)
    {
        sumX += x;
        cout << "sumX value: " << sumX << endl;
        for (int y = 1; y < 4; y += 2)
        {
            sumY += y;
            cout << "sumY value: " << sumY << endl;
        }
    }
   
  
    return 0;
}
