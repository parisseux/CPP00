#include "phonebook.hpp"

void instructions()
{
    std::cout << "\nPlease choose one of the command:\n\n";
    std::cout << "  ADD\t\tto register a new contact\n";
    std::cout << "  SEARCH\tto see all the existing contacts\n";
    std::cout << "  EXIT\t\tto exit the programm and clean the phone book\n\n";
}

int main(void)
{
    std::string cmd;
    PhoneBook phonebook;
    while (1)
    {
        instructions();
        if (!std::getline(std::cin, cmd))
            break ;
        if (cmd.compare("EXIT") == 0)
            break ;
        else if (cmd.compare("ADD") == 0)
            ADD(phonebook);
        else if (cmd.compare("SEARCH") == 0)
            SEARCH(phonebook);
    }
   return (0);
}
