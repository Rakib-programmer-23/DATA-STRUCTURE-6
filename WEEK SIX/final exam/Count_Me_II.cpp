#include <iostream>
#include <map>
#include <algorithm> // Include the <algorithm> header for the sort function
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int a[t];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
       

        map<int, int> mp;
        int max_count = 0;
        int max_digit = a[0]; 

        for (int i = 0; i < t; i++)
        {
            mp[a[i]]++;
            if (mp[a[i]] > max_count || (mp[a[i]] == max_count && a[i] > max_digit))
            {
                max_count = mp[a[i]];
                max_digit = a[i];
            }
        }
        cout << max_digit << " " << max_count << endl;
    }

    return 0;
}
