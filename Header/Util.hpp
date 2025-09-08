#pragma once

#include <string>
#include <optional>

namespace util {
	std::optional<std::string> readFile(const std::string& path);
};