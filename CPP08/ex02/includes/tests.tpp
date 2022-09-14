#ifndef CPP_08_02_TESTS_TPP_
# define CPP_08_02_TESTS_TPP_

#include <iostream>
#include <iomanip>
#include <list>
#include <typeinfo>
#include "MutantStack.tpp"

void _print_table_border( size_t len, char c );
void _print_table_footer( size_t len);
std::string demangle(const char* name);

template<typename T, typename Container>
void	_print_tables( MutantStack<T> & arr1, Container & arr2 ) {

    size_t len = 15;
	typename MutantStack<T>::iterator it1 = arr1.begin();
	typename MutantStack<T>::iterator it1e = arr1.end();
	typename Container::iterator it2 = arr2.begin();
	typename Container::iterator it2e = arr2.end();
    	

	_print_table_border(len * 2 + 3, '_');
	std::cout << "|" << std::setw(len) << std::setfill(' ') << "Mutant Stack";
	std::cout << "|" << std::setw(len) << demangle(typeid(Container).name());
	std::cout << "|" << std::endl;
	_print_table_border(len * 2 + 3, '-');


	while (it1 != it1e || it2 != it2e) {
        if (it1 != it1e) {
		    std::cout << "|" << std::setw(len) << std::right << *it1;
            it1++;
        }
        else 
		    std::cout << "|" << std::setw(len) << " ";
        if (it2 != it2e) {
		    std::cout << "|" << std::setw(len) << std::left << *it2;
            it2++;
        }
        else 
		    std::cout << "|" << std::setw(len) << " ";
		std::cout << "|" << std::endl;
	}

	_print_table_footer(len * 2 + 3);
	return ;
}

#endif // CPP_08_02_TESTS_TPP_
