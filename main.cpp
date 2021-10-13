#include <iostream>

int main()
{
    char c = '1';
    std::cout << "Welcome to the Lox Repl:\n";
    while (c != '\0')
    {
        std::cout << ">> ";
        std::cin >> c;
        std::cout
            << c << "\n";
    }
    std::cout << "Exited from the Lox REPL";
    return 0;
}
