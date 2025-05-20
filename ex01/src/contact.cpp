#include "phonebook.hpp"

void Contact::set_contact(std::string fn, std::string ln, std::string nn, std::string p, std::string s)
{
    first_name = fn;
    last_name = ln;
    nickname = nn;
    phone = p;
    secret = s;
}

void Contact::display_contact()
{
    std::cout << "\nFirst name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone << std::endl;
    std::cout << "Darkest secret: " << secret << std::endl;
}

void PhoneBook::add_contact(Contact &c)
{
    contacts[index % 8] = c;
    index++;
}

void PhoneBook::display_contact()
{
    if (index == 0)
        std::cout << "\nNo contact are registered for the moment ...\n";
    else if (index < 8)
    {
        for (int i = 0; i < index; i++)
            contacts[i].display_contact();
    }
    else 
    {
        for (int i = 0; i < 8; i++)
            contacts[i].display_contact();
    }
    
}