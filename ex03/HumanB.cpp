#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name) {}

HumanB::HumanB(const HumanB &other)
	: name(other.name), wp(other.wp)
{
	*this = other;
}

HumanB::~HumanB(void) {}

HumanB &HumanB::operator=(const HumanB &rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		wp = rhs.wp;
	}
	return *this;
}

void HumanB::attack(void) const
{
	std::cout << name << " attacks with his " << wp->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
	this->wp = &wp;
}
