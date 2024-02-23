#pragma once

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
#define PURPLE "\033[38;2;112;38;112m"

void displayMercuryInfo();

void displayVenusInfo();

void displayEarthInfo();

void displayMarsInfo();

void displayJupiterInfo();

void displaySaturnInfo();

void displayUranusInfo();

void displayNeptuneInfo();

void displayMainMenu();

void displayPlanetsMenu();

void displayOtherSpaceBodiesMenu();

void displayBlackHoleInfo();

void displayWhiteDwarfInfo();

void waitForEnter();

void displayGalaxiesMenu();

void displayMilkyWayInfo();