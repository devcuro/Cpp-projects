#include <iostream>
#include <iomanip> // For std::fixed & std::setprecision(2)
#include <cmath> // For std::round

int main() {
    std::cout << "Fish Market" << std::endl;
    std::cout << "There is a 42% sale on fish" << std::endl;

    double fish = 2.99; // price of fish per pound
    std::cout << "Fish regular price is: $" << std::fixed << std::setprecision(2) << fish << " a pound" << std::endl;

    double sale = std::round(0.42 * fish * 100) / 100; // Round to 2 decimal places
    std::cout << "Fish sale price is: $" << std::fixed << std::setprecision(2) << sale << " a pound" << std::endl;

    double noFish;
    std::cout << "Number of fish (in lbs) to be bought: ";
    std::cin >> noFish; // Accept User Input

    double total = std::round(sale * noFish * 100) / 100; // Ensure final total is also rounded
    std::cout << "Your total is: $" << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
