#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::Weapon(const Weapon &other) : type(other.type)
{
	*this = other;
}

Weapon::~Weapon(void) {}

Weapon &Weapon::operator=(const Weapon &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

const std::string &Weapon::getType(void) const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
