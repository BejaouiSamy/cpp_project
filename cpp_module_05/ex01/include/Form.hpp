#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form(const Form& other);
        Form& operator=(Form const& other);

        // class imbriquee pour les exceptions
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw() 
                {
                    return "Grade is too high!";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is too low!";
                }
        };
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat& bureaucrat);
        
};
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif