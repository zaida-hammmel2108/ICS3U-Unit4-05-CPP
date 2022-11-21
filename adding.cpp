// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Nov 2022
// This program adds numbers

#include <iostream>
#include <string>

int main() {
    // this function uses a continue loop
    std::string stringLoops;
    std::string strUser;
    int intLoops;
    int intUser;
    int loopCounter = 0;
    int answer = 0;

    // input
    std::cout << "This program only adds positive numbers." << std::endl;
    std::cout << "Enter the amount of numbers you want to add: ";
    std::cin >> stringLoops;

    // process and output
    try {
        intLoops = std::stoi(stringLoops);
        while (loopCounter < intLoops) {
            std::cout << "Enter the number you want to add: ";
            std::cin >> strUser;
            intUser = std::stoi(strUser);
            if (intUser > 0) {
                answer = answer + intUser;
            } else {
                loopCounter++;
                continue;
            }
            loopCounter++;
        }
        std::cout << "The sum is : " << answer << ".";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
