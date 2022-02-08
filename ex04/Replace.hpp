#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <fstream>
# include <iostream>

class Replace
{
	public :
		Replace(std::string filename, std::string fromStr, std::string toStr);

	private :
		void replaceStr(void);
		std::string	parseLine(std::string line);

		std::string filename;
		std::string fromStr;
		std::string toStr;
		std::string replacedFile;
		std::ifstream ifs;
		std::ofstream ofs;
};

void errorExit(std::string errmsg);

#endif
