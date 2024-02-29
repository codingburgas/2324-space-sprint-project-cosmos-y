#include "header.h"
#include <iostream>
#include <cstdlib> //Has traditional C functions and datatypes.
using namespace std;


void displayMainMenu() {
    system("CLS"); //Use to clear console
     cout << "=====================================" <<  endl;
     cout << "|             Cosmos-Y              | " <<  endl;
     cout << "=====================================" <<  endl;
     cout << "|[1]| Planets                       |" <<  endl;
     cout << "|[2]| Galaxies                      |" <<  endl;
     cout << "|[3]| Other Space Bodies            |" <<  endl;
     cout << "|[4]| Particles                     |" <<  endl;
     cout << "|[5]| Exit                          |" <<  endl;
     cout << "|___________________________________|" <<  endl;
}

void displaySolarPlanetsMenu() {
    system("CLS");
     cout << "=====================================" <<  endl;
     cout << "|              Planets              |" <<  endl;
     cout << "=====================================" <<  endl;
     cout << "| [1] | Mercury                     |" <<  endl;
     cout << "| [2] | Venus                       |" <<  endl;
     cout << "| [3] | Earth                       |" <<  endl;
     cout << "| [4] | Mars                        |" <<  endl;
     cout << "| [5] | Jupiter                     |" <<  endl;
     cout << "| [6] | Saturn                      |" <<  endl;
     cout << "| [7] | Uranus                      |" <<  endl;
     cout << "| [8] | Neptune                     |" <<  endl;
     cout << "| [9] | Back to Main Menu           |" <<  endl;
     cout << "|___________________________________|" <<  endl;
}

void displayOtherSpaceBodiesMenu() {
    system("CLS");
     cout << "=====================================" <<  endl;
     cout << "|        Other Space Bodies         |" <<  endl;
     cout << "=====================================" <<  endl;
     cout << "| [1] | Black Hole                  |" <<  endl;
     cout << "| [2] | White Dwarf                 |" <<  endl;
     cout << "| [3] | Neutron Star                |" <<  endl;
     cout << "| [4] | Asteroid                    |" <<  endl;
     cout << "| [5] | The Universe                |" <<  endl;
     cout << "| [6] | Back to Main Menu           |" <<  endl;
     cout << "|___________________________________|" <<  endl;
}

void displayGalaxiesMenu() {
    system("CLS");
     cout << "=====================================" <<  endl;
     cout << "|             Galaxies               |" <<  endl;
     cout << "=====================================" <<  endl;
     cout << "| [1] | Milky Way                    |" <<  endl;
     cout << "| [2] | Andromeda                    |" <<  endl;
     cout << "| [3] | Triangulum                   |" <<  endl;
     cout << "| [4] | Tadpole Galaxy               |" <<  endl;
     cout << "| [5] | Hoag's Object                |" <<  endl;
     cout << "| [6] | Back to Main Menu            |" <<  endl;
     cout << "|____________________________________|" <<  endl;
}

void displayParticleMenu() {
    system("CLS");
     cout << "=====================================" <<  endl;
     cout << "|             Particles             |" <<  endl;
     cout << "=====================================" <<  endl;
     cout << "| [1] | Standard Model              |" <<  endl;
     cout << "| [2] | Higgs boson                 |" <<  endl;
     cout << "| [3] | Back to Main Menu           |" <<  endl;
     cout << "|___________________________________|" <<  endl;
}

    void waitForEnter() {
         cout << "Press Enter to continue...";
         cin.ignore( numeric_limits< streamsize>::max(), '\n');
         cin.get();
    }


void displayMercuryInfo() {
    system("CLS");
     cout << ORANGE << "======================================" << RESET <<  endl;
     cout << ORANGE << "|              Mercury               |" << RESET <<  endl;
     cout << ORANGE << "======================================" << RESET <<  endl;
     cout << "|   Place   |                        |" <<  endl;
     cout << "|    in     |  Mercury is the first  |" <<  endl;
     cout << "|  S.system |planet in the S. system.|" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|Composition|                        |" <<  endl;
     cout << "|           | Mercury is made up of  |" <<  endl;
     cout << "|     of    |   approximately 70%    |" <<  endl;
     cout << "|           |    metallic and 30%    |" <<  endl;
     cout << "|   planet  |   silicate material.   |" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|  Avarage  |The average temperature |" <<  endl;
     cout << "|temperature| of the planet Mercury  |" <<  endl;
     cout << "|    and    |is about 430 degrees C. |" <<  endl;
     cout << "|  Distance | It is at a distance of |" <<  endl;
     cout << "|from    sun| 62.816 million km from |" <<  endl;
     cout << "|           |        the sun         |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
}

void displayVenusInfo() {
    system("CLS");
     cout << VENUS << "======================================" << RESET <<  endl;
     cout << VENUS << "|                Venus               |" << RESET <<  endl;
     cout << VENUS << "======================================" << RESET <<  endl;
     cout << "|   Place   |                        |" <<  endl;
     cout << "|    in     |  Venus is the second   |" <<  endl;
     cout << "|  S.system |planet in the S. system.|" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|Composition|                        |" <<  endl;
     cout << "|           |  Venus is made up of   |" <<  endl;
     cout << "|     of    |     approximately      |" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|   planet  |                        |" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|  Avarage  |The average temperature |" <<  endl;
     cout << "|temperature| of the planet Mercury  |" <<  endl;
     cout << "|    and    |is about 430 degrees C. |" <<  endl;
     cout << "|  Distance | It is at a distance of |" <<  endl;
     cout << "|from    sun| 108.74 million km from |" <<  endl;
     cout << "|           |        the sun         |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
}

void displayEarthInfo() {
    system("CLS");
     cout << GREEN << "=======================================" << RESET <<  endl;
     cout << GREEN << "|                Earth                |" << RESET <<  endl;
     cout << GREEN << "=======================================" << RESET <<  endl;
     cout << "|   Place   |                         |" <<  endl;
     cout << "|     in    |  Earth is the Third     |" <<  endl;
     cout << "|  S.system |         planet.         |" <<  endl;
     cout << "|___________|_________________________|" <<  endl;
     cout << "|           |                         |" <<  endl;
     cout << "|Composition|Earth is primarily       |" <<  endl;
     cout << "|           |composed of rock and     |" <<  endl;
     cout << "|     of    |metal, with a diverse    |" <<  endl;
     cout << "|           |biosphere of life.       |" <<  endl;
     cout << "|   planet  |                         |" <<  endl;
     cout << "|           |It has a nitrogen-rich   |" <<  endl;
     cout << "|           |atmosphere.              |" <<  endl;
     cout << "|___________|_________________________|" <<  endl;
     cout << "|           |                         |" <<  endl;
     cout << "|  Average  |The average temperature  |" <<  endl;
     cout << "|temperature|of Earth is about 15     |" <<  endl;
     cout << "|           |degrees Celsius.         |" <<  endl;
     cout << "|  Distance |It is located at an      |" <<  endl;
     cout << "|from    sun|average distance of      |" <<  endl;
     cout << "|           |149.6 million kilometers |" <<  endl;
     cout << "|           |away from the sun.       |" <<  endl;
     cout << "|___________|_________________________|" <<  endl;
}

void displayMarsInfo() {
    system("CLS");
     cout << RED << "========================================" << RESET <<  endl;
     cout << RED << "|                Mars                  |" << RESET <<  endl;
     cout << RED << "========================================" << RESET <<  endl;
     cout << "|   Place   |                          |" <<  endl;
     cout << "|     in    |   Mars is the Fourth     |" <<  endl;
     cout << "|  S.system |         planet.          |" <<  endl;
     cout << "|___________|__________________________|" <<  endl;
     cout << "|           |                          |" <<  endl;
     cout << "|Composition|Mars is primarily made    |" <<  endl;
     cout << "|           |up of iron and silica.    |" <<  endl;
     cout << "|     of    |It has a thin atmosphere  |" <<  endl;
     cout << "|           |composed mainly of carbon |" <<  endl;
     cout << "|   planet  |dioxide.                  |" <<  endl;
     cout << "|           |                          |" <<  endl;
     cout << "|___________|__________________________|" <<  endl;
     cout << "|           |                          |" <<  endl;
     cout << "|  Average  |The average temperature   |" <<  endl;
     cout << "|temperature| of Mars is about -80     |" <<  endl;
     cout << "|           | degrees Fahrenheit.      |" <<  endl;
     cout << "|  Distance | It is located at a       |" <<  endl;
     cout << "|from    sun| distance of 227.9 million|" <<  endl;
     cout << "|           | kilometers from the sun. |" <<  endl;
     cout << "|___________|__________________________|" <<  endl;
}

void displayJupiterInfo() {
    system("CLS");
     cout << JUPITER << "======================================" << RESET <<  endl;
     cout << JUPITER << "|               Jupiter              |   " << RESET <<  endl;
     cout << JUPITER << "======================================" << RESET <<  endl;
     cout << "|   Place   |                        |" <<  endl;
     cout << "|     in    | Jupiter is the Fifth   |" <<  endl;
     cout << "|  S.system |        planet.         |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|Composition|Jupiter is mainly       |" <<  endl;
     cout << "|           |composed of hydrogen    |" <<  endl;
     cout << "|     of    |and helium, with traces |" <<  endl;
     cout << "|           |of other elements.      |" <<  endl;
     cout << "|   planet  |                        |" <<  endl;
     cout << "|           | It has a thick         |" <<  endl;
     cout << "|           |atmosphere with clouds  |" <<  endl;
     cout << "|           |of ammonia and methane. |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|  Average  |The average temperature |" <<  endl;
     cout << "|temperature|of Jupiter is about     |" <<  endl;
     cout << "|           |-145 degrees Celsius.   |" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|  Distance |It is located at a      |" <<  endl;
     cout << "| from  sun |distance of 778m km away|" <<  endl;
     cout << "|           |from the Sun.           |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
}

void displaySaturnInfo() {
    system("CLS");
     cout << YELLOW << "=======================================" << RESET <<  endl;
     cout << YELLOW << "|                Saturn               |" << RESET <<  endl;
     cout << YELLOW << "=======================================" << RESET <<  endl;
     cout << "|   Place   |                         |" <<  endl;
     cout << "|     in    |  Saturn is the Sixth    |" <<  endl;
     cout << "|  S.system |         planet.         |" <<  endl;
     cout << "|___________|_________________________|" <<  endl;
     cout << "|           |                         |" <<  endl;
     cout << "|Composition|Saturn is primarily      |" <<  endl;
     cout << "|           |composed of hydrogen     |" <<  endl;
     cout << "|     of    |and helium, with         |" <<  endl;
     cout << "|           |trace amounts of other   |" <<  endl;
     cout << "|   planet  |elements. It is known    |" <<  endl;
     cout << "|           |for its prominent ring   |" <<  endl;
     cout << "|           |system.                  |" <<  endl;
     cout << "|___________|_________________________|" <<  endl;
     cout << "|           |                         |" <<  endl;
     cout << "|  Average  |The average temperature  |" <<  endl;
     cout << "|temperature| of Saturn is about -178 |" <<  endl;
     cout << "|           | degrees Celsius.        |" <<  endl;
     cout << "|  Distance | It is located at a      |" <<  endl;
     cout << "|from    sun|distance of 1.429 billion|" <<  endl;
     cout << "|           |km away from the sun.    |" <<  endl;
     cout << "|___________|_________________________|" <<  endl;
}

void displayUranusInfo() {
    system("CLS");
     cout << CYAN << "=====================================" << RESET <<  endl;
     cout << CYAN << "|              Uranus               |" << RESET <<  endl;
     cout << CYAN << "=====================================" << RESET <<  endl;
     cout << "|  Place in |                       |" <<  endl;
     cout << "|   Solar   | Uranus is the Seventh |" <<  endl;
     cout << "|   System  |        planet.        |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |About 83% of Uranus is |" <<  endl;
     cout << "|           | composed of hydrogen, |" <<  endl;
     cout << "|Composition| helium, and methane.  |" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |It also contains traces|" <<  endl;
     cout << "|           | of water and ammonia  |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |The average temperature|" <<  endl;
     cout << "|  Average  |of Uranus is about -224|" <<  endl;
     cout << "|temperature|degrees Celsius.It is  |" <<  endl;
     cout << "|    and    |located at a distance  |" <<  endl;
     cout << "|  Distance |of 2.871 billion km    |" <<  endl;
     cout << "| from Sun  |      away from        |" <<  endl;
     cout << "|           |       the sun         |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayNeptuneInfo() {
    system("CLS");
     cout << BLUE << "======================================" << RESET <<  endl;
     cout << BLUE << "|               Neptune              |" << RESET <<  endl;
     cout << BLUE << "======================================" << RESET <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|  Place in |   Neptune is the 8th   |" <<  endl;
     cout << "|   Solar   |    planet being the    |" <<  endl;
     cout << "|   System  | furthest from the sun. |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|Composition|About 80% of the planet |" <<  endl;
     cout << "|           |is made up of hot,dence |" <<  endl;
     cout << "|     of    |fluid of  icy materials |" <<  endl;
     cout << "|           |in which the folowing:  |" <<  endl;
     cout << "|   planet  |water, methane & amonia |" <<  endl;
     cout << "|           |     are included.      |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
     cout << "|           |                        |" <<  endl;
     cout << "|  Avarage  |The average temperature |" <<  endl;
     cout << "|temperature| of the planet Neptune  |" <<  endl;
     cout << "|    and    | is about -214 degrees. |" <<  endl;
     cout << "|  Distance |   It is at a distance  |" <<  endl;
     cout << "| from sun  | of 4.4 billion km from |" <<  endl;
     cout << "|           |        the sun         |" <<  endl;
     cout << "|___________|________________________|" <<  endl;
}

void displayBlackHoleInfo() {
    system("CLS");
     cout << DARK_BLUE << "=====================================" << RESET <<  endl;
     cout << DARK_BLUE << "|            Black Holes            |" << RESET <<  endl;
     cout << DARK_BLUE << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  Black holes are fascinating      |" <<  endl;
     cout << "|  objects with properties that     |" <<  endl;
     cout << "|  challenge our understanding of   |" <<  endl;
     cout << "|  physics. They have captivated    |" <<  endl;
     cout << "|  scientists and the public alike, |" <<  endl;
     cout << "|  and their study continues to     |" <<  endl;
     cout << "|  provide insights into the nature |" <<  endl;
     cout << "|  of space, time, and the universe.|" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |Black holes are formed |" <<  endl;
     cout << "|           |when massive stars     |" <<  endl;
     cout << "|           |exhaust their fuel and |" <<  endl;
     cout << "|           |collapse under their   |" <<  endl;
     cout << "| Creation  |own gravity. This      |" <<  endl;
     cout << "|           |continues until all the|" <<  endl;
     cout << "|           |mass is concentrated   |" <<  endl;
     cout << "|           |into a single point of |" <<  endl;
     cout << "|           |infinite density, known|" <<  endl;
     cout << "|           |as a singularity.      |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |Black holes are scaled |" <<  endl;
     cout << "|           |based on their mass.   |" <<  endl;
     cout << "|           |Smaller black holes are|" <<  endl;
     cout << "|           |classified as stellar  |" <<  endl;
     cout << "|           |black holes with masses|" <<  endl;
     cout << "|   Size    |up to a few times the  |" <<  endl;
     cout << "|  Scaling  | Sun's. Supermassive   |" <<  endl;
     cout << "|  System   |black holes, found at  |" <<  endl;
     cout << "|           |the centers of         |" <<  endl;
     cout << "|           |galaxies, can have     |" <<  endl;
     cout << "|           |masses millions or     |" <<  endl;
     cout << "|           |billions of times that |" <<  endl;
     cout << "|           |of the Sun.            |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayWhiteDwarfInfo() {
    system("CLS");
     cout << "=====================================" <<  endl;
     cout << "|            White Dwarf            |" <<  endl;
     cout << "=====================================" <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  White dwarfs are the remnants    |" <<  endl;
     cout << "|  of low to medium mass stars that |" <<  endl;
     cout << "|  have exhausted their nuclear fuel|" <<  endl;
     cout << "|  and have collapsed under gravity |" <<  endl;
     cout << "|  into extremely dense objects.    |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|  Creation |White dwarfs are formed|" <<  endl;
     cout << "|           |during the final stages|" <<  endl;
     cout << "|           |of stellar evolution,  |" <<  endl;
     cout << "|           |when a star no longer  |" <<  endl;
     cout << "|           |has enough nuclear fuel|" <<  endl;
     cout << "|           |to maintain its fusion |" <<  endl;
     cout << "|           |reactions and collapses|" <<  endl;
     cout << "|           |under its own gravity. |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|    Age    |The age of white dwarfs|" <<  endl;
     cout << "|           |varies depending on the|" <<  endl;
     cout << "|           |mass of the progenitor |" <<  endl;
     cout << "|           |star. They can exist   |" <<  endl;
     cout << "|           |for billions of years, |" <<  endl;
     cout << "|           |gradually cooling over |" <<  endl;
     cout << "|           |time.                  |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|  Surface  |White dwarfs have      |" <<  endl;
     cout << "|   Temp.   |extremely high         |" <<  endl;
     cout << "|           |surface temperatures,  |" <<  endl;
     cout << "|           |ranging from tens of   |" <<  endl;
     cout << "|           |thousands to hundreds  |" <<  endl;
     cout << "|           |of thousands of        |" <<  endl;
     cout << "|           |degrees Celsius.       |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayNeutronStarInfo() {
    system("CLS");
     cout << LIGHT_BLUE << "=====================================" << RESET <<  endl;
     cout << LIGHT_BLUE << "|           Neutron Star            |" << RESET <<  endl;
     cout << LIGHT_BLUE << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  Neutron stars are incredibly     |" <<  endl;
     cout << "|  dense stellar remnants composed  |" <<  endl;
     cout << "|  almost entirely of neutrons,     |" <<  endl;
     cout << "|  hence their name. They form      |" <<  endl;
     cout << "|  when massive stars undergo       |" <<  endl;
     cout << "|  supernova explosions, leaving    |" <<  endl;
     cout << "|  behind a core of compressed      |" <<  endl;
     cout << "|  neutrons.                        |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "| Creation  |Neutron stars are made |" <<  endl;
     cout << "|           |during supernova events|" <<  endl;
     cout << "|           |when massive stars     |" <<  endl;
     cout << "|           |exhaust their nuclear  |" <<  endl;
     cout << "|           |fuel and collapse under|" <<  endl;
     cout << "|           |gravity. The core      |" <<  endl;
     cout << "|           |becomes so dense that  |" <<  endl;
     cout << "|           |it consists primarily  |" <<  endl;
     cout << "|           |of neutrons.           |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|    Age    |Neutron stars can be   |" <<  endl;
     cout << "|           |extremely old, with    |" <<  endl;
     cout << "|           |some existing for      |" <<  endl;
     cout << "|           |billions of years. They|" <<  endl;
     cout << "|           |cool over time, but    |" <<  endl;
     cout << "|           |their age can be       |" <<  endl;
     cout << "|           |difficult to determine |" <<  endl;
     cout << "|           |precisely.             |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|  Surface  |Neutron stars have     |" <<  endl;
     cout << "|   Temp.   |extremely high         |" <<  endl;
     cout << "|           |surface temperatures,  |" <<  endl;
     cout << "|           |ranging from hundreds  |" <<  endl;
     cout << "|           |of thousands to        |" <<  endl;
     cout << "|           |millons of degrees     |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayAsteroidInfo() {
    system("CLS");
     cout << GRAY << "=====================================" << RESET <<  endl;
     cout << GRAY << "|             Asteroids             |" << RESET <<  endl;
     cout << GRAY << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  Asteroids are small rocky        |" <<  endl;
     cout << "|  bodies that orbit the Sun, mostly|" <<  endl;
     cout << "|  located in the asteroid belt     |" <<  endl;
     cout << "|  between Mars and Jupiter. They   |" <<  endl;
     cout << "|  are remnants from the early      |" <<  endl;
     cout << "|  formation of the solar system.   |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|   Size    |Asteroids vary greatly |" <<  endl;
     cout << "|           |in size, from tiny     |" <<  endl;
     cout << "|           |pebbles to large bodies|" <<  endl;
     cout << "|           |measuring hundreds of  |" <<  endl;
     cout << "|           |kilometers across.     |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "| Difference|Asteroids are rocky    |" <<  endl;
     cout << "|   from    |bodies similar to      |" <<  endl;
     cout << "|  Meteors  |planets but smaller.   |" <<  endl;
     cout << "|           |When they enter        |" <<  endl;
     cout << "|           |Earth's atmosphere they|" <<  endl;
     cout << "|           |are called meteors and |" <<  endl;
     cout << "|           |if they reach the      |" <<  endl;
     cout << "|           |ground, they are termed|" <<  endl;
     cout << "|           |meteorites.            |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|  Examples |Some well-known        |" <<  endl;
     cout << "|           |asteroids include      |" <<  endl;
     cout << "|           |Ceres, Vesta, Eros and |" <<  endl;
     cout << "|           |Mathilde.              |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayUniverseInfo() {
    system("CLS");
     cout << PURPLE << "=====================================" << RESET <<  endl;
     cout << PURPLE << "|" << BLUE << "           The Universe          " << PURPLE << " | " << RESET <<  endl;
     cout << PURPLE << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  The Universe is the entirety of  |" <<  endl;
     cout << "|  space, time, matter, energy, and |" <<  endl;
     cout << "|  the physical laws and constants  |" <<  endl;
     cout << "|  that describe them. It contains  |" <<  endl;
     cout << "|  all galaxies, stars, planets,    |" <<  endl;
     cout << "|  and other cosmic entities.       |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|    Age    |The age of the Universe|" <<  endl;
     cout << "|           |is approximately 13.8  |" <<  endl;
     cout << "|           |billion years, based on|" <<  endl;
     cout << "|           |observations of the    |" <<  endl;
     cout << "|           |cosmic microwave       |" <<  endl;
     cout << "|           |background radiation.  |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "| Creation  |The Universe is thought|" <<  endl;
     cout << "|           |to have originated from|" <<  endl;
     cout << "|           |a cosmic event known as|" <<  endl;
     cout << "|           |the Big Bang, where all|" <<  endl;
     cout << "|           |matter and energy were |" <<  endl;
     cout << "|           |initially compressed   |" <<  endl;
     cout << "|           |into a singular point  |" <<  endl;
     cout << "|           |of infinite density.   |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|   Size    |The size of the        |" <<  endl;
     cout << "|           |Universe is enormously |" <<  endl;
     cout << "|           |vast currently thought |" <<  endl;
     cout << "|           |to be about 93 billion |" <<  endl;
     cout << "|           |light years in         |" <<  endl;
     cout << "|           |diameter.              |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "| Expansion |The Universe is        |" <<  endl;
     cout << "|           |expanding at an        |" <<  endl;
     cout << "|           |accelerating rate, as  |" <<  endl;
     cout << "|           |observed through the   |" <<  endl;
     cout << "|           |redshift of distant    |" <<  endl;
     cout << "|           |galaxies. This shifting|" <<  endl;
     cout << "|           |is driven by dark      |" <<  endl;
     cout << "|           |energy, an unknown     |" <<  endl;
     cout << "|           |force that makes up    |" <<  endl;
     cout << "|           |about 68% of the total |" <<  endl;
     cout << "|           |energy density of the  |" <<  endl;
     cout << "|           |Universe.              |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayMilkyWayInfo() {
    system("CLS");
     cout << PURPLE << "=====================================" << RESET <<  endl;
     cout << PURPLE << "|            Milky Way              |" << RESET <<  endl;
     cout << PURPLE << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  The Milky Way is a barred spiral |" <<  endl;
     cout << "|  galaxy that contains around      |" <<  endl;
     cout << "|  100 billion stars, including our |" <<  endl;
     cout << "|  Sun. The Milky Way is part of    |" <<  endl;
     cout << "|  the Virgo Supercluster of        |" <<  endl;
     cout << "|  galaxies.                        |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |The Milky way is a huge|" <<  endl;
     cout << "|    Size   |Galaxy, which is around|" <<  endl;
     cout << "|           |  100 thousand light   |" <<  endl;
     cout << "|           |    years in diameter  |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |The Milky Way is       |" <<  endl;
     cout << "|           |believed to be         |" <<  endl;
     cout << "|    Age    |approximately          |" <<  endl;
     cout << "|           |13.6 billion years old,|" <<  endl;
     cout << "|           |nearly as old as the   |" <<  endl;
     cout << "|           |universe itself.       |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayAndromedaInfo() {
    system("CLS");
     cout << BEIGE << "=====================================" << RESET <<  endl;
     cout << BEIGE << "|          Andromeda Galaxy         |" << RESET <<  endl;
     cout << BEIGE << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  The Andromeda Galaxy, also known |" <<  endl;
     cout << "| as M31, is a barred spiral galaxy |" <<  endl;
     cout << "| located approximately 2.5 million |" <<  endl;
     cout << "|   light-years from Earth. It is   |" <<  endl;
     cout << "|    nearest spiral galaxy to the   |" <<  endl;
     cout << "|    Milky Way and is approaching   |" <<  endl;
     cout << "|      towards a collision with     |" <<  endl;
     cout << "|        our galaxy in about        |" <<  endl;
     cout << "|         4.5 billion years.        |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           | The Andromeda Galaxy  |" <<  endl;
     cout << "|           |  is a massive spiral  |" <<  endl;
     cout << "|    Size   |galaxy, with a diameter|" <<  endl;
     cout << "|           |   of approximately    |" <<  endl;
     cout << "|           |       220,000ly.      |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           | The Andromeda Galaxy  |" <<  endl;
     cout << "|           | has an estimated age  |" <<  endl;
     cout << "|           | of approximately 10   |" <<  endl;
     cout << "|    Age    | billion years, making |" <<  endl;
     cout << "|           | it one of the oldest  |" <<  endl;
     cout << "|           | galaxies in the       |" <<  endl;
     cout << "|           | Universe.             |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayTriangulumInfo() {
    system("CLS");
     cout << CYAN2 << "=====================================" << RESET <<  endl;
     cout << CYAN2 << "|         Triangulum Galaxy         |" << RESET <<  endl;
     cout << CYAN2 << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "| The Triangulum Galaxy, also known |" <<  endl;
     cout << "| as Messier 33 or M33, is a spiral |" <<  endl;
     cout << "|  galaxy located approximately 3   |" <<  endl;
     cout << "|  million light-years from Earth.  |" <<  endl;
     cout << "| It is a member of the Local Group |" <<  endl;
     cout << "| of galaxies, which is part of the |" <<  endl;
     cout << "|         Virgo Supercluster.       |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           | The Triangulum Galaxy |" <<  endl;
     cout << "|    Size   |is considerably smaller|" <<  endl;
     cout << "|           |than the Milky Way and |" <<  endl;
     cout << "|           |Andromeda, with a      |" <<  endl;
     cout << "|           |diameter of about      |" <<  endl;
     cout << "|           |60,000ly.              |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           | The Triangulum Galaxy |" <<  endl;
     cout << "|    Age    |is estimated to be     |" <<  endl;
     cout << "|           |around 10-12 billion   |" <<  endl;
     cout << "|           |years old, similar to  |" <<  endl;
     cout << "|           |the Milky Way and      |" <<  endl;
     cout << "|           |Andromeda galaxies.    |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayTadpoleInfo() {
    system("CLS");
     cout << LIGHT_BLUE << "=====================================" << RESET <<  endl;
     cout << LIGHT_BLUE << "|           Tadpole Galaxy          |" << RESET <<  endl;
     cout << LIGHT_BLUE << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|  The Tadpole Galaxy, also known   |" <<  endl;
     cout << "|  as UGC 10214 or Arp 188, is an   |" <<  endl;
     cout << "|    interacting galaxy located     |" <<  endl;
     cout << "|    approximately 420 million      |" <<  endl;
     cout << "|   light-years away in the Draco   |" <<  endl;
     cout << "|  constellation. It was discovered |" <<  endl;
     cout << "|  by the Hubble Space Telescope on |" <<  endl;
     cout << "|          March 13, 2002.          |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           | The Tadpole Galaxy is |" <<  endl;
     cout << "|    Size   |relatively small, with |" <<  endl;
     cout << "|           |a diameter of about    |" <<  endl;
     cout << "|           |over 120,000ly away    |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           | The Tadpole Galaxy is |" <<  endl;
     cout << "|    Age    |believed to be quite   |" <<  endl;
     cout << "|           |young in cosmic terms, |" <<  endl;
     cout << "|           |with an estimated age  |" <<  endl;
     cout << "|           |of around a few hundred|" <<  endl;
     cout << "|           |million years.         |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           | The Tadpole Galaxy    |" <<  endl;
     cout << "|   Shape   |has a distinctive      |" <<  endl;
     cout << "|           |tadpole-like shape,    |" <<  endl;
     cout << "|           |characterized by a     |" <<  endl;
     cout << "|           |bright head and a long |" <<  endl;
     cout << "|           |tail of stars and gas. |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayHoagInfo() {
    system("CLS");
     cout << LIGHT_YELLOW << "=====================================" << RESET <<  endl;
     cout << LIGHT_YELLOW << "|           Hoag's Object           |" << RESET <<  endl;
     cout << LIGHT_YELLOW << "=====================================" << RESET <<  endl;
     cout << "|                                   |" <<  endl;
     cout << "|    Hoag's Object is a rare ring   |" <<  endl;
     cout << "| ring galaxy located approximately |" <<  endl;
     cout << "|  600 million light-years away in  |" <<  endl;
     cout << "|  the constellation Serpens. It    |" <<  endl;
     cout << "|   was discovered by astronomer    |" <<  endl;
     cout << "|         Art Hoag in 1950.         |" <<  endl;
     cout << "|___________________________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |Hoag's Object is       |" <<  endl;
     cout << "|    Size   |quite large, with a    |" <<  endl;
     cout << "|           |diameter of about      |" <<  endl;
     cout << "|           |100,000 light-years.   |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |Hoag's Object is       |" <<  endl;
     cout << "|    Age    |estimated to be quite  |" <<  endl;
     cout << "|           |old, with an age of    |" <<  endl;
     cout << "|           |about 13 billion years.|" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
     cout << "|           |                       |" <<  endl;
     cout << "|           |Hoag's Object is       |" <<  endl;
     cout << "|   Shape   |characterized by a     |" <<  endl;
     cout << "|           |bright core surrounded |" <<  endl;
     cout << "|           |by a nearly perfect    |" <<  endl;
     cout << "|           |ring of stars.         |" <<  endl;
     cout << "|___________|_______________________|" <<  endl;
}

void displayHiggsBosonInfo() {
    system("CLS");
     cout << YELLOW << "===============================================================================" << RESET<<  endl;
     cout << YELLOW << "|" << LIGHT_YELLOW << "                                Higgs Boson                                 " << YELLOW << " | "  << RESET <<  endl;
     cout << YELLOW << "===============================================================================" << RESET <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "|  General Info:                                                              |" <<  endl;
     cout << "|  The Higgs boson is an elementary particle in the Standard Model of particle|" <<  endl;
     cout << "|  physics. It is responsible for the mechanism that gives mass to other      |" <<  endl;
     cout << "|  particles. Without the Higgs boson, particles would move at the speed of   |" <<  endl;
     cout << "|  light, making the universe very different from what we observe. The        |" <<  endl;
     cout << "|  discovery of the Higgs boson confirmed a key prediction of the Standard    |" <<  endl;
     cout << "|  Model.                                                                     |" <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "===============================================================================" <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "|  History:                                                                   |" <<  endl;
     cout << "|  The existence of the Higgs boson was first theorized in the 1960s by       |" <<  endl;
     cout << "|  Peter Higgs and others. Its existence was confirmed by experiments at the  |" <<  endl;
     cout << "|  Large Hadron Collider (LHC) in 2012. The discovery of the Higgs boson was  |" <<  endl;
     cout << "|  a major milestone in particle physics, earning François Englert and Peter  |" <<  endl;
     cout << "|  Higgs the Nobel Prize in Physics in 2013.                                  |" <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "===============================================================================" <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "|  Use:                                                                       |" <<  endl;
     cout << "|  Understanding the Higgs mechanism is crucial for understanding the origins |" <<  endl;
     cout << "|  of mass in the universe. The discovery of the Higgs boson confirmed the    |" <<  endl;
     cout << "|  validity of the Standard Model and opened up new avenues for research in   |" <<  endl;
     cout << "|  particle physics. The Higgs boson is also important in cosmology and the   |" <<  endl;
     cout << "|  study of the early universe. It provides insights into the fundamental     |" <<  endl;
     cout << "|  forces and particles that govern our universe.                             |" <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "===============================================================================" <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "|  Interactions:                                                              |" <<  endl;
     cout << "|  The Higgs boson interacts with other particles through the Higgs field,    |" <<  endl;
     cout << "|  which permeates the universe. Its interactions are responsible for giving  |" <<  endl;
     cout << "|  mass to fundamental particles such as electrons and quarks. Understanding  |" <<  endl;
     cout << "|  these interactions is essential for understanding the behavior of matter at|" <<  endl;
     cout << "|  both microscopic and cosmic scales.                                        |" <<  endl;
     cout << "|                                                                             |" <<  endl;
     cout << "===============================================================================" <<  endl;
}

void displayStandardModelTable() {
        system("CLS");
         cout << PURPLE << "====================================" << RED << "============" << YELLOW << "===============" << RESET <<  endl;
         cout << PURPLE << "|           |           |           " << RED << "|           " << YELLOW << "|             |" << RESET <<  endl;
         cout << PURPLE << "|     u     |     c     |     t     " << RED << "|     g     " << YELLOW << "|      H      | " << RESET <<  endl;
         cout << PURPLE << "|    up     |   charm   |    top    " << RED << "|   gluon   " << YELLOW << "| higgs boson | " << RESET <<  endl;
         cout << PURPLE << "|-----------|-----------|-----------" << RED << "|-----------" << YELLOW << "|-------------| " << RESET <<  endl;
         cout << PURPLE << "|           |           |           " << RED << "|           |" << RESET <<  endl;
         cout << PURPLE << "|     d     |     s     |     b     " << RED << "|     Y     |" << RESET <<  endl;
         cout << PURPLE << "|    Down   |           |   bottom  " << RED << "|   photon  |" << RESET <<  endl;
         cout << GREEN << "|-----------|-----------|-----------" << RED << "|-----------|" << RESET <<  endl;
         cout << GREEN << "|           |           |           " << RED << "|           |" << RESET <<  endl;
         cout << GREEN << "|     e     |     \xe6     |     \xe7     " << RED << "|     Z     |" << RESET <<   endl;
         cout << GREEN << "|  electron |    muon   |    tau    " << RED << "|  Z boson  |" << RESET <<  endl;
         cout << GREEN << "|-----------|-----------|-----------" << RED << "|-----------|" << RESET <<  endl;
         cout << GREEN << "|           |           |           " << RED << "|           |" << RESET <<  endl;
         cout << GREEN << "|    Ve     |    V\xe6     |     V\xe7    " << RED << "|     W     |" << RESET <<  endl;
         cout << GREEN << "|           |           |           " << RED << "|  W boson  |" << RESET <<   endl;
         cout << GREEN << "====================================" << RED << "=============" << RESET <<  endl;
         cout <<  endl;
         cout <<  endl;
         cout <<  endl;
         cout <<  endl;
         cout << "Ve - electron neutrino" <<  endl;
         cout << "V\xe6 - muon neutrino" <<  endl;
         cout << "V\xe7 - tau neutrino" <<  endl;
         cout <<  endl;
         cout <<  endl;
         cout <<  endl;
         cout << PURPLE << "O " << RESET << "= Quarks" <<  endl;
         cout << GREEN << "O " << RESET << "= Leptons" <<  endl;
         cout << RED << "O " << RESET << "= Gauge (Vector) Bosons" <<  endl;;
         cout << YELLOW << "O " << RESET << "= Scalar Bosons" <<  endl;
    }





