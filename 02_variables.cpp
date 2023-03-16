#include <iostream>

int main(){

    // int x; declaration 
    // x = 5; assignment

    // can be done together
    int x = 5;
    int y = 6;

    // sum of previous intergers
    int sum = x + y;
    std::cout << sum << "\n\n";

    // interger (whole number)
    int age = 17;
    int year = 2023;
    int days = 7.5;

    std::cout << days << '\n';
    std::cout << year << '\n';
    std::cout << age << "\n\n";
    
    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << "\n\n";

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << currency << "\n\n";

    // Boolean (true or false)
    bool student = true;
    bool power = false;
    bool forsale = true;

    // String ( objects that represent a sequene of text)
    std::string name = "Ryan";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0; 
}
