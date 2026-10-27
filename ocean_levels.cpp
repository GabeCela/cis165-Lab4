#include <iostream>

int main() {
    // Annual rise in millimeters 
    const double ANNUAL_RISE_MM = 1.5;

    // Time horizons stored in separate named constants
    const int TIME_FRAME_5_YEARS = 5;
    const int TIME_FRAME_7_YEARS = 7;
    const int TIME_FRAME_10_YEARS = 10;

    // Total rise for each time horizon stored in result variables
    double rise_after_5_years = ANNUAL_RISE_MM * TIME_FRAME_5_YEARS;
    double rise_after_7_years = ANNUAL_RISE_MM * TIME_FRAME_7_YEARS;
    double rise_after_10_years = ANNUAL_RISE_MM * TIME_FRAME_10_YEARS;

    // Display all three results with clear labels and units
    std::cout << "Ocean level after 5 years: " << rise_after_5_years << " mm" << std::endl;
    std::cout << "Ocean level after 7 years: " << rise_after_7_years << " mm" << std::endl;
    std::cout << "Ocean level after 10 years: " << rise_after_10_years << " mm" << std::endl;

    return 0;
}
