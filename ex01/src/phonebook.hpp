#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string secret;
    public:
        void set_contact(std::string fn, std::string ln, std::string nn, std::string p, std::string s);
        void display_contact();
};

class PhoneBook {
    Contact contacts[8];
    public:
    int index;
    public:
        void add_contact(Contact &c);
        void display_contact();
};

#endif