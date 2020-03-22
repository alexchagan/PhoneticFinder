#pragma once
#include <string>

namespace phonetic {
	std::string find(std::string text, std::string word);
	bool checkWord(std::string currentWord, std::string word);
}
