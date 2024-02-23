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
#define DARK_BLUE "\033[0;34m"

void displayMercuryInfo() {
    system("CLS");
    std::cout << ORANGE << "======================================" <<RESET<< std::endl;
    std::cout << ORANGE << "|              Mercury               |" << RESET << std::endl;
    std::cout << ORANGE << "======================================" << RESET << std::endl;
    std::cout << "|   Place   |                        |" << std::endl;
    std::cout << "|    in     |  Mercury is the first  |" << std::endl;
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
    std::cout << "|    in     |  Venus is the second   |" << std::endl;
    std::cout << "|  S.system |planet in the S. system.|" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|Composition|                        |" << std::endl;
    std::cout << "|           |  Venus is made up of   |" << std::endl;
    std::cout << "|     of    |     approximately      |" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|   planet  |                        |" << std::endl;
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
    std::cout << GREEN << "=======================================" <<RESET<< std::endl;
    std::cout << GREEN << "|                Earth                |" << RESET << std::endl;
    std::cout << GREEN << "=======================================" << RESET << std::endl;
    std::cout << "|   Place   |                         |" << std::endl;
    std::cout << "|     in    |  Earth is the Third     |" << std::endl;
    std::cout << "|  S.system |         planet.         |" << std::endl;
    std::cout << "|___________|_________________________|" << std::endl;
    std::cout << "|           |                         |" << std::endl;
    std::cout << "|Composition|Earth is primarily       |" << std::endl;
    std::cout << "|           |composed of rock and     |" << std::endl;
    std::cout << "|     of    |metal, with a diverse    |" << std::endl;
    std::cout << "|           |biosphere of life.       |" << std::endl;
    std::cout << "|   planet  |                         |" << std::endl;
    std::cout << "|           |It has a nitrogen-rich   |" << std::endl;
    std::cout << "|           |atmosphere.              |" << std::endl;
    std::cout << "|___________|_________________________|" << std::endl;
    std::cout << "|           |                         |" << std::endl;
    std::cout << "|  Average  |The average temperature  |" << std::endl;
    std::cout << "|temperature|of Earth is about 15     |" << std::endl;
    std::cout << "|           |degrees Celsius.         |" << std::endl;
    std::cout << "|  Distance |It is located at an      |" << std::endl;
    std::cout << "|from    sun|average distance of      |" << std::endl;
    std::cout << "|           |149.6 million kilometers |" << std::endl;
    std::cout << "|           |away from the sun.       |" << std::endl;
    std::cout << "|___________|_________________________|" << std::endl;
}

void displayMarsInfo() {
    system("CLS");
    std::cout << RED << "========================================" << RESET << std::endl;
    std::cout << RED << "|                Mars                  |" << RESET << std::endl;
    std::cout << RED << "========================================" << RESET << std::endl;
    std::cout << "|   Place   |                          |" << std::endl;
    std::cout << "|     in    |   Mars is the Fourth     |" << std::endl;
    std::cout << "|  S.system |         planet.          |" << std::endl;
    std::cout << "|___________|__________________________|" << std::endl;
    std::cout << "|           |                          |" << std::endl;
    std::cout << "|Composition|Mars is primarily made    |" << std::endl;
    std::cout << "|           |up of iron and silica.    |" << std::endl;
    std::cout << "|     of    |It has a thin atmosphere  |" << std::endl;
    std::cout << "|           |composed mainly of carbon |" << std::endl;
    std::cout << "|   planet  |dioxide.                  |" << std::endl;
    std::cout << "|           |                          |" << std::endl;
    std::cout << "|___________|__________________________|" << std::endl;
    std::cout << "|           |                          |" << std::endl;
    std::cout << "|  Average  |The average temperature   |" << std::endl;
    std::cout << "|temperature| of Mars is about -80     |" << std::endl;
    std::cout << "|           | degrees Fahrenheit.      |" << std::endl;
    std::cout << "|  Distance | It is located at a       |" << std::endl;
    std::cout << "|from    sun| distance of 227.9 million|" << std::endl;
    std::cout << "|           | kilometers from the sun. |" << std::endl;
    std::cout << "|___________|__________________________|" << std::endl;
}

void displayJupiterInfo() {
    system("CLS");
    std::cout << JUPITER << "======================================" << RESET << std::endl;
    std::cout << JUPITER << "|               Jupiter              |   " << RESET << std::endl;
    std::cout << JUPITER << "======================================" << RESET << std::endl;
    std::cout << "|   Place   |                        |" << std::endl;
    std::cout << "|     in    | Jupiter is the Fifth   |" << std::endl;
    std::cout << "|  S.system |        planet.         |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|Composition|Jupiter is mainly       |" << std::endl;
    std::cout << "|           |composed of hydrogen    |" << std::endl;
    std::cout << "|     of    |and helium, with traces |" << std::endl;
    std::cout << "|           |of other elements.      |" << std::endl;
    std::cout << "|   planet  |                        |" << std::endl;
    std::cout << "|           | It has a thick         |" << std::endl;
    std::cout << "|           |atmosphere with clouds  |" << std::endl;
    std::cout << "|           |of ammonia and methane. |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|  Average  |The average temperature |" << std::endl;
    std::cout << "|temperature|of Jupiter is about     |" << std::endl;
    std::cout << "|           |-145 degrees Celsius.   |" << std::endl;
    std::cout << "|  Distance |It is located at a      |" << std::endl;
    std::cout << "|from    sun|distance of 778m km away|" << std::endl;
    std::cout << "|___________|from_the_Sun.___________|" << std::endl;
}

void displaySaturnInfo() {
    system("CLS");
    std::cout << YELLOW << "=======================================" << RESET << std::endl;
    std::cout << YELLOW << "|                Saturn               |" << RESET << std::endl;
    std::cout << YELLOW << "=======================================" << RESET << std::endl;
    std::cout << "|   Place   |                         |" << std::endl;
    std::cout << "|     in    |  Saturn is the Sixth    |" << std::endl;
    std::cout << "|  S.system |         planet.         |" << std::endl;
    std::cout << "|___________|_________________________|" << std::endl;
    std::cout << "|           |                         |" << std::endl;
    std::cout << "|Composition|Saturn is primarily      |" << std::endl;
    std::cout << "|           |composed of hydrogen     |" << std::endl;
    std::cout << "|     of    |and helium, with         |" << std::endl;
    std::cout << "|           |trace amounts of other   |" << std::endl;
    std::cout << "|   planet  |elements. It is known    |" << std::endl;
    std::cout << "|           |for its prominent ring   |" << std::endl;
    std::cout << "|           |system.                  |" << std::endl;
    std::cout << "|___________|_________________________|" << std::endl;
    std::cout << "|           |                         |" << std::endl;
    std::cout << "|  Average  |The average temperature  |" << std::endl;
    std::cout << "|temperature| of Saturn is about -178 |" << std::endl;
    std::cout << "|           | degrees Celsius.        |" << std::endl;
    std::cout << "|  Distance | It is located at a      |" << std::endl;
    std::cout << "|from    sun|distance of 1.429 billion|" << std::endl;
    std::cout << "|           |km away from the sun.    |" << std::endl;
    std::cout << "|___________|_________________________|" << std::endl;
}


void displayUranusInfo() {
    system("CLS");
    std::cout << CYAN << "=====================================" << RESET << std::endl;
    std::cout << CYAN << "|              Uranus               |" << RESET << std::endl;
    std::cout << CYAN << "=====================================" << RESET << std::endl;
    std::cout << "|   Place   |                       |" << std::endl;
    std::cout << "|     in    | Uranus is the Seventh |" << std::endl;
    std::cout << "|  S.system |        planet.        |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|Composition|About 83% of Uranus is |" << std::endl;
    std::cout << "|           |composed of hydrogen,  |" << std::endl;
    std::cout << "|     of    |helium, and methane.   |" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|   planet  |It also contains       |" << std::endl;
    std::cout << "|           |traces of water and    |" << std::endl;
    std::cout << "|           |ammonia.               |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |The average temperature|" << std::endl;
    std::cout << "|  Average  |of Uranus is about -224|" << std::endl;
    std::cout << "|temperature|degrees Celsius.It is  |" << std::endl;
    std::cout << "|    and    |located at a distance  |" << std::endl;
    std::cout << "|  Distance |of 2.871 billion km    |" << std::endl;
    std::cout << "| from  Sun |      away from        |" << std::endl;
    std::cout << "|___________|_______the_sun_________|" << std::endl;
    // Add more details about Uranus
}

void displayNeptuneInfo() {
    system("CLS");
    std::cout << BLUE << "=====================================" <<RESET<< std::endl;
    std::cout << BLUE << "|              Neptune              |   " << RESET << std::endl;
    std::cout << BLUE << "=====================================" << RESET << std::endl;
    std::cout << "|   Place   |                        |" << std::endl;
    std::cout << "|     in    |  Neptune is the Eighth |" << std::endl;
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

void displayMainMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|             Cosmos-Y              | " << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "|[1]| Planets                       |" << std::endl;
    std::cout << "|[2]| Galaxies                      |" << std::endl;
    std::cout << "|[3]| Other Space Bodies            |" << std::endl;
    std::cout << "|[4]| Exit                          |" << std::endl;
    std::cout << "|___|_______________________________|" << std::endl;
}

void displayPlanetsMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|            Planets                |" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "| [1] | Mercury                     |" << std::endl;
    std::cout << "| [2] | Venus                       |" << std::endl;
    std::cout << "| [3] | Earth                       |" << std::endl;
    std::cout << "| [4] | Mars                        |" << std::endl;
    std::cout << "| [5] | Jupiter                     |" << std::endl;
    std::cout << "| [6] | Saturn                      |" << std::endl;
    std::cout << "| [7] | Uranus                      |" << std::endl;
    std::cout << "| [8] | Neptune                     |" << std::endl;
    std::cout << "| [9] | Back to Main Menu           |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
}

void displayOtherSpaceBodiesMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|      Other Space Bodies           |" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "| [1] | Black Hole                  |" << std::endl;
    std::cout << "| [2] | White Dwarf                 |" << std::endl;
    std::cout << "| [3] | Back to Main Menu           |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
}

void displayBlackHoleInfo() {
    system("CLS");
    std::cout << DARK_BLUE << "======================================" << RESET << std::endl;
    std::cout << DARK_BLUE << "|             Black Hole             |" << RESET << std::endl;
    std::cout << DARK_BLUE << "======================================" << RESET << std::endl;
    std::cout << "|     Black holes are regions        |" << std::endl;
    std::cout << "|     of spacetime exhibiting        |" << std::endl;
    std::cout << "|     gravitational attraction       |" << std::endl;
    std::cout << "|      so strong that nothing        |" << std::endl;
    std::cout << "|       can escape, not even         |" << std::endl;
    std::cout << "|      light. They are formed        |" << std::endl;
    std::cout << "|       from massive stars           |" << std::endl;
    std::cout << "|      collapsing under their        |" << std::endl;
    std::cout << "|          own gravity.              |" << std::endl;
    std::cout << "|___________________________________ |" << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|  Avarage  | Black holes do not have|" << std::endl;
    std::cout << "|temperature| a surface temperature  |" << std::endl;
    std::cout << "|    and    | as they trap everything|" << std::endl;
    std::cout << "|  Distance | including light.       |" << std::endl;
    std::cout << "|from center|                        |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
}

void displayWhiteDwarfInfo() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|            White Dwarf            |" << std::endl;
    std::cout << "=====================================" << std::endl;
}

void waitForEnter() {
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

#endif // COSMOS_Y_H