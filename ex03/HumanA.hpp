#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &wp);
		HumanA(const HumanA &other);
		~HumanA(void);

		HumanA &operator=(const HumanA &rhs);

		void attack(void) const;

	private :
		std::string name;
		Weapon &wp;
};

#endif
