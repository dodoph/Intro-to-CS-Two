/*********************************************
Date: 07-07-2018
Description: Implementation file of Lab2
**********************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "letter.hpp"

/***************************************************
            output_letters function
This function takes two parameters: output file stream 
and a pointer to an array to write the letter 
frequencies of each paragraph to file which is created
by user.
***************************************************/

void output_letters(std::ofstream &outFileIn, int*arrayIn){
    std::string outputFileName; 
    std::cout << "Please enter a filename which you want to output." << std::endl;
    std::cin >> outputFileName;
    outFileIn.open(outputFileName.c_str(), std::ios::out);

    for(int i =0; i < 26; i++){
        outFileIn << (char)(65 + i) << " : " << arrayIn[i] << "\n";
    }
}

/***************************************************
            cout_letters function
This function takes two parameters: input file stream 
and a pointer to an array to count the letter
frequuencies of each paragraph.
***************************************************/

void count_letters(std::ifstream &inFileIn, int*array){
    std::string input;
    getline(inFileIn, input);
    for(int i = 0; i < input.length(); i ++){
        if(!isdigit(input[i])){ //avoid digits
            if(input[i] >= 'a' && input[i] <= 'z'){  //count upper case
                array[input[i] - 97]++;
            }
            else if(input[i] >= 'A' && input[i] <= 'Z') //count lower case
                array[input[i] - 65]++;
        }
    }
}
