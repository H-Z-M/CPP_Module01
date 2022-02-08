#include "Karen.hpp"

int main(int argc, char **argv)
{
	switch (argc)
	{
		case 2:
			Karen k;
			size_t i = 0;
			std::string levelList[] =
			{ "DEBUG", "INFO", "WARNING", "ERROR" };

			while (levelList[i] != argv[1] && i < 4)
				i++;
			switch (i)
			{
				case 0:
					k.complain("DEBUG");
					std::cout << std::endl;
				case 1:
					k.complain("INFO");
					std::cout << std::endl;
				case 2:
					k.complain("WARNING");
					std::cout << std::endl;
				case 3:
					k.complain("ERROR");
					return 0;
				default :
					std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
					return 0;
			}
	}
	std::cerr << "Invalid argument : ./karenFilter level" << std::endl;;
	return 1;
}
