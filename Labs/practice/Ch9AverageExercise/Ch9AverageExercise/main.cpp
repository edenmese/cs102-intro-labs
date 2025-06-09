//
//  main.cpp
//  Ch9AverageExercise
//
//  Created by Eden Meseret on 11/28/22.
//

#include <iostream>
#include <iomanip>
using namespace std;


double CalcAvg (int n1,int n2,int n3);

int main()
{
    
    int n1,n2,n3 = 0.0;
    double avg = 0.0;
    
    cout <<  "enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "enter third number: ";
    cin >> n3;
    
    avg = CalcAvg (n1,n2,n3);
    cout << fixed << setprecision(1);
    cout << "Average: " << avg << endl;

    
     
    
}


double CalcAvg(int n1,int n2,int n3)
{
    return (n1 + n2 + n3)/3 ;
}
