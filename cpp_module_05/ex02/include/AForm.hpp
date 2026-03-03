#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        AForm(const std::string& name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        AForm(const AForm& other);
        AForm& operator=(AForm const& other);

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
        virtual void execute(Bureaucrat const& executor) const = 0;
        
};
std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif