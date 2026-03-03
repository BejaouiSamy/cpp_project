#include "../include/Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::~Form()
{
    std::cout << "Destructor called for " << name << std::endl;
}

Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "Copy constructor called for " << name << std::endl;
}

Form& Form::operator=(Form const& other)
{
    if (this != &other) {
        isSigned = other.isSigned; // const donc pas de copie du name, gradeToSign et gradeToExecute
    }
    return *this;
}

const std::string& Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form " << form.getName() << ", is signed: " << (form.getIsSigned() ? "yes" : "no") 
       << ", grade required to sign: " << form.getGradeToSign() 
       << ", grade required to execute: " << form.getGradeToExecute();
    return os;
}

