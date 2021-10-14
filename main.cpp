#include <iostream>
#include <string.h>

int main(int argc, char *argv[])
{
    std::string line;
    if (strcmp(argv[1], "-t") == 0)
    {
        std::cout << "Welcome to the Lox Repl:" << std::endl;
        while (true)
        {
            std::cout << ">> ";
            getline(std::cin, line);
            std::cout
                << line << std::endl;
            line.clear();
        }
        std::cout << "Exited from the Lox Repl";
    }
    else if (strcmp(argv[1], "-s") == 0)
    {
        std::cout << "Run from file" << std::endl;
    }
    else
    {
        std::cout << "Arguments expected. Run --help for more details" << std::endl;
    }
    return 0;
}
