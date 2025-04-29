#include "bmi.cpp"
#include <iostream>

//Checks if this method is functioning properly and converts everything correctly
void testWeightToKG()
{
    if (weight2kg(0,0,0) == 0 && weight2kg(1,0,0) > 6.3 && weight2kg(1,0,0) < 6.4){
        std::cout << "WeightToKg test passed." <<std::endl;
    }
    else
    {
        std::cout << "WeightToKg test failed." <<std::endl;
    }
}

//Checks if height is correctly being converted from feet to inches
void HeightToMetres()
{
    if (height2metres(0,0) == 0 && height2metres(5,9) > 1.74 && height2metres(5,9) < 1.74)
    {
        std::cout << "HeightToMetres test passed." <<std::endl;
    }
    else
    {
        std::cout << "HeightToMetres test failed." <<std::endl;
    }
}

//Checks BMI catergoisation based on calculations
void BMICategorisationTest()
{
    double height = 1.7;
    if (categorise(50, height)== 'B' && categorise(30, height)== 'A' && categorise(90, height)== 'D')
    {
        std::cout << "Categotise test passed." <<std::endl;
    }
    else{
        std::cout << "Categotise test failed." <<std::endl;
    }
}


int dev(int argc, char *argv[]){
    testWeightToKG();
    HeightToMetres();
    BMICategorisationTest();
    return 0;
}