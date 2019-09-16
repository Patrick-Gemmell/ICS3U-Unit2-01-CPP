// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 12 2019
// This is the circle calculator program

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15mm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "mm^2" << std::endl;
    std::cout << "Perimeter is " << (2*M_PI*15) << "mm" << std::endl;
}
