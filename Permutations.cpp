#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin >> n;
  if (n == 1)
    cout << 1;
  else if (n < 4)
    cout << "NO SOLUTION";
  else if (n == 4)
    cout << "3 1 4 2";
  else if (n > 4)
  {
    for (long long i = 1; i <= n; i += 2)
      cout << i << " ";
    for (long long i = 2; i <= n; i += 2)
      cout << i << " ";
  }
}