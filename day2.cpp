#include <iostream>
#include <cmath>
#include <string>

int main() {
    // Define the dimensions of the graph
    const int width = 40;       // Max amplitude (distance from the center axis)
    const int cycles = 2;       // Number of full sine waves to display
    const int steps = 40;       // Total vertical rows to print
    
    const double pi = 3.14159265358979323846;

    // Loop through each row representing the progress along the X-axis
    for (int i = 0; i <= steps; ++i) {
        // Calculate the angle in radians (mapping rows to cycles * 2 * PI)
        double radians = (double)i / steps * (cycles * 2.0 * pi);
        
        // Calculate sine value; returns a value between -1.0 and 1.0
        double sin_value = std::sin(radians);
        
        // Map the [-1, 1] range to console character columns [0, 2 * width]
        int position = static_cast<int>(std::round(sin_value * width)) + width;

        // Construct the row string with the center axis '|' and the plot point '*'
        std::string row(2 * width + 1, ' ');
        row[width] = '|';       // Draw the center Y-axis baseline
        row[position] = '*';    // Plot the calculated sine point
        
        std::cout << row << "\n";
    }

    return 0;
}
