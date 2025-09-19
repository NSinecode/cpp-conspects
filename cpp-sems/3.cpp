#include <iostream>

#define DEBUG
#undef DEBUG

// #define ASSERT( cond )                                          \
//     if ( !(cond) ) {                                            \
//         std::cout << "Condition (" << #cond << ") failed\n";    \ 
//         std::cout << "Line (" << __LINE__ << ")\n";             \
//         std::cout << "Condition (" << __PRETTY_FUNCTION__ << ") failed\n";            \
//     } \

#include <cstring>

enum Country {
	Null,
	Russia,
	UK,
	Germany,
};

const char* getCapital(Country country) {
	
/*
	switch(country) {
		case Russia: return "Moscow";
		//...
		default: return "Not found";	
	};
*/

	switch(country) {

#define COUNTRY(name, capital, area, population) case name: return #capital;
#include "country_info"
#undef COUNTRY
		default: return "Not found";
	};


}


Country getCountryByName(const char* countryName) {

	if (0) {}
#define COUNTRY(name, capital, area, population) else if (!strcmp(countryName, #name)) {return name;}
#include "country_info"
#undef COUNTRY
	else {
		return Null;
	}

}




int main()
{
    std::cout << "Hello world" << std::endl;

    for(int i = 1; i > 0; i *= 10)
        std::cout << i << std::endl;

    /*
    vim: press i to insert mode
    vimtutor - tutorial for vim
    */

    /*
    Compilation stages:
    - Preprocessing (directives of preprocessor) g++ -E ...
    - Compilation g++ -S ...
    - Assembly transformation -c
    - Link 
    --save-temps save all midle files

    godbolt.org - view compilation stages

    we can define some DEBUG vars within -DNAME (g++ -DDEBUG 3.cpp)
    */

    /*
    g++ -O0  no optimisation
    g++ -O1  optimize
    */
    return 0;
}