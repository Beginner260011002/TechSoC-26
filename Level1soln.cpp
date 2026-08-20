#include <iostream>
#include <cmath>

int main(){
//int x = 300;
//int y = 275;
//int z = 500;
//int a = 679;
//int b = 697;
//int w;
//int c;
//int main(){
    double number;
    std::cout << "Total shipment value : " ;
    std::cin >> number ;
    std::cout << "Average shipment value : ";
    std::cin >> number ;

    int weight;
    std::cout << "Enter shipment weight : ";
    std::cin >> weight;
     if(weight <= 200){
        std::cout << "Light Weight";
     }
        else if(weight > 200){
            std::cout << "Exceeds maximum weight and is heavy";
        }
    
    //int number;
    //std::cout << "Enter total shipment weight : "
    //std::cin >> totalweight
    if(number >= 1000){
        std::cout << " ,Cannot be shipped";
    }
    else if(number < 1000){
        std::cout << " ,Can be shipped";
    }
    
        return 0;
     }

    
    
