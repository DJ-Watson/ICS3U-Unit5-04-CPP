// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program calculates the volume of a cylinder


#include <iostream>
#include <cmath>


void CalculateVolume(int radius, int height) {
    // function calculates volume
    int volume;

    // process
    volume = M_PI*pow(radius, 2)*height;

    // output
    std::cout << volume << "cm³" << std::endl;
}

main() {
    // this function gets length and width

    int radInput;
    int heightInput;

    // input
    std::cout << "Enter length of rectangle (cm): ";
    std::cin >> radInput;
    std::cout << "Enter width of rectangle (cm): ";
    std::cin >> heightInput;
    std::cout << std::endl;

    // call functions
    CalculateVolume(radInput, heightInput);
}
