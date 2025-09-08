#include "../Header/Util.hpp"

#include <fstream>

namespace util {
	std::optional<std::string> readFile(const std::string& path) {
		std::fstream file (path);

		if (!file) return { };

        return std::string(
			std::istreambuf_iterator<char>(file),
            std::istreambuf_iterator<char>()
        );
    }
}