/*****************************************************************************
Date: 07-07-2018
Description: Main file of lab2. This project prompt user to open a file and
count letters until end of file. In each paragraph, count each charactors and
save in an input file. Ask user to create output files.
*****************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include "letter.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){                   
    std::ifstream inFile; //variable for file handling
    std::ofstream outFile;
    string fileName; //input 
    int alpArray[26]; //initialize an array, size is 26

    cout << "Would you like to read a file?" << endl; //open a file to be modified
    cout << "Please enter a file name: ";
    cin >> fileName;
    inFile.open(fileName.c_str(), std::ios::in); 
    if(!inFile){  
        cout << "Cannot open file " << fileName;
        return 1;
    }
    
    while(!inFile.eof()){ 
        for(int i = 0; i < 26; i++){  //clear array
            alpArray[i] = 0;
        }
        count_letters(inFile, alpArray);  //call cout_letters function
        output_letters(outFile, alpArray); //call output_letters function
        outFile.close(); //close output file    
    }

    inFile.close(); //close input file

    return 0;

}