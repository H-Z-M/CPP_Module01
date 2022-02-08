#include "Replace.hpp"

void errorExit(std::string errmsg)
{
	std::cerr << errmsg << std::endl;
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		errorExit("Invalid argumant : ./replace filename fromStr toStr");
	Replace rp(argv[1], argv[2], argv[3]);
	return 0;
}
