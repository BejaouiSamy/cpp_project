#include "../include/Form.hpp"

int main()
{
    // --- Test 1 : form valide, grade suffisant pour signer ---
    std::cout << "--- Test 1: signature reussie ---" << std::endl;
    try
    {
        Bureaucrat b("Alice", 10);
        Form f("ContratA", 50, 50);
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // --- Test 2 : grade trop bas pour signer ---
    std::cout << "\n--- Test 2: grade trop bas pour signer ---" << std::endl;
    try
    {
        Bureaucrat b("Bob", 100);
        Form f("ContratB", 50, 50);
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // --- Test 3 : form avec grade invalide (trop haut) ---
    std::cout << "\n--- Test 3: form avec gradeToSign = 0 ---" << std::endl;
    try
    {
        Form f("ContratC", 0, 50);
        std::cout << f << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // --- Test 4 : form avec grade invalide (trop bas) ---
    std::cout << "\n--- Test 4: form avec gradeToSign = 151 ---" << std::endl;
    try
    {
        Form f("ContratD", 151, 50);
        std::cout << f << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // --- Test 5 : copy constructor et operateur d'affectation ---
    std::cout << "\n--- Test 5: copy et assignation ---" << std::endl;
    try
    {
        Form f1("ContratE", 30, 40);
        Form f2 = f1;
        std::cout << f2 << std::endl;

        Form f3("ContratF", 1, 1);
        f3 = f1;
        std::cout << f3 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
