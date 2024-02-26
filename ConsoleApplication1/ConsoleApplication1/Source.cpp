#include "header.h"


void displayMainMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|             Cosmos-Y              | " << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "|[1]| Planets                       |" << std::endl;
    std::cout << "|[2]| Galaxies                      |" << std::endl;
    std::cout << "|[3]| Other Space Bodies            |" << std::endl;
    std::cout << "|[4]| Particles                     |" << std::endl;
    std::cout << "|[5]| Exit                          |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
}

void displaySolarPlanetsMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|              Planets              |" << std::endl;
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
    std::cout << "|        Other Space Bodies         |" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "| [1] | Black Hole                  |" << std::endl;
    std::cout << "| [2] | White Dwarf                 |" << std::endl;
    std::cout << "| [3] | Neutron Star                |" << std::endl;
    std::cout << "| [4] | Asteroid                    |" << std::endl;
    std::cout << "| [5] | The Universe                |" << std::endl;
    std::cout << "| [6] | Back to Main Menu           |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
}

void displayGalaxiesMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|             Galaxies               |" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "| [1] | Milky Way                    |" << std::endl;
    std::cout << "| [2] | Andromeda                    |" << std::endl;
    std::cout << "| [3] | Triangulum                   |" << std::endl;
    std::cout << "| [4] | Tadpole Galaxy               |" << std::endl;
    std::cout << "| [5] | Hoag's Object                |" << std::endl;
    std::cout << "| [6] | Back to Main Menu            |" << std::endl;
    std::cout << "|____________________________________|" << std::endl;
}

void displayParticleMenu() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|             Particles             |" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "| [1] | Standard Model              |" << std::endl;
    std::cout << "| [2] | Higgs boson                 |" << std::endl;
    std::cout << "| [3] | Back to Main Menu           |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
}

    void waitForEnter() {
        std::cout << "Press Enter to continue...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    }


void displayMercuryInfo() {
    system("CLS");
    std::cout << ORANGE << "======================================" << RESET << std::endl;
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
    std::cout << "|           |        the sun         |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
}

void displayVenusInfo() {
    system("CLS");
    std::cout << VENUS << "=====================================" << RESET << std::endl;
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
    std::cout << "|           |        the sun         |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
}

void displayEarthInfo() {
    system("CLS");
    std::cout << GREEN << "=======================================" << RESET << std::endl;
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
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|  Distance |It is located at a      |" << std::endl;
    std::cout << "| from  sun |distance of 778m km away|" << std::endl;
    std::cout << "|           |from the Sun.           |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
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
    std::cout << "|  Place in |                       |" << std::endl;
    std::cout << "|   Solar   | Uranus is the Seventh |" << std::endl;
    std::cout << "|   System  |        planet.        |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |About 83% of Uranus is |" << std::endl;
    std::cout << "|           | composed of hydrogen, |" << std::endl;
    std::cout << "|Composition| helium, and methane.  |" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |It also contains traces|" << std::endl;
    std::cout << "|           | of water and ammonia  |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |The average temperature|" << std::endl;
    std::cout << "|  Average  |of Uranus is about -224|" << std::endl;
    std::cout << "|temperature|degrees Celsius.It is  |" << std::endl;
    std::cout << "|    and    |located at a distance  |" << std::endl;
    std::cout << "|  Distance |of 2.871 billion km    |" << std::endl;
    std::cout << "| from Sun  |      away from        |" << std::endl;
    std::cout << "|           |       the sun         |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayNeptuneInfo() {
    system("CLS");
    std::cout << BLUE << "=====================================" << RESET << std::endl;
    std::cout << BLUE << "|              Neptune              |" << RESET << std::endl;
    std::cout << BLUE << "=====================================" << RESET << std::endl;
    std::cout << "|           |                        |" << std::endl;
    std::cout << "|  Place in |   Neptune is the 8th   |" << std::endl;
    std::cout << "|   Solar   |    planet being the    |" << std::endl;
    std::cout << "|   System  | furthest from the sun. |" << std::endl;
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
    std::cout << "|    and    | is about -214 degrees. |" << std::endl;
    std::cout << "|  Distance |   It is at a distance  |" << std::endl;
    std::cout << "| from sun  | of 4.4 billion km from |" << std::endl;
    std::cout << "|           |        the sun         |" << std::endl;
    std::cout << "|___________|________________________|" << std::endl;
}

void displayBlackHoleInfo() {
    system("CLS");
    std::cout << DARK_BLUE << "=====================================" << RESET << std::endl;
    std::cout << DARK_BLUE << "|            Black Holes            |" << RESET << std::endl;
    std::cout << DARK_BLUE << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  Black holes are fascinating      |" << std::endl;
    std::cout << "|  objects with properties that     |" << std::endl;
    std::cout << "|  challenge our understanding of   |" << std::endl;
    std::cout << "|  physics. They have captivated    |" << std::endl;
    std::cout << "|  scientists and the public alike, |" << std::endl;
    std::cout << "|  and their study continues to     |" << std::endl;
    std::cout << "|  provide insights into the nature |" << std::endl;
    std::cout << "|  of space, time, and the universe.|" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |Black holes are formed |" << std::endl;
    std::cout << "|           |when massive stars     |" << std::endl;
    std::cout << "|           |exhaust their fuel and |" << std::endl;
    std::cout << "|           |collapse under their   |" << std::endl;
    std::cout << "| Creation  |own gravity. This      |" << std::endl;
    std::cout << "|           |continues until all the|" << std::endl;
    std::cout << "|           |mass is concentrated   |" << std::endl;
    std::cout << "|           |into a single point of |" << std::endl;
    std::cout << "|           |infinite density, known|" << std::endl;
    std::cout << "|           |as a singularity.      |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |Black holes are scaled |" << std::endl;
    std::cout << "|           |based on their mass.   |" << std::endl;
    std::cout << "|           |Smaller black holes are|" << std::endl;
    std::cout << "|           |classified as stellar  |" << std::endl;
    std::cout << "|           |black holes with masses|" << std::endl;
    std::cout << "|   Size    |up to a few times the  |" << std::endl;
    std::cout << "|  Scaling  | Sun's. Supermassive   |" << std::endl;
    std::cout << "|  System   |black holes, found at  |" << std::endl;
    std::cout << "|           |the centers of         |" << std::endl;
    std::cout << "|           |galaxies, can have     |" << std::endl;
    std::cout << "|           |masses millions or     |" << std::endl;
    std::cout << "|           |billions of times that |" << std::endl;
    std::cout << "|           |of the Sun.            |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayWhiteDwarfInfo() {
    system("CLS");
    std::cout << "=====================================" << std::endl;
    std::cout << "|            White Dwarf            |" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  White dwarfs are the remnants    |" << std::endl;
    std::cout << "|  of low to medium mass stars that |" << std::endl;
    std::cout << "|  have exhausted their nuclear fuel|" << std::endl;
    std::cout << "|  and have collapsed under gravity |" << std::endl;
    std::cout << "|  into extremely dense objects.    |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|  Creation |White dwarfs are formed|" << std::endl;
    std::cout << "|           |during the final stages|" << std::endl;
    std::cout << "|           |of stellar evolution,  |" << std::endl;
    std::cout << "|           |when a star no longer  |" << std::endl;
    std::cout << "|           |has enough nuclear fuel|" << std::endl;
    std::cout << "|           |to maintain its fusion |" << std::endl;
    std::cout << "|           |reactions and collapses|" << std::endl;
    std::cout << "|           |under its own gravity. |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|    Age    |The age of white dwarfs|" << std::endl;
    std::cout << "|           |varies depending on the|" << std::endl;
    std::cout << "|           |mass of the progenitor |" << std::endl;
    std::cout << "|           |star. They can exist   |" << std::endl;
    std::cout << "|           |for billions of years, |" << std::endl;
    std::cout << "|           |gradually cooling over |" << std::endl;
    std::cout << "|           |time.                  |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|  Surface  |White dwarfs have      |" << std::endl;
    std::cout << "|   Temp.   |extremely high         |" << std::endl;
    std::cout << "|           |surface temperatures,  |" << std::endl;
    std::cout << "|           |ranging from tens of   |" << std::endl;
    std::cout << "|           |thousands to hundreds  |" << std::endl;
    std::cout << "|           |of thousands of        |" << std::endl;
    std::cout << "|           |degrees Celsius.       |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayNeutronStarInfo() {
    system("CLS");
    std::cout << LIGHT_BLUE << "=====================================" << RESET << std::endl;
    std::cout << LIGHT_BLUE << "|           Neutron Star            |" << RESET << std::endl;
    std::cout << LIGHT_BLUE << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  Neutron stars are incredibly     |" << std::endl;
    std::cout << "|  dense stellar remnants composed  |" << std::endl;
    std::cout << "|  almost entirely of neutrons,     |" << std::endl;
    std::cout << "|  hence their name. They form      |" << std::endl;
    std::cout << "|  when massive stars undergo       |" << std::endl;
    std::cout << "|  supernova explosions, leaving    |" << std::endl;
    std::cout << "|  behind a core of compressed      |" << std::endl;
    std::cout << "|  neutrons.                        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "| Creation  |Neutron stars are made |" << std::endl;
    std::cout << "|           |during supernova events|" << std::endl;
    std::cout << "|           |when massive stars     |" << std::endl;
    std::cout << "|           |exhaust their nuclear  |" << std::endl;
    std::cout << "|           |fuel and collapse under|" << std::endl;
    std::cout << "|           |gravity. The core      |" << std::endl;
    std::cout << "|           |becomes so dense that  |" << std::endl;
    std::cout << "|           |it consists primarily  |" << std::endl;
    std::cout << "|           |of neutrons.           |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|    Age    |Neutron stars can be   |" << std::endl;
    std::cout << "|           |extremely old, with    |" << std::endl;
    std::cout << "|           |some existing for      |" << std::endl;
    std::cout << "|           |billions of years. They|" << std::endl;
    std::cout << "|           |cool over time, but    |" << std::endl;
    std::cout << "|           |their age can be       |" << std::endl;
    std::cout << "|           |difficult to determine |" << std::endl;
    std::cout << "|           |precisely.             |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|  Surface  |Neutron stars have     |" << std::endl;
    std::cout << "|   Temp.   |extremely high         |" << std::endl;
    std::cout << "|           |surface temperatures,  |" << std::endl;
    std::cout << "|           |ranging from hundreds  |" << std::endl;
    std::cout << "|           |of thousands to        |" << std::endl;
    std::cout << "|           |millons of degrees     |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayAsteroidInfo() {
    system("CLS");
    std::cout << GRAY << "=====================================" << RESET << std::endl;
    std::cout << GRAY << "|             Asteroids             |" << RESET << std::endl;
    std::cout << GRAY << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  Asteroids are small rocky        |" << std::endl;
    std::cout << "|  bodies that orbit the Sun, mostly|" << std::endl;
    std::cout << "|  located in the asteroid belt     |" << std::endl;
    std::cout << "|  between Mars and Jupiter. They   |" << std::endl;
    std::cout << "|  are remnants from the early      |" << std::endl;
    std::cout << "|  formation of the solar system.   |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|   Size    |Asteroids vary greatly |" << std::endl;
    std::cout << "|           |in size, from tiny     |" << std::endl;
    std::cout << "|           |pebbles to large bodies|" << std::endl;
    std::cout << "|           |measuring hundreds of  |" << std::endl;
    std::cout << "|           |kilometers across.     |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "| Difference|Asteroids are rocky    |" << std::endl;
    std::cout << "|   from    |bodies similar to      |" << std::endl;
    std::cout << "|  Meteors  |planets but smaller.   |" << std::endl;
    std::cout << "|           |When they enter        |" << std::endl;
    std::cout << "|           |Earth's atmosphere they|" << std::endl;
    std::cout << "|           |are called meteors and |" << std::endl;
    std::cout << "|           |if they reach the      |" << std::endl;
    std::cout << "|           |ground, they are termed|" << std::endl;
    std::cout << "|           |meteorites.            |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|  Examples |Some well-known        |" << std::endl;
    std::cout << "|           |asteroids include      |" << std::endl;
    std::cout << "|           |Ceres, Vesta, Eros and |" << std::endl;
    std::cout << "|           |Mathilde.              |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayUniverseInfo() {
    system("CLS");
    std::cout << PURPLE << "=====================================" << RESET << std::endl;
    std::cout << PURPLE << "|" << BLUE << "           The Universe          " << PURPLE << " | " << RESET << std::endl;
    std::cout << PURPLE << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  The Universe is the entirety of  |" << std::endl;
    std::cout << "|  space, time, matter, energy, and |" << std::endl;
    std::cout << "|  the physical laws and constants  |" << std::endl;
    std::cout << "|  that describe them. It contains  |" << std::endl;
    std::cout << "|  all galaxies, stars, planets,    |" << std::endl;
    std::cout << "|  and other cosmic entities.       |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|    Age    |The age of the Universe|" << std::endl;
    std::cout << "|           |is approximately 13.8  |" << std::endl;
    std::cout << "|           |billion years, based on|" << std::endl;
    std::cout << "|           |observations of the    |" << std::endl;
    std::cout << "|           |cosmic microwave       |" << std::endl;
    std::cout << "|           |background radiation.  |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "| Creation  |The Universe is thought|" << std::endl;
    std::cout << "|           |to have originated from|" << std::endl;
    std::cout << "|           |a cosmic event known as|" << std::endl;
    std::cout << "|           |the Big Bang, where all|" << std::endl;
    std::cout << "|           |matter and energy were |" << std::endl;
    std::cout << "|           |initially compressed   |" << std::endl;
    std::cout << "|           |into a singular point  |" << std::endl;
    std::cout << "|           |of infinite density.   |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|   Size    |The size of the        |" << std::endl;
    std::cout << "|           |Universe is enormously |" << std::endl;
    std::cout << "|           |vast currently thought |" << std::endl;
    std::cout << "|           |to be about 93 billion |" << std::endl;
    std::cout << "|           |light years in         |" << std::endl;
    std::cout << "|           |diameter.              |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "| Expansion |The Universe is        |" << std::endl;
    std::cout << "|           |expanding at an        |" << std::endl;
    std::cout << "|           |accelerating rate, as  |" << std::endl;
    std::cout << "|           |observed through the   |" << std::endl;
    std::cout << "|           |redshift of distant    |" << std::endl;
    std::cout << "|           |galaxies. This shifting|" << std::endl;
    std::cout << "|           |is driven by dark      |" << std::endl;
    std::cout << "|           |energy, an unknown     |" << std::endl;
    std::cout << "|           |force that makes up    |" << std::endl;
    std::cout << "|           |about 68% of the total |" << std::endl;
    std::cout << "|           |energy density of the  |" << std::endl;
    std::cout << "|           |Universe.              |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayMilkyWayInfo() {
    system("CLS");
    std::cout << PURPLE << "=====================================" << RESET << std::endl;
    std::cout << PURPLE << "|            Milky Way              |" << RESET << std::endl;
    std::cout << PURPLE << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  The Milky Way is a barred spiral |" << std::endl;
    std::cout << "|  galaxy that contains around      |" << std::endl;
    std::cout << "|  100 billion stars, including our |" << std::endl;
    std::cout << "|  Sun. The Milky Way is part of    |" << std::endl;
    std::cout << "|  the Virgo Supercluster of        |" << std::endl;
    std::cout << "|  galaxies.                        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |The Milky way is a huge|" << std::endl;
    std::cout << "|    Size   |Galaxy, which is around|" << std::endl;
    std::cout << "|           |  100 thousand light   |" << std::endl;
    std::cout << "|           |    years in diameter  |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |The Milky Way is       |" << std::endl;
    std::cout << "|           |believed to be         |" << std::endl;
    std::cout << "|    Age    |approximately          |" << std::endl;
    std::cout << "|           |13.6 billion years old,|" << std::endl;
    std::cout << "|           |nearly as old as the   |" << std::endl;
    std::cout << "|           |universe itself.       |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayAndromedaInfo() {
    system("CLS");
    std::cout << BEIGE << "=====================================" << RESET << std::endl;
    std::cout << BEIGE << "|          Andromeda Galaxy         |" << RESET << std::endl;
    std::cout << BEIGE << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  The Andromeda Galaxy, also known |" << std::endl;
    std::cout << "| as M31, is a barred spiral galaxy |" << std::endl;
    std::cout << "| located approximately 2.5 million |" << std::endl;
    std::cout << "|   light-years from Earth. It is   |" << std::endl;
    std::cout << "|    nearest spiral galaxy to the   |" << std::endl;
    std::cout << "|    Milky Way and is approaching   |" << std::endl;
    std::cout << "|      towards a collision with     |" << std::endl;
    std::cout << "|        our galaxy in about        |" << std::endl;
    std::cout << "|         4.5 billion years.        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           | The Andromeda Galaxy  |" << std::endl;
    std::cout << "|           |  is a massive spiral  |" << std::endl;
    std::cout << "|    Size   |galaxy, with a diameter|" << std::endl;
    std::cout << "|           |   of approximately    |" << std::endl;
    std::cout << "|           |       220,000ly.      |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           | The Andromeda Galaxy  |" << std::endl;
    std::cout << "|           | has an estimated age  |" << std::endl;
    std::cout << "|           | of approximately 10   |" << std::endl;
    std::cout << "|    Age    | billion years, making |" << std::endl;
    std::cout << "|           | it one of the oldest  |" << std::endl;
    std::cout << "|           | galaxies in the       |" << std::endl;
    std::cout << "|           | Universe.             |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayTriangulumInfo() {
    system("CLS");
    std::cout << CYAN2 << "=====================================" << RESET << std::endl;
    std::cout << CYAN2 << "|         Triangulum Galaxy         |" << RESET << std::endl;
    std::cout << CYAN2 << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "| The Triangulum Galaxy, also known |" << std::endl;
    std::cout << "| as Messier 33 or M33, is a spiral |" << std::endl;
    std::cout << "|  galaxy located approximately 3   |" << std::endl;
    std::cout << "|  million light-years from Earth.  |" << std::endl;
    std::cout << "| It is a member of the Local Group |" << std::endl;
    std::cout << "| of galaxies, which is part of the |" << std::endl;
    std::cout << "|         Virgo Supercluster.       |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           | The Triangulum Galaxy |" << std::endl;
    std::cout << "|    Size   |is considerably smaller|" << std::endl;
    std::cout << "|           |than the Milky Way and |" << std::endl;
    std::cout << "|           |Andromeda, with a      |" << std::endl;
    std::cout << "|           |diameter of about      |" << std::endl;
    std::cout << "|           |60,000ly.              |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           | The Triangulum Galaxy |" << std::endl;
    std::cout << "|    Age    |is estimated to be     |" << std::endl;
    std::cout << "|           |around 10-12 billion   |" << std::endl;
    std::cout << "|           |years old, similar to  |" << std::endl;
    std::cout << "|           |the Milky Way and      |" << std::endl;
    std::cout << "|           |Andromeda galaxies.    |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayTadpoleInfo() {
    system("CLS");
    std::cout << LIGHT_BLUE << "=====================================" << RESET << std::endl;
    std::cout << LIGHT_BLUE << "|           Tadpole Galaxy          |" << RESET << std::endl;
    std::cout << LIGHT_BLUE << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|  The Tadpole Galaxy, also known   |" << std::endl;
    std::cout << "|  as UGC 10214 or Arp 188, is an   |" << std::endl;
    std::cout << "|    interacting galaxy located     |" << std::endl;
    std::cout << "|    approximately 420 million      |" << std::endl;
    std::cout << "|   light-years away in the Draco   |" << std::endl;
    std::cout << "|  constellation. It was discovered |" << std::endl;
    std::cout << "|  by the Hubble Space Telescope on |" << std::endl;
    std::cout << "|          March 13, 2002.          |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           | The Tadpole Galaxy is |" << std::endl;
    std::cout << "|    Size   |relatively small, with |" << std::endl;
    std::cout << "|           |a diameter of about    |" << std::endl;
    std::cout << "|           |over 120,000ly away    |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           | The Tadpole Galaxy is |" << std::endl;
    std::cout << "|    Age    |believed to be quite   |" << std::endl;
    std::cout << "|           |young in cosmic terms, |" << std::endl;
    std::cout << "|           |with an estimated age  |" << std::endl;
    std::cout << "|           |of around a few hundred|" << std::endl;
    std::cout << "|           |million years.         |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           | The Tadpole Galaxy    |" << std::endl;
    std::cout << "|   Shape   |has a distinctive      |" << std::endl;
    std::cout << "|           |tadpole-like shape,    |" << std::endl;
    std::cout << "|           |characterized by a     |" << std::endl;
    std::cout << "|           |bright head and a long |" << std::endl;
    std::cout << "|           |tail of stars and gas. |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayHoagInfo() {
    system("CLS");
    std::cout << LIGHT_YELLOW << "=====================================" << RESET << std::endl;
    std::cout << LIGHT_YELLOW << "|           Hoag's Object           |" << RESET << std::endl;
    std::cout << LIGHT_YELLOW << "=====================================" << RESET << std::endl;
    std::cout << "|                                   |" << std::endl;
    std::cout << "|    Hoag's Object is a rare ring   |" << std::endl;
    std::cout << "| ring galaxy located approximately |" << std::endl;
    std::cout << "|  600 million light-years away in  |" << std::endl;
    std::cout << "|  the constellation Serpens. It    |" << std::endl;
    std::cout << "|   was discovered by astronomer    |" << std::endl;
    std::cout << "|         Art Hoag in 1950.         |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |Hoag's Object is       |" << std::endl;
    std::cout << "|    Size   |quite large, with a    |" << std::endl;
    std::cout << "|           |diameter of about      |" << std::endl;
    std::cout << "|           |100,000 light-years.   |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |Hoag's Object is       |" << std::endl;
    std::cout << "|    Age    |estimated to be quite  |" << std::endl;
    std::cout << "|           |old, with an age of    |" << std::endl;
    std::cout << "|           |about 13 billion years.|" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
    std::cout << "|           |                       |" << std::endl;
    std::cout << "|           |Hoag's Object is       |" << std::endl;
    std::cout << "|   Shape   |characterized by a     |" << std::endl;
    std::cout << "|           |bright core surrounded |" << std::endl;
    std::cout << "|           |by a nearly perfect    |" << std::endl;
    std::cout << "|           |ring of stars.         |" << std::endl;
    std::cout << "|___________|_______________________|" << std::endl;
}

void displayHiggsBosonInfo() {
    system("CLS");
    std::cout << YELLOW << "===============================================================================" << RESET<< std::endl;
    std::cout << YELLOW << "|" << LIGHT_YELLOW << "                                Higgs Boson                                 " << YELLOW << " | "  << RESET << std::endl;
    std::cout << YELLOW << "===============================================================================" << RESET << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "|  General Info:                                                              |" << std::endl;
    std::cout << "|  The Higgs boson is an elementary particle in the Standard Model of particle|" << std::endl;
    std::cout << "|  physics. It is responsible for the mechanism that gives mass to other      |" << std::endl;
    std::cout << "|  particles. Without the Higgs boson, particles would move at the speed of   |" << std::endl;
    std::cout << "|  light, making the universe very different from what we observe. The        |" << std::endl;
    std::cout << "|  discovery of the Higgs boson confirmed a key prediction of the Standard    |" << std::endl;
    std::cout << "|  Model.                                                                     |" << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "===============================================================================" << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "|  History:                                                                   |" << std::endl;
    std::cout << "|  The existence of the Higgs boson was first theorized in the 1960s by       |" << std::endl;
    std::cout << "|  Peter Higgs and others. Its existence was confirmed by experiments at the  |" << std::endl;
    std::cout << "|  Large Hadron Collider (LHC) in 2012. The discovery of the Higgs boson was  |" << std::endl;
    std::cout << "|  a major milestone in particle physics, earning François Englert and Peter  |" << std::endl;
    std::cout << "|  Higgs the Nobel Prize in Physics in 2013.                                  |" << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "===============================================================================" << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "|  Use:                                                                       |" << std::endl;
    std::cout << "|  Understanding the Higgs mechanism is crucial for understanding the origins |" << std::endl;
    std::cout << "|  of mass in the universe. The discovery of the Higgs boson confirmed the    |" << std::endl;
    std::cout << "|  validity of the Standard Model and opened up new avenues for research in   |" << std::endl;
    std::cout << "|  particle physics. The Higgs boson is also important in cosmology and the   |" << std::endl;
    std::cout << "|  study of the early universe. It provides insights into the fundamental     |" << std::endl;
    std::cout << "|  forces and particles that govern our universe.                             |" << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "===============================================================================" << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "|  Interactions:                                                              |" << std::endl;
    std::cout << "|  The Higgs boson interacts with other particles through the Higgs field,    |" << std::endl;
    std::cout << "|  which permeates the universe. Its interactions are responsible for giving  |" << std::endl;
    std::cout << "|  mass to fundamental particles such as electrons and quarks. Understanding  |" << std::endl;
    std::cout << "|  these interactions is essential for understanding the behavior of matter at|" << std::endl;
    std::cout << "|  both microscopic and cosmic scales.                                        |" << std::endl;
    std::cout << "|                                                                             |" << std::endl;
    std::cout << "===============================================================================" << std::endl;
}

void displayStandardModelTable() {
        system("CLS");
        std::cout << PURPLE << "====================================" << RED << "============" << YELLOW << "===============" << RESET << std::endl;
        std::cout << PURPLE << "|           |           |           " << RED << "|           " << YELLOW << "|             |" << RESET << std::endl;
        std::cout << PURPLE << "|     u     |     c     |     t     " << RED << "|    g      " << YELLOW << "|      H      | " << RESET << std::endl;
        std::cout << PURPLE << "|    up     |   charm   |    top    " << RED << "|  gluon    " << YELLOW << "| higgs boson | " << RESET << std::endl;
        std::cout << PURPLE << "|-----------|-----------|-----------" << RED << "|-----------" << YELLOW << "|-------------| " << RESET << std::endl;
        std::cout << PURPLE << "|           |           |           " << RED << "|           |" << RESET << std::endl;
        std::cout << PURPLE << "|     d     |     s     |     b     " << RED << "|     Y     |" << RESET << std::endl;
        std::cout << PURPLE << "|    Down   |           |   bottom  " << RED << "|   photon  |" << RESET << std::endl;
        std::cout << GREEN << "|-----------|-----------|-----------" << RED << "|-----------|" << RESET << std::endl;
        std::cout << GREEN << "|           |           |           " << RED << "|           |" << RESET << std::endl;
        std::cout << GREEN << "|     e     |     \xe6     |     \xe7     " << RED << "|     Z     |" << RESET <<  std::endl;
        std::cout << GREEN << "|  electron |    muon   |    tau    " << RED << "|  Z boson  |" << RESET << std::endl;
        std::cout << GREEN << "|-----------|-----------|-----------" << RED << "|-----------|" << RESET << std::endl;
        std::cout << GREEN << "|           |           |           " << RED << "|           |" << RESET << std::endl;
        std::cout << GREEN << "|    Ve     |    V\xe6     |     V\xe7    " << RED << "|     W     |" << RESET << std::endl;
        std::cout << GREEN << "|           |           |           " << RED << "|  W boson  |" << RESET <<  std::endl;
        std::cout << GREEN << "====================================" << RED << "=============" << RESET << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Ve - electron neutrino" << std::endl;
        std::cout << "V\xe6 - muon neutrino" << std::endl;
        std::cout << "V\xe7 - tau neutrino" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << PURPLE << "O " << RESET << "= Quarks" << std::endl;
        std::cout << GREEN << "O " << RESET << "= Leptons" << std::endl;
        std::cout << RED << "O " << RESET << "= Gauge (Vector) Bosons" << std::endl;;
        std::cout << YELLOW << "O " << RESET << "= Scalar Bosons" << std::endl;
    }





