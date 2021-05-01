#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long t;
  const unsigned int M = 1000000007;
  cin >> t;
  long long r=1;
  for(long i=0;i<t;i++){
    r=(r*2)%M;
  }
  cout<< r;
}