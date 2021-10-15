// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user for their radius and height of cylinder
// and outputs the volume


#include <iostream>
#include <cmath>


float VolumeOfCylinder(int radius, int height) {
    // calculate volume
    float volume;

    // process
    volume = (M_PI * pow(radius, 2) * height);

    return volume;
}

int main() {
    // this function calls the precedent function
    std::string userRadius;
    int userRadiusInt;
    std::string userHeight;
    int userHeightInt;
    float CalculatedVolume;

    // input & output
    std::cout << "Enter the radius of the cylinder (cm): ";
    std::cin >> userRadius;

    std::cout << "Enter the height of the cylinder (cm): ";
    std::cin >> userHeight;

    try {
        userRadiusInt = std::stoi(userRadius);
        userHeightInt = std::stoi(userHeight);
        // call function
        CalculatedVolume = VolumeOfCylinder(userRadiusInt, userHeightInt);
        std::cout << "" << std::endl;
        std::cout << "The volume of your cylinder is "
        << CalculatedVolume << " cm³";
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "That is an invalid integer.";
    }
        std::cout << "\nDone." << std::endl;
}
