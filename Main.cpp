#include "Implementation.cpp"

int main(){
    std::string menuOption;

    int temperatureToConvert;
    int returnedTemperature;

    for (;;){
        menuOption = GetMainMenuChoice();

        if(menuOption == "1"){
            temperatureToConvert = GetTemperature("Fahrenheit");
            returnedTemperature = ConvertCelciusToFahrenheit(temperatureToConvert);
            ShowAnswer(returnedTemperature);
            ShowPressButtonToEnterMenu();
        }
        else if(menuOption == "2"){
            temperatureToConvert = GetTemperature("Celcius");
            returnedTemperature = ConvertFahrenheitToCelcius(temperatureToConvert);
            ShowAnswer(returnedTemperature);
            ShowPressButtonToEnterMenu();
        }
        else if(menuOption == "3"){
            break;
        }
        else {
            ShowIncorrectMenuChoiceError();
        }
    }
}