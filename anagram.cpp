#include "anagram.h"

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    
    std::string str1 = word1;
    std::string str2 = word2;

    int n1 = FormatString(str1);
    int n2 = FormatString(str2);

    if (n1 == n2)
    {
        for (int i = 0; i < n1; i++)
            if (str1[i] != str2[i])
                return false;

        return true;
    }
    else
        return false;
}

std::vector<std::string> Anagram::SelectAnagrams(
    const std::string& word,
    const std::vector<std::string>& candidates) {
    //Fill the correct implementation here
    return candidates;
}

int Anagram::FormatString(std::string& str)
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

    return str.length();
}
