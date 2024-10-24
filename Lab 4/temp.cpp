#include "temp.h"
#include <iostream>
#include <iomanip>

// Constructor
TEMP_GRAPH::TEMP_GRAPH(int temp) : temperature(temp)
{
    // Calculate the number of stars. Each star represents 3 degrees.
    numStars = abs(temperature) / 3;
}

// Destructor
TEMP_GRAPH::~TEMP_GRAPH() {}

// Display the temperature graph
void TEMP_GRAPH::display()
{
    // Display the temperature value, aligned properly with width formatting
    std::cout << std::setw(4) << temperature << " ";

    // Fixed column for the bar to be directly under 0 (set to 36 for alignment)
    const int barPosition = 18;

    if (temperature < 0)
    {
        //Precondition : The temperature is negative and the numStars have been calculated
        //Postcondition: The number of stars and the tempeture have been outputed onto the screen before the bar.

        // Print spaces to align the bar at the correct position
        std::cout << std::setw(barPosition - numStars);
        
        // For negative temperatures, print stars before the bar
        for (int i = 0; i < numStars; ++i)
        {
            
            std::cout  << "*";  // Print stars to the left of the bar
        }

        
        std::cout << "|";  // Bar Under 0
    }
    else
    {
       //Precondition : The temperature is positive and the numStars have been calculated
       //Postcondition: The number of stars and the tempeture have been outputed onto the screen after the bar.
        
        // For positive temperatures, print the bar first, aligned at 0
        std::cout << std::setw(barPosition) << "|";  // The bar always stays at the position of 0

        // Print stars for positive temperatures to the right of the bar
        for (int i = 0; i < numStars; ++i)
        {
            std::cout << "*";  // Print stars to the right of the bar
        }
    }

    // End the line after displaying stars
    std::cout << std::endl;
}

