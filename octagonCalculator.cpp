// Copyright (c) 2026 Bryson All rights reserved.
// .
// Created by: Bryson Grant
// Date: 10 13, 2026
// This code asks the user for the side length of an Octagon,
// then calculates the Perimeter and Area of the Octagon

#include <iomanip>
#include <cmath>
#include <iostream>

int main() {
    // Setting vairables
    float L;
    float Perimeter;
    float Area;

    // Asking for the side length of the Octagon
    std::cout << "Hello, welcome to Bryson's Octagon Area"
    "and Perimeter calculator!:"
    "Enter the side length(cm):\n";
    std::cin >> L;

    // Calculate the Perimeter of the Octagon
    Perimeter = 8 * L;

    // Calculate the Area of the Octagon
    Area = 2 * (1 + sqrt(2)) * pow(L, 2);

std::cout << std::fixed << std::setprecision(2);

    // Display the Perimeter and Area of the Octagon
    std::cout << "\n";
    std::cout << "Perimeter of the Octagon = " << Perimeter << "cm\n";
    std::cout << "Area of the Octagon = " << Area << "cm²\n";

}
