#ifndef __The_Circle_Class__CirclewithConstantMemberFunctions__
#define __The_Circle_Class__CirclewithConstantMemberFunctions__

#include <stdio.h>
using namespace std;

class Circle{
public:
    Circle();
    Circle (double);
    double getArea() const;
    double getRadius() const;
    void setRadius (double);
    static int getNumberOfObjects();
    bool operator<(Circle& newCircle);
    
private:
    double radius;
    static int numberOfObjects;
};


#endif /* defined(__The_Circle_Class__CirclewithConstantMemberFunctions__) */
