#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		HumanB(const HumanB &other);
		~HumanB(void);

		HumanB &operator=(const HumanB &rhs);

		void attack(void) const;
		void setWeapon(Weapon &wp);

	private :
		std::string name;
		Weapon *wp;
};

#endif
