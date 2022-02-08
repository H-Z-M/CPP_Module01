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
		this->name = rhs.name;
	return *this;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void) const
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
