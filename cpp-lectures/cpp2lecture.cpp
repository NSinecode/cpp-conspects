#include <iostream>
#include <string>
#include <vector>

/*
3 min - types
16 min - string
22 min - off top about push_back
26 min - about alloc
31 min - vector
42 min - expressions and operators
54 min - operators
1h 11 min - ternary operator
*/

int main()
{
    int a1 = 1;
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.pop_back();
    std::cout << numbers[4] << std::endl;
    std::cout << a1 = 43; true && false;

    int a;// 4 bytes
    /*
    min - 2 byte
    int_16
    int_32
    int_64
    unsigned int 2**32
    char - 1 byte
    float: sign - bit, matissa, exp; problems with accuracy
    doube 8 bytes
    bool: true, false 1 byte))
    size_t -> unsigned int/long/long long
    -> vector.size() returns size_t
    */

    /*
    float: spec values
    NaN
    INF
    -INF
    */

    /*
    std::string - когдато сишная строка, но на стероидах
    -> 
    size -> s.size(), s.length()
    capacity -> when init, it is logically to allocate more mem then we used
    -> max емкость
    -> s.shrink_to_fit() dealloc unused mem
    array of values
    */

    /*
    's' - char
    "sdf" - cstr
    'asdf' - const char list
    */

    /*
    vector.at() -> throws exceptions
    */

    /*
    expressions (identificators, literals, )
    int a = 5; - expression
    a - identificator
    5 - literal unchangable const
    'asdf' - const c str
    literals prefixes

    //////////////////////////////////////////

    void f(int)
    void f(unsigned int)
    void f(float)
    f(5) - int
    f(5u) - literal for unsigned
    f(4f) - literal for float
    f(5l) - long
    f(5ll) - long long
    */

    /*
    operators:
    1) + - * % /
    2) & ^ | ~ (~ invert all bytes)
    3) && || !
    3+) == != <= >= < > <=> (<=> более интересное сравнение объектов)
    4) >> << сдвиги
    5) = += -= /= *= %= &= ^= |=
    6)
    */

    // true ? a:b; (a works)
    // false ? a:b; (b works)

    /*
    ++a - returns a + 1
    a++ - returns a and than += 1

    ++a = 5; works (l-value)
    a++ = 5; doesn't work (r-value)
    */
}