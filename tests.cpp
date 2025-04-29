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




int dev(int argc, char *argv[]){
    testWeightToKG();    
    return 0;
}