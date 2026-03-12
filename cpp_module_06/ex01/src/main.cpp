#include "../include/Serializer.hpp"

int main(void)
{
    Data data;
    data.value = 42;
    data.name = "hello";

    std::cout << "=== Original pointer ===" << std::endl;
    std::cout << "Address : " << &data << std::endl;
    std::cout << "value   : " << data.value << std::endl;
    std::cout << "name    : " << data.name << std::endl;

    uintptr_t raw = Serializer::serialize(&data);

    std::cout << "\n=== Serialized ===" << std::endl;
    std::cout << "uintptr_t: " << raw << std::endl;

    Data* ptr = Serializer::deserialize(raw);

    std::cout << "\n=== Deserialized pointer ===" << std::endl;
    std::cout << "Address : " << ptr << std::endl;
    std::cout << "value   : " << ptr->value << std::endl;
    std::cout << "name    : " << ptr->name << std::endl;

    std::cout << "\nSame pointer? " << (ptr == &data ? "YES" : "NO") << std::endl;

    return 0;
}
