/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: miller
 *
 * Created on April 20, 2020, 6:40 PM
 */

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

    // reads each line of the inputFile and adds it to the vector
    inputFile.open("input.txt");
    while (std::getline(inputFile, str)) {

        std::cout << str.substr(0, str.find(",")) << std::endl;
        while (!str.empty() && str.find(",") != -1) {
            str = str.substr(str.find(",") + 1, str.length()); // shortens the str
            std::cout << str.substr(0, str.find(",")) << std::endl;
        }
        // adds string to the vector
    }
    inputFile.close();

    return 0;
}

