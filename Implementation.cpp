#include <iostream>
#include <math.h>
#include "Main.h"

int ConvertCelciusToFahrenheit(int celcius){
    float calculation = round(celcius * 1.8 + 32);
    return (int)calculation;
}

int ConvertFahrenheitToCelcius(int fahrenheit){
    float calculation = round(fahrenheit / 1.8 - 32);
    return (int)calculation;
}

std::string GetMainMenuChoice(){
    std::string mainMenuChoice;
    std::cout << "Press 1 to convert to celcius.\nPress 2 to convert to fahrenheit.\nPress 3 to exit application." << std::endl;
    std::getline(std::cin, mainMenuChoice);

    return mainMenuChoice;
}

int GetTemperature(std::string conversionTemperature){
    
    std::string input;
    int temperatureToConvert;

    for(;;){
        std::cout << "Enter the temperature to convert " << "(To " << conversionTemperature << "):" << std::endl;
        std::getline(std::cin, input);

        try
        {
            temperatureToConvert = std::stoi(input);
        }
        catch(std::invalid_argument& e)
        {
            std::cout << "Incorrect number, enter a valid number" << std::endl;
            continue;
        }

        break;
    }

    return temperatureToConvert;
}

void ShowIncorrectMenuChoiceError(){
    std::cout << "Incorrect menu choice" << std::endl;
}

void ShowPressButtonToEnterMenu(){
    std::cout << "Press enter to go back to main menu" << std::endl;

    std::cin.get();
}

void ShowAnswer(int answer){
    std::cout << "The converted temperature is: " << answer << "." << std::endl;
}