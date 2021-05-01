#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++)
    cin >> A[i];
  sort(A, A + n);
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    while (i < n - 1 && A[i] == A[i + 1])
      i++;

    res++;
  }

  cout << res << endl;
}