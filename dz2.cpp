#include <iostream>

namespace sum 
{
    int calculate(int x, int y) 
    {
        return x + y;
    }
}

namespace subtraction 
{
    int calculate(int x, int y) 
    {
        return x - y;
    }
}
namespace multiplication 
{
    int calculate(int x, int y) 
    {
        return x * y;
    }
}

namespace division 
{
    int calculate(int x, int y) 
    {
        return x / y;
    }
}

int main()
{
int x{ 6 };
int y{ 9 };
std::cout << "slojenie: " << sum::calculate(x, y) << std::endl;
std::cout << "vichitanie: " << subtraction::calculate(x, y) << std::endl;
std::cout << "ymnojenje: " << multiplication::calculate(x, y) << std::endl;
std::cout << "delenie: " << division::calculate(x, y) << std::endl;

}