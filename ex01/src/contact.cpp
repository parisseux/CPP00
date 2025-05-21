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

std::string center(std::string& text, int width)
{
    int len = text.length();
    if (width < len)
    {
        text[width -1] = '.';
        for (int i = width; i < len; i++)
            text[i] = '\0';
        return (text);
    }
    if (width == len)
        return (text);
    int left = (width - len) / 2;
    int right = (width - len - left);
    return (std::string(left, ' ') + text + std::string(right, ' '));

}

std::string int_to_string(int i)
{
    std::stringstream ss;
    ss << i;
    return ss.str();
}

void Contact::display_summary(int i)
{
    std::string index = int_to_string(i);
    std::cout << center(index, 10) << "|";
    std::cout << center(first_name, 10) << "|";
    std::cout << center(last_name, 10) << "|";
    std::cout << center(nickname, 10) << "\n";
}