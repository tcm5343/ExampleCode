/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tcm5343
 *
 * Created on February 12, 2020, 11:58 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

//using namespace std;

/*
 * This program reads in a line from a text file, assigns it to an array
 */
int main() {

    // variable declarations
    std::ifstream inputFile;
    std::string str;
    std::string fileName;
    
    std::cout << "Enter name of file (with extension):" << std::endl;
    std::cin >> fileName;
    
    // opens text file to be read
    inputFile.open(fileName);
    // counts the number of lines in a file
    int numberOfLines = 0;
    while (std::getline(inputFile, str)) {
        numberOfLines++;
    }
    inputFile.close();
    
    // declaration of a dynamic array
    std::string* array = new std::string[numberOfLines];
    
    // reads each line of the inputFile and print its
    inputFile.open(fileName);
    int count = 0;
    while (std::getline(inputFile, str)) {
        // sets index of array to equal the string (which is the current line)
        array[count] = str;
        count++;
    }
    inputFile.close();
    
    // outputs the array to the console
    for (int i = 0; i < numberOfLines; ++i){
        std::cout << array[i] << std::endl;
    }
    
    // deallocate memory
    delete [] array;
    
    return 0;
}

