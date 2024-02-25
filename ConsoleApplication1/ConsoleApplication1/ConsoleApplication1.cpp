#include <iostream>
#include <cstdlib>  // for system CLS to clear the console
#include "header.h"

int main() 
{
    int mainChoice;
    int subChoice;
    do {
        displayMainMenu();

        std::cout << "Enter your choice: ";
        std::cin >> mainChoice;

        switch (mainChoice) {
        case 1:
            do {
                displaySolarPlanetsMenu();
                std::cout << "Enter your choice: ";
                std::cin >> subChoice;

                switch (subChoice) {
                case 1:
                    displayMercuryInfo();
                    waitForEnter();
                    break;
                case 2:
                    displayVenusInfo();
                    waitForEnter();
                    break;
                case 3:
                    displayEarthInfo();
                    waitForEnter();
                    break;
                case 4:
                    displayMarsInfo();
                    waitForEnter();
                    break;
                case 5:
                    displayJupiterInfo();
                    waitForEnter();
                    break;
                case 6:
                    displaySaturnInfo();
                    waitForEnter();
                    break;
                case 7:
                    displayUranusInfo();
                    waitForEnter();
                    break;
                case 8:
                    displayNeptuneInfo();
                    waitForEnter();
                    break;
                case 9:
                    break;  
                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            } while (subChoice != 9);
            break;
        case 2:
            do {
                displayGalaxiesMenu();
                std::cout << "Enter your choice: ";
                std::cin >> subChoice;

                switch (subChoice) {
                case 1:
                    displayMilkyWayInfo();
                    waitForEnter();
                    break;
                case 2:
                    displayAndromedaInfo();
                    waitForEnter();
                    break;
                case 3:
                    displayTriangulumInfo();
                    waitForEnter();
                    break;
                case 4:
                    displayTadpoleInfo();
                    waitForEnter();
                    break;
                case 5:
                    displayHoagInfo();
                    waitForEnter();
                    break;
                case 6:
                    break;
                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            } while (subChoice != 6);
            break;
        case 3:
            do {
                displayOtherSpaceBodiesMenu();
                std::cout << "Enter your choice: ";
                std::cin >> subChoice;

                switch (subChoice) {
                case 1:
                    displayBlackHoleInfo();
                    waitForEnter();
                    break;
                case 2:
                    displayWhiteDwarfInfo();
                    waitForEnter();
                    break;
                case 3:
                    displayNeutronStarInfo();
                    waitForEnter();
                    break;
                case 4:
                    displayAsteroidInfo();
                    waitForEnter();
                    break;
                case 5:
                    displayUniverseInfo();
                    waitForEnter();
                    break;
                case 6:
                    break;
                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            } while (subChoice != 6);
            break;
        case 4:
            std::cout << "Exiting Cosmos-Y..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // wait for enter before clearing the screen
        waitForEnter();

    } while (mainChoice != 4);

    

    return 0;
}
