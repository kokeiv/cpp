#include "FilesWork.h"
#include<string>
#include <fstream>
#include <iostream>

FilesWork::FilesWork(std::string name) {
	FilesWork::name = name;

};
FilesWork::~FilesWork() {

};

void FilesWork::write_file(std::string text) {
	std::ofstream ofile(name);
	ofile << text;
	ofile.close();
}
void FilesWork::read_file() {
	std::ifstream ifile(name);
	std::string text;
	if (ifile.is_open()) {
		while (std::getline(ifile, text))
			std::cout << text << std::endl;
		ifile.close();
	}
	else {
		std::cout << "File not open" << std::endl;
	}
}

void FilesWork::operator += ( std::string text)  {
	std::ofstream ofile(name, std::ofstream::app);
	ofile << text;
	ofile.close();
}