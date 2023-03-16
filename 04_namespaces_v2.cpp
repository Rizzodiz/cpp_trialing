#include <iostream>


int main(){

    /*
        Namespace = provides a solution for preventing name
        conflicts in large projects. Each entity needs a unique name.
        A namespace allows for identically named entities as
        long as the namespaces are different.
    */

    // 'std' is also a namespace and it can clean up code
    using namespace std;

    int age = 17;

    // instead of typing 'std::cout << age;'
    // 'cout << age;' will work just fine
    cout << age << '\n';

    // The standered namespace has hundereds of entities
    // and so there is a high likelyhood of a naming conflict
    // an alternitave is...
    using std::cout;

    cout << "hello World";
    
    
    return 0; 
}
