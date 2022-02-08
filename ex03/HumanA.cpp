#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp)
	: name(name), wp(wp) {}

HumanA::HumanA(const HumanA &other)
	: name(other.name), wp(other.wp)
{
	*this = other;
}

HumanA::~HumanA(void) {}

HumanA &HumanA::operator=(const HumanA &rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		wp = rhs.wp;
	}
	return *this;
}

void HumanA::attack(void) const
{
	std::cout << name << " attacks with his " << wp.getType() << std::endl;
}
