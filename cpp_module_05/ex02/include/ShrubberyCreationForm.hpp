#ifndef SHURUBBERYCREATIONFORM_HPP
#define SHURUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
        const std::string target;
    public:
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& other);

        void execute(Bureaucrat const& executor) const;
};

#endif