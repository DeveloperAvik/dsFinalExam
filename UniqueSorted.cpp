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
    int n;
    cin >> n;
    set<int, greater<int>> s;
    for(int i = 0; i < n ; i++){
      int a;
      cin >> a ;
      s.insert(a);
    }

    for(auto i = s.begin(); i != s.end(); i++){
      cout << *i << endl;
    }
  }
  return 0;
}