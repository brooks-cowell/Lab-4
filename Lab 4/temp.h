#ifndef TEMP_H
#define TEMP_H

class TEMP_GRAPH
{
public:
    TEMP_GRAPH(int temp);  // Constructor to initialize the temperature
    ~TEMP_GRAPH();

    void display();  // Function to display the bar chart

private:
    int temperature;
    int numStars;  // Number of stars for the temperature
};

#endif // TEMP_H

