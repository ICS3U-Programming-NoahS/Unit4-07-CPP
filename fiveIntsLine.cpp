// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 21th, 2023
// This program displays all the integers between 1000 and 2000,
// 5 integers per line
#include <iostream>

int main() {
    // Declare variables
    int counter;

    // Using for loop to display all integers between 1000 and 2000
    for (counter = 1000; counter <= 2000; counter++) {
        if (counter == 1000) {
            std::cout << counter << ", ";
        } else if (counter % 5 == 0) {
            std::cout << counter << "\n" << std::endl;
        } else {
            std::cout << counter << " ";
        }
    }
}
