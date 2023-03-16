#include <iostream>


// setting up a namespaces
namespace first{  
    int x = 0;   
} 
namespace second{  
    int x = 2;   
} 

int main(){

    /*
        Namespace = provides a solution for preventing name
        conflicts in large projects. Each entity needs a unique name.
        A namespace allows for identically named entities as
        long as the namespaces are different.
    */

    int x = 1;
    // int x = 0;    this runs into an error "redeclaration"

    // calls local value of x
    std::cout << x << '\n';

    // calls value of x in first namespace by prefixing x with "first::"
    std::cout << first::x << '\n';

    // calls value of x in second namespace
    std::cout << second::x << "\n\n";



    // now the default version of x is in the first namespace
    using namespace first;
    std::cout << x << '\n';

    // we still need to use a prefix to call second namespace
    std::cout << second::x;
    
    
    return 0; 
}
