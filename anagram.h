#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

namespace Anagram
{
    bool WordPairIsAnagram(const std::string& word1, const std::string& word2);

    std::vector<std::string> SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates);
    
    int FormatString(std::string& str);
} // namespace Anagram
