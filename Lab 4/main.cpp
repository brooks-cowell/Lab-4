/*
Brooks D Cowell
Computer Science Fall 2024
Due: October 29 2024
Lab 4, Lab 4 Temperature Output
This lab takes an input file with multiple temperatures and outputs a bar graph.
*/

#include <iostream>
#include <fstream>
#include <iomanip>  // For std::setw
#include "temp.h"

int main()
{
    // Print the scale for the graph (formatted labels)
    std::cout << "   ";
    for (int i = -30; i <= 120; i += 30)
    {
        std::cout << std::setw(10) << i;  // Properly spaced graph labels
    }
    std::cout << "\n";  // Formatting for the graph

    // Open the temperature file
    std::ifstream inFile("inTemp.dat");
    if (!inFile)
    {
        std::cerr << "Failed to open file" << std::endl;
        return 1;
    }

    int temp;
    inFile >> temp;  // Priming read

    // Loop to read temperatures and display the graph
    // Preconditions: inFile is open and contains integers
    //Postconditions: All valid tempetures from the file have been proccessed and displayed 
    while (inFile)
    {
        if (temp >= -30 && temp <= 120)
        {
            // Create a TEMP_GRAPH object and display the temperature graph
            TEMP_GRAPH tempGraph(temp);
            tempGraph.display();
        }
        inFile >> temp;  // Continue reading temperatures
    }

    inFile.close();  // Close the file
    return 0;
}
