#include "Replace.hpp"

Replace::Replace(std::string filename, std::string fromStr, std::string toStr)
	: filename(filename), fromStr(fromStr), toStr(toStr)
{
	if (filename.empty() || fromStr.empty() || toStr.empty())
		errorExit("empty string");
	ifs.open(filename);
	if (ifs.fail())
		errorExit("read file open error");
	replacedFile = filename + ".replace";
	ofs.open(replacedFile);
	if (ofs.fail())
		errorExit("write file open error");
	replaceStr();
}

void Replace::replaceStr(void)
{
	std::string line;
	std::string ret;

	while (std::getline(ifs,line))
	{
		ret += parseLine(line);
		if (!ifs.eof())
			ret += "\n";
	}
	ofs << ret;
}

std::string	Replace::parseLine(std::string line)
{
	size_t pos = 0;

	while ((pos = line.find(fromStr, pos)) != std::string::npos)
	{
		line.erase(pos, fromStr.length());
		line.insert(pos, toStr);
		pos += toStr.length();
	}
	return line;
}
