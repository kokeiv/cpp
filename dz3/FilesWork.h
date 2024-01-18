#pragma once
#include<string>
#include <fstream>

class FilesWork
{
private:
	std::string name;
public:
	FilesWork(std::string name);
	~FilesWork();

	void write_file(std::string text);
	void read_file();
	void operator += ( std::string text) ;
};



