#include <iostream>
#include <vector>
#include <string>
#include <set>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::vector <char> letters {'К', 'О', 'М', 'Б', 'И', 'Н', 'А', 'Т', 'О', 'Р', 'И', 'К', 'А'};
    std::set <std::string> words;

    for (int a = 0; a < 12; a++)
    {
        for (int b = 0; b < 12; b++)
        {
            for (int c = 0; c < 12; c++)
            {
                for (int d = 0; d < 12; d++)
                {
                    for (int e = 0; e < 12; e++)
                    {
                        std::set <int> ind;
                        ind.insert(a);
                        ind.insert(b);
                        ind.insert(c);
                        ind.insert(d);
                        ind.insert(e);
                        if (ind.size() == 5)
                        {
                            std::string word_o = "";
                            word_o += letters[a];
                            word_o += letters[b];
                            word_o += letters[c];
                            word_o += letters[d];
                            word_o += letters[e];
                            words.insert(word_o);
                        }

                        ind.clear();
                    }
                }
            }
        }
    }

    std::cout << words.size();

}