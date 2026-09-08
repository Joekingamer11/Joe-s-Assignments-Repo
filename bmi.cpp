// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal

#include "PPPheaders.h"
int main(){
    double weight, height;
    const double kg_to_pound_ratio = 0.45359237;
    const double M_to_inch_ratio = 0.0254;

    std::cout<< "Enter weight in pounds: ";
    std::cin>> weight;
    
    std::cout<< "Enter height in inches: ";
    std::cin>> height;

    double kg = (kg_to_pound_ratio * weight); 
    double M = (M_to_inch_ratio * height);
    double BMI = kg /(M * M);

    std::cout<< std::fixed << std::setprecision (2);
    std::cout<<"BMI is "<< BMI;

    if (BMI < 18.5 )
    std::cout<< "\nUnderweight";   

    else if (BMI < 25.0)
    std::cout<< "\nNormal";

    else if (BMI < 30.0)
    std::cout<<"\nOverweight";

    else
    std::cout<<"\nObese";


    return 0;
}