// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program calculates the area and perimeter of a circle
//    with radius 15mm

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter

    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
