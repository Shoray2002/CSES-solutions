#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    if (s[i] == s[n - 1 - i])
      ;
    else
    {
      for (int j = i + 1; j < (n - i); j++)
      {
        if (s[j] == s[n - 1 - i])
        {
          char temp = s[j];
          s[j] = s[n - 1 - j];
          s[n-1-j] = temp;
          
        }
      }
    }
  }
  cout<<s;

}