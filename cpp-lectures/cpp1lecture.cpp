#include <iostream>

int x = 9; // = 0 definition. by default global уб
int y = 10; // definition
extern int z; // declaration (this variable is from other file ...)

void f(); // Declaration
void f(); // Declaration
void f(); // Declaration
void f(); // Declaration
int g() // returning type doesn't contain in func signature
{
    return 5;
}

namespace test
{
    int x = 0;
}

namespace test
{
    int y = 0;

}

// note search for anonymous namespace

int main()
{
    std::cout << "Hello world!" << std::endl;

    // while(true)
    // {
    //     while(true)
    // {
    //     while(true)
    // {
    //     namespace test
    // }
    // }
    // }

    int x = 5;
    std::cout << x << std::endl;
    std::cout << ::x << std::endl;
    std::cout << test::x << std::endl;
    test::x += 1;
    std::cout << test::x << std::endl;

    //std::cout << f(); не надо аххахаахах

    return 0;
}

void f(){ 
    std::cout << "Keke" << std::endl;
}