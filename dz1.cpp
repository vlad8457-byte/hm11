#include <iostream>

void function();

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        function();
    }
}

void function()
{
    static int counting_function{};
    counting_function++;
    std::cout << "Kolichestvo vizovov function counting_function(): " << counting_function << std::endl; 
}