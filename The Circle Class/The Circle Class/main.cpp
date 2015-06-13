////////////////////////
//Name: Kathleen Levi
//
//Project: EX06_04 (14.3)
//
//Date: 12 June, 2015
////////////////////////

#include <iostream>
#include "CirclewithConstantMemberFunctions.h"
using namespace std;

int main(){
    Circle circle1;
    Circle circle2(5.0);
    
    if (circle2 < circle1){
        Circle temp = circle1;
        circle1 = circle2;
        circle2 = temp;
    }
    
    cout << "The smaller radius is " << circle1.getRadius() << " the larger radius is " << circle2.getRadius() << endl;
}