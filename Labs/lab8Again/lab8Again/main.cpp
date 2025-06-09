//
//  main.cpp
//  lab8Again
//
//  Created by Eden Meseret on 12/7/22.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("eBooks.txt");
    
    
    if (outFile.is_open())
    {
        outFile << "test";
        cout << "success!";
        outFile.close();
    }
    else
    {
        cout << "File cannot be found.";
    }
    
}
