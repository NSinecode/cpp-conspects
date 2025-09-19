#include <iostream>
#include <vector>
#include <string>

//signature function
int main()
{
    std::cout << "Hello world!" << std::endl;

    
    const int y = 0;

    // switch (x)
    // {
    //     case 10:
    //     case 1:
    //         std::cout << 1 << std::endl;
    //         break;
    //     case y:
    //         std::cout << 0;
    //         break;
    //     default:
    //         std::cout << "hey";
    //         break;
    // }

    // for(int x = 0; x * y < 20; ++x)
    // do {

    // }while (false);

    std::vector<std::string> v(3,"hello");

    std::string x = "";
    while(std::cin >> x) {
        v.push_back(x);
    }
   
    std::sort(v.rbegin(), v.rend());

    return 0;
}

/*
pavelprikhodko@Levs-MacBook-Pro C++ 1 sem % g++ main.cpp
pavelprikhodko@Levs-MacBook-Pro C++ 1 sem % ls 
a.out           main            main.cpp        main.dSYM
pavelprikhodko@Levs-MacBook-Pro C++ 1 sem % ./a.out
Hello world!
*/

/*

*/