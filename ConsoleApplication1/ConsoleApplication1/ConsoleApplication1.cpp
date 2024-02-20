#include <iostream>
#include <cstdlib>  // For system("CLS") to clear the console
#include "./header.h"
#include "./cosmos_animation.h"

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
                displayPlanetsMenu();
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
                    break;  // Back to Planets Menu
                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            } while (subChoice != 9);
            break;
        case 2:
            std::cout << "Galaxies information not implemented in this version." << std::endl;
            waitForEnter();
            break;
        case 3:
            std::cout << "Other Space Bodies information not implemented in this version." << std::endl;
            waitForEnter();
            break;
        case 4:
            std::cout << "Exiting Cosmos-Y..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Wait for user input before clearing the screen
        waitForEnter();

    } while (mainChoice != 4);

    

    return 0;
}
