#pragma once
#ifndef COSMOS_Y_H
#define COSMOS_Y_H

#include <iostream>
#include <cstdlib>  // For system("CLS") to clear the console

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define ORANGE  "\033[38;5;208m"
#define VENUS   "\033[38;2;223;139;57m"
#define JUPITER "\033[38;2;176;159;140m"

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
    std::cout << "             Planets                  " << std::endl;
    std::cout << "=====================================" << std::endl;
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
    std::cout << ORANGE << "======================================" <<RESET<< std::endl;
    std::cout << ORANGE << "|              Mercury               |" << RESET << std::endl;
    std::cout << ORANGE << "======================================" << RESET << std::endl;
    std::cout << "|   Place   |                        |" << std::endl;
    std::cout << "|    i n    |  Mercury is the first  |" << std::endl;
    std::cout << "|  S.system |planet in the S. system.|" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|Composition|                        |" << std::endl;
    std::cout << "|           | Mercury is made up of  |" << std::endl;
    std::cout << "|     of    |   approximately 70%    |" << std::endl;
    std::cout << "|           |    metallic and 30%    |" << std::endl;
    std::cout << "|   planet  |   silicate material.   |" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|  Avarage  |The average temperature |" << std::endl;
    std::cout << "|temperature| of the planet Mercury  |" << std::endl;
    std::cout << "|    and    |is about 430 degrees C. |" << std::endl;
    std::cout << "|  Distance | It is at a distance of |" << std::endl;
    std::cout << "|from    sun| 62.816 million km from |" << std::endl;
    std::cout << "|___________|________the_sun_________|" << std::endl;
}

void displayVenusInfo() {
    system("CLS");
    std::cout << VENUS << "=====================================" <<RESET<< std::endl;
    std::cout << VENUS << "|               Venus               |" << RESET << std::endl;
    std::cout << VENUS << "=====================================" << RESET << std::endl;
    std::cout << "|   Place   |                        |" << std::endl;
    std::cout << "|    i n    |  Venus is the second   |" << std::endl;
    std::cout << "|  S.system |planet in the S. system.|" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|Composition|                        |" << std::endl;
    std::cout << "|           |  Venus is made up of   |" << std::endl;
    std::cout << "|     of    |   approximately 70%    |" << std::endl;
    std::cout << "|           |    metallic and 30%    |" << std::endl;
    std::cout << "|   planet  |   silicate material.   |" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|  Avarage  |The average temperature |" << std::endl;
    std::cout << "|temperature| of the planet Mercury  |" << std::endl;
    std::cout << "|    and    |is about 430 degrees C. |" << std::endl;
    std::cout << "|  Distance | It is at a distance of |" << std::endl;
    std::cout << "|from    sun| 108.74 million km from |" << std::endl;
    std::cout << "|___________|________the_sun_________|" << std::endl;
}

void displayEarthInfo() {
    system("CLS");
    std::cout << GREEN << "=====================================" <<RESET<< std::endl;
    std::cout << GREEN << "|               Earth               |" << RESET << std::endl;
    std::cout << GREEN << "=====================================" << RESET << std::endl;
    std::cout << "It's the third planet from the Sun and is the only known planet to harbor life." << std::endl;
    std::cout << "The Earth's age is around 4.5 billion years old." << std::endl;
    // Add more details about Earth
}

void displayMarsInfo() {
    system("CLS");
    std::cout << RED << "=====================================" << RESET << std::endl;
    std::cout << RED << "|               Mars                |" << RESET << std::endl;
    std::cout << RED << "=====================================" << RESET << std::endl;
    std::cout << "It's the fourth planet from the sun and also the second-smallest in the solar system." << std::endl;
    std::cout << "Its red color also makes it known as the red planet (presence of iron oxide)." << std::endl;
    // Add more details about Mars
}

void displayJupiterInfo() {
    system("CLS");
    std::cout << JUPITER << "=====================================" << RESET << std::endl;
    std::cout << JUPITER << "|              Jupiter              |   " << RESET << std::endl;
    std::cout << JUPITER << "=====================================" << RESET << std::endl;
    std::cout << "It's the fifth planet from the Sun and the largest planet among all." << std::endl;
    std::cout << "Jupiter is a giant ball of gases with a one-thousand mass of the Sun." << std::endl;
    // Add more details about Jupiter
}

void displaySaturnInfo() {
    system("CLS");
    std::cout << YELLOW << "=====================================" << RESET << std::endl;
    std::cout << YELLOW << "|               Saturn              |" << RESET << std::endl;
    std::cout << YELLOW << "=====================================" << RESET << std::endl;
    std::cout << "It's the sixth planet from the Sun and the second-largest planet in the solar system." << std::endl;
    std::cout << "It's a giant gas planet with an average radius that is nine times the radius of the Earth." << std::endl;
    // Add more details about Saturn
}


void displayUranusInfo() {
    system("CLS");
    std::cout << CYAN << "=====================================" << RESET << std::endl;
    std::cout << CYAN << "|              Uranus               |" << RESET << std::endl;
    std::cout << CYAN << "=====================================" << RESET << std::endl;
    std::cout << "It's the seventh planet from the Sun and has the fourth-largest planet by mass and third-largest by radius." << std::endl;
    std::cout << "It's also referred to as an ice giant." << std::endl;
    // Add more details about Uranus
}

void displayNeptuneInfo() {
    system("CLS");
    std::cout << BLUE << "=====================================" <<RESET<< std::endl;
    std::cout << BLUE << "|              Neptune              |   " << RESET << std::endl;
    std::cout << BLUE << "=====================================" << RESET << std::endl;
    std::cout << "|   Place   |                        |" << std::endl;
    std::cout << "|    i n    |  Neptune is the Eighth |" << std::endl;
    std::cout << "|  S.system |         planet.        |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|Composition|About 80% of the planet |" << std::endl;
    std::cout << "|           |is made up of hot,dence |" << std::endl;
    std::cout << "|     of    |fluid of  icy materials |" << std::endl;
    std::cout << "|           |in which the folowing:  |" << std::endl;
    std::cout << "|   planet  |water, methane & amonia |" << std::endl;
    std::cout << "|           |     are included.      |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|  Avarage  |The average temperature |" << std::endl;
    std::cout << "|temperature| of the planet Neptune  |" << std::endl;
    std::cout << "|    and    |is about -214 degrees C.|" << std::endl;
    std::cout << "|  Distance | It is at a distance of |" << std::endl;
    std::cout << "|from    sun| 4.4723 billion km from |" << std::endl;
    std::cout << "|___________|________the_sun_________|" << std::endl;
}



void waitForEnter() {
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

#endif // COSMOS_Y_H