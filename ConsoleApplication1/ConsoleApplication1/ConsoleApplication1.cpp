#include <iostream>
#include <cstdlib>  // For system("CLS") to clear the console
#include "./header.h"

int main() {
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
                    break;
                case 2:
                    displayVenusInfo();
                    break;
                case 3:
                    displayEarthInfo();
                    break;
                case 4:
                    displayMarsInfo();
                    break;
                case 5:
                    displayJupiterInfo();
                    break;
                case 6:
                    displaySaturnInfo();
                    break;
                case 7:
                    displayUranusInfo();
                    break;
                case 8:
                    displayNeptuneInfo();
                    break;
                case 9:
                    break;  // Back to Planets Menu
                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
                }
            } while (subChoice != 9);
            break;
        case 2:
            std::cout << "Galaxies information not implemented in this version." << std::endl;
            break;
        case 3:
            std::cout << "Other Space Bodies information not implemented in this version." << std::endl;
            break;
        case 4:
            std::cout << "Exiting Cosmos-Y..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }

        // Wait for user input before clearing the screen
        std::cout << "Press Enter to continue...";
        std::cin.ignore();
        std::cin.get();

    } while (mainChoice != 4);

    return 0;
}