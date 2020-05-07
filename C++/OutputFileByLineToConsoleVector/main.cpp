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
#include <vector>

/*
 * This program reads in a line from a text file, assigns it to an array
 */
int main() {

    // variable declarations
    std::ifstream inputFile;
    std::string str;
    std::string fileName;
    std::vector<std::string> v;
    
    std::cout << "Enter name of file (with extension):" << std::endl;
    std::cin >> fileName;
    
    // reads each line of the inputFile and adds it to the vector
    inputFile.open(fileName);
    int count = 0;
    while (std::getline(inputFile, str)) {
        // adds string to the vector
        v.push_back(str);
        count++;
    }
    inputFile.close();
    
    // prints the vector to the console
    for (int i = 0; i < v.size(); ++i){
        std::cout << v.at(i) << std::endl;
    }
    
    return 0;
}

