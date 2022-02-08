#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public :
		Zombie(void);
		Zombie(std::string name);
		Zombie(const Zombie &other);
		~Zombie(void);

		Zombie &operator=(const Zombie &rhs);

		void announce(void) const;

	private :
		std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
