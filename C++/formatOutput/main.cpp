/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: miller
 *
 * Created on April 22, 2020, 3:36 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

/*
 * 
 */
int main() {

    struct Human {
        std::string name;
        int age;

        Human(std::string name, int age) {
            this->name = name;
            this->age = age;
        }
    };

    Human human1("Tom", 41);
    Human human2("Fred", 24);
    Human human3("Jon", 32);

    Human humanArray[] = {human1, human2, human3};

    for (const Human &human : humanArray) {
        std::cout << std::setw(6) << "Name: " << std::setw(6) << human.name 
                << std::setw(10) << "Age: " << std::setw(4) << human.age 
                << std::endl;
    }
    
    return 0;
}

