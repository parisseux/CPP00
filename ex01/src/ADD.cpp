#include "phonebook.hpp"

std::string info_non_empty(std::string field_requrired)
{
    std::string info;

    do {
        std::cout << field_requrired;
        std::getline(std::cin, info);
        if (info.empty())
            std::cout << "This field can not be empty. Please try again.\n";
    } while (info.empty());
    return (info);
}

bool check_number(std::string phone)
{
    if (phone.empty())
        return (0);
    if (phone[0] == '+')
    {
        if (phone.length() < 5 || phone.length() > 18)
            return (0);
        for (size_t i = 1; i < phone.length(); i++) 
        {
            if (!std::isdigit(phone[i]))
                return (0);
        }
    }
    else
    {
        if (phone.length() < 3 || phone.length() > 15)
            return (0);
        for (size_t i = 0; i < phone.length(); i++)
        {
            if (!std::isdigit(phone[i]))
                return (0);
        }
    }
    return (1);
}

std::string valid_phone_number(std::string field_required)
{
    std::string phone;
    do {
        std::cout << field_required;
        std::getline(std::cin, phone);
        if (!check_number(phone))
            std::cout << "Invalid phone number. Please try again.\n";
    } while(!check_number(phone));
    return (phone);

}

void setting_contact(PhoneBook &phonebook)
{
    std::string fn, ln, nn, p, s;
    Contact c;

    std::cout << "\nPlease enter the following informations:\n\n";

    fn = info_non_empty("First name: ");
    ln = info_non_empty("Last name: ");
    nn = info_non_empty("Nickname: ");
    p = valid_phone_number("Phone number: ");
    s = info_non_empty("Darkest secret: ");

    c.set_contact(fn, ln, nn, p, s);
    phonebook.add_contact(c);
}

void ADD(PhoneBook &phonebook)
{
    std::string choice = "1";

    if (phonebook.get_index() > 7)
    {
        std::cout << "Your repertory is full. If you want to add a new contact, i will delete the oldest contact entered.\n\n";
        std::cout <<"If you want to continue press 1\n";
        std::cout << "If you want to interrupt press 0\n\n";
        std::getline(std::cin, choice);
    }
    if (choice.compare("0") == 0)
        return ;
    else if (choice.compare("1") == 0)
    {
        setting_contact(phonebook);
        std::cout << "\n\nThe contact has been succsefully added to the phonebook\n\n";
        return ;
    }   
    else
    {
        std::cout << "Invalid choice. Please try again.\n";
        return ;
    }
}
