#include <iostream>
#include <cstdlib>  // for system CLS to clear the console
#include "header.h"
using namespace std;

int main() 
{
    int mainChoice;
    int subChoice;
    int particleChoice;
    do {
        displayMainMenu();

         cout << "Enter your choice: ";
         cin >> mainChoice;

        switch (mainChoice) {
        case 1:
            do {
                displaySolarPlanetsMenu();
                 cout << "Enter your choice: ";
                 cin >> subChoice;

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
                     cout << "Invalid choice. Please try again." <<  endl;
                     cin.clear();
                     cin.ignore( numeric_limits< streamsize>::max(), '\n');
                }
            } while (subChoice != 9);
            break;
        case 2:
            do {
                displayGalaxiesMenu();
                 cout << "Enter your choice: ";
                 cin >> subChoice;

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
                     cout << "Invalid choice. Please try again." <<  endl;
                     cin.clear();
                     cin.ignore( numeric_limits< streamsize>::max(), '\n');
                }
            } while (subChoice != 6);
            break;
        case 3:
            do {
                displayOtherSpaceBodiesMenu();
                 cout << "Enter your choice: ";
                 cin >> subChoice;

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
                     cout << "Invalid choice. Please try again." <<  endl;
                     cin.clear();
                     cin.ignore( numeric_limits< streamsize>::max(), '\n');
                }
            } while (subChoice != 6);
            break;
        case 4:
            do {
                displayParticleMenu();
                 cout << "Enter your choice: ";
                 cin >> particleChoice;

                switch (particleChoice) {
                case 1:
                    displayStandardModelTable();
                    waitForEnter();
                    break;
                case 2:
                    displayHiggsBosonInfo();
                    waitForEnter();
                    break;
                case 3:
                    break;
                default:
                     cout << "Invalid choice. Please try again." <<  endl;
                     cin.clear();
                     cin.ignore( numeric_limits< streamsize>::max(), '\n');
                }
            } while (particleChoice != 3);
            break;
        case 5:
             cout << "Exiting Cosmos-Y..." <<  endl;
            break;
        default:
             cout << "Invalid choice. Please try again." <<  endl;
             cin.clear();
             cin.ignore( numeric_limits< streamsize>::max(), '\n');

        }

        waitForEnter();

    } while (mainChoice != 5);

    

    return 0;
}
