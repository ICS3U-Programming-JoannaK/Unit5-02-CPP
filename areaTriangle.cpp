// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: May 6, 2025
// This program uses a function that
// calculates the area of a triangle

#include<iostream>
#include<string>

void CalculateArea(float base, float height) {
    float area = (base * height) / 2;
    std::cout << "The area is " << area << "cm^2" << std::endl;
}

int main() {
    float heightInteger, baseInteger;
    std::string heightString, baseString;

    std::cout << "Enter the height of the triangle(cm): ";
    std::cin >> heightString;
    try {
        heightInteger = std::stof(heightString);
        std::cout << "Enter the base of the triangle(cm): ";
        std::cin >> baseString;
        try {
            baseInteger = std::stof(baseString);
            if (baseInteger <= 0 || heightInteger <= 0) {
                std::cout << "The number should be greater than 0";
            } else {
                CalculateArea(baseInteger, heightInteger);
            }
        } catch (std::invalid_argument) {
            std::cout << baseString << " is not valid input.\n";
        }
    } catch (std::invalid_argument) {
        std::cout << heightString << " is not valid input.\n";
    }
}
