/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: miller
 *
 * Created on May 6, 2020, 10:25 PM
 */

#include <string>
#include <iostream>
#include <map>

int main() {

    // initialize map <key, value>
    std::map<std::string, int> map;

    // fill map with data
    map["end"] = 0;
    map["option 1"] = 1;
    map["option 2"] = 2;
    
    int map_value = -1;

    while (map_value != 0) {
        
        // read from user
        std::string input;
        std::getline(std::cin, input);
        
        if (map.count(input) > 0) {
            // found
            std::cout << "Key found" << std::endl;
            map_value = map.find(input)->second; // assign the commands value to use in switch
        } else {
            // not found
            std::cout << "Key not found" << std::endl;
            map_value = -1;
        }
        
        switch (map_value) {
            case 0:
                break;
            case 1: // option 1
                std::cout << "Option 1 is selected" << std::endl;
                break;
            case 2:
                std::cout << "Option 2 is selected" << std::endl;
                break;
            default:
                std::cout << "Invalid Command" << std::endl;
        }
    }
    return 0;
}

