#include <iostream>
#include <string.h>

int main(int argc, char *argv[])
{
    std::string line;
    if (argv[1] == "-t")
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
    else if (argv[1] == "-s")
    {
        std::cout << "Run from file" << std::endl;
    }
    else
    {
        std::cout << "Check arguments" << std::endl;
    }
    std::cout << argv[1];
    return 0;
}
