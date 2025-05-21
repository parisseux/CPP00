#include "phonebook.hpp"

void show_all_contact(PhoneBook &phonebook)
{
    std::cout << "\n\n-------------------------------------------\n";
    std::cout << "    ID    |First Name| Last Name| Nickname \n";
    std::cout << "-------------------------------------------\n";
    for (int i = 0; i < phonebook.get_index(); i++)
    {
        Contact c = phonebook.get_contact(i);
        c.display_summary(i);
    }
}

int choose_contact(PhoneBook &phonebook)
{
    while (1)
    {
        std::cout << "\n\nEnter the ID of the contact you are intressted in.\n";
        std::string input;
        std::getline(std::cin, input);
        if (input.length() != 1 || !std::isdigit(input[0]))
        {
            std::cout << "The ID is invalid. Please try again.\n";
            continue ;
        }
        int id = input[0] - '0';
        if (id < 0 || id >= phonebook.get_index())
        {
            std::cout << "The ID is invalid. Please try again.\n";
            continue ;
        }         
        return (id);   
    }
}

void SEARCH(PhoneBook &phonebook)
{
    if (phonebook.get_index() == 0)
    {
        std::cout << "\nNo contact are registered. Try again after entering at least one contact.\n";
        return ;
    }
    show_all_contact(phonebook);
    int choice = choose_contact(phonebook);
    Contact c = phonebook.get_contact(choice);
    c.display_contact();
}