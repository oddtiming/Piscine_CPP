#ifndef ICE_HPP_
# define ICE_HPP_

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Ice : public AMateria
{
	private:
		/* Since it apparently doesn't make sense to copy the type..? */
		Ice( Ice const & src );
		Ice &	operator=( Ice const & rhs );

	public:
		Ice( );

		~Ice( );

		virtual AMateria* clone() const;
		void use( ICharacter & target );
};

#endif // ICE_HPP_