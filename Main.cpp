#include <iostream>
#include <string>

int main()
{
    std::string string = "Hello, world!";
    
    std::cout << string << "\n" << "Line length = " 
        << string.length() << " letters" << "\n";
    std::cout << "The first character: " << string.erase(1) << "\n" 
        << "The last character: " << string.back() << "\n";
}