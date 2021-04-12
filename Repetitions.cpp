#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int max=0;
  
  for (long i = 0; i < s.length(); i++)
  {long count = 1;
    char t = s[i];
    while (i < s.length() && t == s[i + 1])
    {
      count++;
      i++;
    }
    if(max<count)
    max=count;

  }
  cout << max;
}