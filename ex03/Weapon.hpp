#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		Weapon(const Weapon &other);
		~Weapon(void);

		Weapon &operator=(const Weapon &rhs);

		const std::string &getType(void) const;
		void setType(std::string type);

	private :
		std::string type;
};

#endif
