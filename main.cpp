#include <iostream>
//dont make fun of my code, it makes sense for me i swear
//this is probably my best project, since i started my C++ journey on 12/10/2025 and this program was created on 12/16/2025.
int main() {
    int userInput;

    std::cout << "----- TERMINAL ------\n";
    std::cout << "Choose an Option\n";

    // options
    std::cout << "1. Area Calculator\n";
    std::cout << "2. Percentage Calculator\n";
    std::cout << "user@user >> ";
    std::cin >> userInput;

    // AREA PROGRAM
    if (userInput == 1) {
        int areaOption;
        double side;

        std::cout << "Choose your Option\n";
        std::cout << "1. Get the Square Area\n";
        std::cout << "2. Get the Rectangle Area\n";
        std::cout << "user@user >> ";
        std::cin >> areaOption;

        if (areaOption == 1) {
            std::cout << "enter the size of the side of the square\n";
            std::cin >> side;

            double result = side * side;
            std::cout << "the area of your square is " << result << '\n';
        }
        else if (areaOption == 2) {
            double base;
            double height;

            std::cout << "enter the base of your rectangle\n";
            std::cin >> base;

            if (base == 67) {
                std::cout << "SIX SEVENNN\n";
            }
            if (base == 41) {
                std::cout << "did unc snap?\n";
            }

            std::cout << "enter the height of your rectangle\n";
            std::cin >> height;

            double result = base * height;
            std::cout << "the area of your rectangle is " << result << '\n';
        }
    }
    // AREA PROGRAM END

    if (userInput == 2) {
        double percentageVal;
        double value;

        std::cout << "enter the value\n";
        std::cin >> value;

        std::cout << "enter the percentage\n";
        std::cin >> percentageVal;

        double result = value * percentageVal / 100;
        std::cout << "the result is " << result << "%\n";
    }
    int leave;
    std::cout << "type anything to leave\n";
    std::cin >> leave; 
    //made by arthur btw
}
