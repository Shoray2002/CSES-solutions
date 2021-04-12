#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin >> n;
  long long count = 0;
  long long a[n];
  for (long long i = 0; i < n; i++)
    cin >> a[i];
  for (long long i = 0; i < n - 1; i++)
  {
    if (a[i + 1] < a[i])
    {
      count += (a[i] - a[i + 1]);
      a[i+1]=a[i];
    }
    
  }cout << count ;
}