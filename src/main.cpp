#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

std::vector<std::string> find_text_files(const std::string& dirPath){
	std::vector<std::string> text_files;
	try{
		for(const auto& entry : std::filesystem::recursive_directory_iterator(dirPath)){

		}
	}catch(std::filesystem::filesystem_error& e){
		std::cerr << "Error accessing directory " << dirPath << ": " << e.what() << std::endl;
	}

	return text_files;
}

int main() {
	std::cout << "Holla, Search Engine!" << std::endl;
	std::cout << find_text_files("./build");
	return 0;
}