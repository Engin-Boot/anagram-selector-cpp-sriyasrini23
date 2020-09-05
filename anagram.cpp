#include "anagram.h"

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {

    std::string str1 = word1;
    std::string str2 = word2;

    FormatString(str1);
    FormatString(str2);

    if (str1 == str2)
        return true;
    else
        return false;
}

std::vector<std::string> Anagram::SelectAnagrams(
    const std::string& word,
    const std::vector<std::string>& candidates) 
{
    std::vector<std::string> result;
    for (auto& it : candidates) {
        if (Anagram::WordPairIsAnagram(word, it) == true)
            result.push_back(it);
    }
    return result;
}

void Anagram::FormatString(std::string& str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
        {
            str[count] = tolower(str[i]);
            count += 1;
        }
    str[count] = '\0';
    str = str.substr(0, count);
    std::sort(str.begin(), str.end());
}
