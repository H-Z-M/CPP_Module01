#include "Zombie.hpp"

int main(void)
{
	int N = 4;
	Zombie *horde = zombieHorde(N, "foo");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete []horde;
}
