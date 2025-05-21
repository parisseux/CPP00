#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <limits>
# include <string>
# include <cctype>
# include <iomanip>
# include <sstream>

class Contact {
public:
    void set_contact(std::string fn,
                std::string ln,
                std::string nn,
                std::string p,
                std::string s);
    void display_contact();
    void display_summary(int i);
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string secret;
};

class PhoneBook {
public:
    PhoneBook();
    void add_contact(Contact &c);
    Contact get_contact(int i);
    int get_index() const;
private:
    Contact contacts[8];
    int index;
};

void ADD(PhoneBook &phonebook);
void SEARCH(PhoneBook &phonebook);

#endif