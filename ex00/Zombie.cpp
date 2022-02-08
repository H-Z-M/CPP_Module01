#include "Zombie.hpp"

Zombie::Zombie(void) : name("noName") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie(void)
{
	std::cout << "<" << name << "> " << "dead" << std::endl;
}

Zombie::Zombie(const Zombie &other)
{
	*this = other;
}

Zombie &Zombie::operator=(const Zombie &rhs)
{
	if (this != &rhs)
		name = rhs.name;
	return *this;
}

void Zombie::announce(void) const
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
