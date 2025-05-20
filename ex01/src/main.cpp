
#include "phonebook.hpp"

void instructions()
{
    std::cout << "\nPlease choose one of the command:\n\n";
    std::cout << "  ADD\t\tto register a new contact\n";
    std::cout << "  SEARCH\tto see all the existing contacts\n";
    std::cout << "  EXIT\t\tto exit the programm and clean the phone book\n\n";
}

void ADD(PhoneBook &phonebook)
{
    std::string fn, ln, nn, p, s;

    std::cout << "\nPlease enter the following informations:\n\n";

    std::cout << "First name: ";
    std::getline(std::cin, fn);
    std::cout << "Last name: ";
    std::getline(std::cin, ln);
    std::cout << "Nickname: ";
    std::getline(std::cin, nn); 
    std::cout << "Phone number: ";
    std::getline(std::cin, p);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, s);

    Contact c;
    c.set_contact(fn, ln, nn, p, s);
    phonebook.add_contact(c);
}
int main (void)
{
    std::string cmd;
    PhoneBook phonebook;
    phonebook.index = 0;
    while (1)
    {
        instructions();
        std::getline(std::cin, cmd);
        if (cmd == "EXIT")
            break ;
        else if (cmd == "ADD")
        {
            ADD(phonebook);
            std::cout << "\n\nThe contact has been succsefully added to the phonebook\n\n";

        }
        else if (cmd == "SEARCH")
        {
            phonebook.display_contact();
        }
        else 
            continue ;
    }
   return (0);
}