#include <iostream>

int main(){

    /*
        The const keyword specifies that a variable's
        value is constant and it tells the computer to
        prevent anything from modifying it (read only).
    */

    const double PI = 3.14159; // const making it a constant
    // this would not work " PI = 420; "

    // calculating circumfrence of a circle
    double radius = 10;
    double circumference = 2* PI * radius;

    // display circumfrence with cm
    std::cout << circumference << " cm";

    // light speed in another example of a constant
    const double LIGHT_SPEED = 299792458;

    return 0; 
}
