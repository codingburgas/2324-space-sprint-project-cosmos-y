#pragma once

#ifndef COSMOS_Y_H
#define COSMOS_Y_H

#include <iostream>
#include <cstdlib> 

void displayMainMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "            Cosmos-Y                  " << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "1. Planets" << std::endl;
    std::cout << "2. Galaxies" << std::endl;
    std::cout << "3. Other Space Bodies" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void displayPlanetsMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|            Planets                | " << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "| [1] | Mercury            |" << std::endl;
    std::cout << "| [2] | Venus              |" << std::endl;
    std::cout << "| [3] | Earth              |" << std::endl;
    std::cout << "| [4] | Mars               |" << std::endl;
    std::cout << "| [5] | Jupiter            |" << std::endl;
    std::cout << "| [6] | Saturn             |" << std::endl;
    std::cout << "| [7] | Uranus             |" << std::endl;
    std::cout << "| [8] | Neptune            |" << std::endl;
    std::cout << "| [9] | Back to Main Menu  |" << std::endl;
    std::cout << "|__________________________|" << std::endl;
}

#endif