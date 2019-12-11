// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program calculates the first 100 fibonacci sequences

#include <iostream>
#include <array>

// Where I learned to create my own types:
// https://www.geeksforgeeks.org/return-local-array-c-function/

// Defining data type
    struct array {
        unsigned long long array[100];
    };

struct array Calculate() {
    // This function calculates the first 100 fibonacci sequences

    // Variables and arrays
    unsigned long long firstNumber = 1;
    unsigned long long secondNumber = 0;
    unsigned long long answer;
    struct array fibonacciArray;
    // std::array<int, 100> fibonacciArray;

    // Process
    for (int counter = 0; counter < 100; counter++) {
        answer = firstNumber + secondNumber;
        fibonacciArray.array[counter] = answer;
        firstNumber = secondNumber;
        secondNumber = answer;
    }
    return fibonacciArray;
}

int main() {
    // This function prints out the first 100 fibonacci sequences

    // Arrays
    // std::array<int, 100> numberArray;
    struct array numberArray;

    // Process
    numberArray = Calculate();

    // Output
    for (int counter = 0; counter < 100; counter++) {
        if (counter == 0) {
            std::cout << numberArray.array[0] << " + 0 = " \
                      << numberArray.array[0] << std::endl;
        } else if (counter == 1) {
            std::cout << "0 + " << numberArray.array[1] << " = " \
                      << numberArray.array[1] << std::endl;
        } else {
            std::cout << numberArray.array[counter - 2] << " + " \
                      << numberArray.array[counter - 1] << " = " \
                      << numberArray.array[counter] << std::endl;
        }
    }
}
