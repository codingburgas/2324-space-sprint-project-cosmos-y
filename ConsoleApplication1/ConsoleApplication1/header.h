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
#define BEIGE "\033[38;2;255;228;196m"
#define CYAN2 "\033[38;2;13;152;186m"
#define LIGHT_BLUE "\033[38;2;173;216;230m"
#define LIGHT_YELLOW "\033[38;2;254;255;120m"
#define GRAY "\033[38;2;128;128;128m"

void displayMercuryInfo();

void displayVenusInfo();

void displayEarthInfo();

void displayMarsInfo();

void displayJupiterInfo();

void displaySaturnInfo();

void displayUranusInfo();

void displayNeptuneInfo();

void displayMainMenu();

void displaySolarPlanetsMenu();

void displayOtherSpaceBodiesMenu();

void displayBlackHoleInfo();

void displayWhiteDwarfInfo();

void waitForEnter();

void displayGalaxiesMenu();

void displayMilkyWayInfo();

void displayAndromedaInfo();

void displayTriangulumInfo();

void displayTadpoleInfo();

void displayHoagInfo();

void displayNeutronStarInfo();

void displayAsteroidInfo();

void displayUniverseInfo();

void displayHiggsBosonInfo();

void displayParticleMenu();

void displayStandardModelTable();