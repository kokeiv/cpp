#include <iostream>

#include "FilesWork.h"

int main() {
	
	FilesWork file("some.txt");

	file.write_file("new text");

	file.read_file();


	file += "!!!";

	file.read_file();

	return 0;
}