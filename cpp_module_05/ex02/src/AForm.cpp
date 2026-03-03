#include "../include/AForm.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{
    std::cout << "Destructor called for " << name << std::endl;
}

AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "Copy constructor called for " << name << std::endl;
}

AForm& AForm::operator=(AForm const& other)
{
    if (this != &other) {
        isSigned = other.isSigned; // const donc pas de copie du name, gradeToSign et gradeToExecute
    }
    return *this;
}

const std::string& AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form " << form.getName() << ", is signed: " << (form.getIsSigned() ? "yes" : "no") 
       << ", grade required to sign: " << form.getGradeToSign() 
       << ", grade required to execute: " << form.getGradeToExecute();
    return os;
}
