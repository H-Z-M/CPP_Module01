#include "Zombie.hpp"

int main(void)
{
	{
		Zombie n("foo");
		n.announce();
	}
	{
		Zombie *p = newZombie("new");
		p->announce();
		delete p;
	}
	{
		randomChump("random");
	}
}
