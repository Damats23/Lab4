#include <iostream>
#include <string>

int main() 
{
   // Declare a variable to store the user name.
    std::string name;
    
    // Prompt the user for their name.
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    // Print a personalized greeting.
    std::cout << "Hello world from @" << name << std::endl;
    
    return 0;
}
