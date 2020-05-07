/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tommiller
 *
 * Created on February 17, 2020, 12:18 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
   
    // declare and allocate memory for an integer
    int number;
    number = 5;
    // declare a pointer of int type currently null
    int* numberPtr;
    // numberPtr now references number
    numberPtr = &number;
    
    // dereferencing numberPtr prints out the value where numberPtr points to
    std::cout << "Dereference numberPtr to retreive value of number: " 
            << *numberPtr << std::endl;
    
    // prints out the memory address of number
    std::cout << "Memory address of number: " << &number << std::endl;
    
    // prints out the memory address of where numberPtr points to (number)
    std::cout << "Memory address of where numberPtr points to: " 
            << numberPtr << std::endl;
    
    // prints out the memory address of numberPtr
    std::cout << "Memory address of numberPtr: " << &numberPtr << std::endl;
    
    // change the value where numberPtr points to (number)
    *numberPtr = 8;
    
    // dereferencing numberPtr prints out the value where numberPtr points to
    std::cout << "Dereference numberPtr to retreive value of number: " 
            << *numberPtr << std::endl;
    
    return 0;
}

