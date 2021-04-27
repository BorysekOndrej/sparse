#pragma once


#include <filesystem>
#include <nlohmann/json.hpp>
#include <sparse/common/types.hpp>
#include <string>
#include <unordered_map>

namespace sparse::common
{
std::string load_file_into_string(const std::filesystem::path& filename);

/**
 * @brief Removes whitespace characters from both ends of given string
 * @param sw_ string view
 * @return trimmed string view
 */
std::string_view trim_line(std::string_view sw_);

/**
 * @brief to_json
 * @param j json
 * @param versions versions object
 */
void to_json(nlohmann::json& j, const versions_t& versions);

/**
 * @brief to_json
 * @param j json
 * @param section section_t object
 */
void to_json(nlohmann::json& j, const section_t& section);
} // namespace sparse::common
