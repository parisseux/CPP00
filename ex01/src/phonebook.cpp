#include "phonebook.hpp"

int PhoneBook::get_index() const {
    return index;
}

void PhoneBook::add_contact(Contact &c)
{
    contacts[index % 8] = c;
    index++;
}

Contact PhoneBook::get_contact(int i)
{
    return (contacts[i % 8]);
}

PhoneBook::PhoneBook()
{
    index = 0;
}