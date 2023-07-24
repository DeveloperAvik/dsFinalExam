/*
--------------------------------------------------------------------                                                                   |
| Copyright 2023 - Developed/coded by Avik Das. All right reserved. |
| Github: DeveloperAvik                                             |
| Linkedln: DeveloperAvik                                           |
--------------------------------------------------------------------                                                                   |
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        map<int, int> cm;
        int n;
        cin >> n;

        int minVal = 0;
        int maxVal = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            cm[val]++;

            if (cm[val] > minVal or (cm[val] == minVal and val > maxVal))
            {
                minVal = cm[val];
                maxVal = val;
            }
        }

        cout << maxVal << " " << minVal << endl;
    }

    return 0;
}