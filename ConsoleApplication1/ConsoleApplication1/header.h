#pragma once
#ifndef COSMOS_Y_H
#define COSMOS_Y_H

#include <iostream>
#include <cstdlib>  // For system("CLS") to clear the console

void displayMainMenu() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "      Cosmos-Y      " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "1. Planets" << std::endl;
    std::cout << "2. Galaxies" << std::endl;
    std::cout << "3. Other Space Bodies" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void displayPlanetsMenu() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "       Planets      " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "1. Mercury" << std::endl;
    std::cout << "2. Venus" << std::endl;
    std::cout << "3. Earth" << std::endl;
    std::cout << "4. Mars" << std::endl;
    std::cout << "5. Jupiter" << std::endl;
    std::cout << "6. Saturn" << std::endl;
    std::cout << "7. Uranus" << std::endl;
    std::cout << "8. Neptune" << std::endl;
    std::cout << "9. Back to Main Menu" << std::endl;
}

void displayMercuryInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "      Mercury       " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "It’s the nearest planet to the sun and is also the smallest planet in the solar system." << std::endl;
    std::cout << "Its size is slightly larger than the size of the moon of Earth." << std::endl;
    // Add more details about Mercury
}

void displayVenusInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "       Venus        " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "When observed from the Earth, it’s the second brightest and takes 224.7 Earth days to complete one revolution." << std::endl;
    std::cout << "It rotates in the opposite direction to all planets except Uranus." << std::endl;
    // Add more details about Venus
}

void displayEarthInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "       Earth        " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "It’s the third planet from the Sun and is the only known planet to harbor life." << std::endl;
    std::cout << "The Earth's age is around 4.5 billion years old." << std::endl;
    // Add more details about Earth
}

void displayMarsInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "       Mars         " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "It’s the fourth planet from the sun and also the second-smallest in the solar system." << std::endl;
    std::cout << "Its red color also makes it known as the red planet (presence of iron oxide)." << std::endl;
    // Add more details about Mars
}

void displayJupiterInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "      Jupiter       " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "It’s the fifth planet from the Sun and the largest planet among all." << std::endl;
    std::cout << "Jupiter is a giant ball of gases with a one-thousand mass of the Sun." << std::endl;
    // Add more details about Jupiter
}

void displaySaturnInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "      Saturn        " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "It’s the sixth planet from the Sun and the second-largest planet in the solar system." << std::endl;
    std::cout << "It’s a giant gas planet with an average radius that is nine times the radius of the Earth." << std::endl;
    // Add more details about Saturn
}

void displayUranusInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "      Uranus        " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "It’s the seventh planet from the Sun and has the fourth-largest planet by mass and third-largest by radius." << std::endl;
    std::cout << "It's also referred to as an ice giant." << std::endl;
    // Add more details about Uranus
}

void displayNeptuneInfo() {
    system("CLS");
    std::cout << "===================" << std::endl;
    std::cout << "      Neptune       " << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "It’s the eighth planet from the Sun and is the fourth-largest planet by diameter." << std::endl;
    std::cout << "The third most massive planet and is the densest giant planet." << std::endl;
    // Add more details about Neptune
}

#endif // COSMOS_Y_H