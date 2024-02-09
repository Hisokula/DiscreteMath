#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

int Fact(unsigned int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * Fact(x - 1);
    }
}

int WordCounter(char letter, std::string word)
{
    int count = 0;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            count++;
        }
    }

    return count;
}

std::string LetterDeleting(char letter, std::string word)
{
    std::string tmp = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (WordCounter(word[i], word) == 1)
        {
            tmp += word[i];
        }
        else
        {
            tmp += word[i];
            word.erase(word.find(word[i]));
        }
    }

    return tmp;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUSSIAN");

    std::string word = "КОМБИНАТОРИКА";
    std::string tmpword = word;
    
    std::vector<char> letters;
    std::vector<int> count;

    for (int i = 0; i < tmpword.length(); i++)
    {
        if (WordCounter(tmpword[i], tmpword) == 1)
        {
            letters.push_back(tmpword[i]);
            count.push_back(1);
        }
        if (WordCounter(tmpword[i], tmpword) > 1)
        {
            letters.push_back(tmpword[i]);
            count.push_back(WordCounter(tmpword[i], tmpword));
            tmpword = LetterDeleting(tmpword[i], tmpword);
        }
    }
}
