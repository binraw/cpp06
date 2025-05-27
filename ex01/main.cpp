#include "Serialization.hpp"

int main(void)
{
    Data vars;

    vars.value = 42;
    uintptr_t ptr;
    ptr = Serialization::serialize(&vars);
    std::cout << "value ptr : "<< ptr << std::endl;

    Data *test;
    test = Serialization::deserialize(ptr);
    std::cout << "value de test->value : " << test->value << std::endl;
}

