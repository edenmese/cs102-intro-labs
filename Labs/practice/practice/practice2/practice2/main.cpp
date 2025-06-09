//
//  main.cpp
//  practice2
//
//  Created by Eden Meseret on 12/2/22.
//


#include <iostream>
using namespace std;

void displayArray (int testArray[] );

int main ()
{
    
    int grades [10] = {1,2,3,4,5,6,7,8,9,10};
    
    displayArray(grades);
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

void displayArray (int testArray[])
{
    for (int x = 0; x > 0 && x < 9; x++)
    {
        cout << testArray[x];
        
    }
    
    
    
}





















/*int main() {
    
    int scores [3][3] = {{92,88,100}, {87,72,94}, {91,93,97}};
    int sum = 0;
    
    for (int row = 0; row >= 0 && row < 3; row++)
    {
        for (int col = 0; col >=0 && col < 3; col++)
        {
            sum += scores[row][col];
        }
    }
    
    cout << sum << endl;
}
*/







