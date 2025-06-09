//
//  main.cpp
//  lab6_1_02
//
//  Created by Eden Meseret on 10/11/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int suxX = 0;
int sumY = 0;

for (int x = 2; x <7; x += 2)
{
    sumX += x;
    for (int y = 1; y < 4; y += 2)
        sumY += y;
}

cout << "sumX value: " << sumX << endl;
cout << "sumY value: " << sumY << endl;

