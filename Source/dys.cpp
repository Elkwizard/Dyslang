#include <iostream>
#include <fstream>
#include <print>
#include <string>

#include "../Header/Util.hpp"

int main(int argc, char** argv) {
	if (argc != 2 && argc != 4) {
		std::println("Usage: dys <filename> (-o <exe_name>)?");
		return 1;
	}

	std::string filename = argv[1];
	std::string exe = argc == 4 ? argv[3] : filename + ".exe";
	
	std::optional<std::string> file = util::readFile(filename);

	if (!file) {
		std::println("File '{}' not found", filename);
		return 1;
	}

	std::println("File content for '{}' is: {}", filename, *file);
	
	return 0;
}