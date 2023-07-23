#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        map<string, int> mp;
        string word;
        int max_count = 0;
        string max_word;
        bool found_max = false;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max_count)
            {
                max_count = mp[word];
                max_word = word;
                found_max = true;
            }
        }

        cout << max_word << " " << max_count << endl;
    }

    return 0;
}
