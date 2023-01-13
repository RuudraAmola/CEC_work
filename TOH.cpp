#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, string source, string dest, string aux)
{
  if (n == 1){
    cout << " Move disk 1 from tower " << source << " to tower " << dest << endl;
    return;
  }
  tower_of_hanoi(n - 1, source, aux, dest);
  cout << " Move disk " << n << " from tower " << source << " to tower " << dest << endl;
  tower_of_hanoi(n - 1, aux, dest, source);
}

int main()
{
  int n;
  cin >> n;
  printf("The sequence of moves :\n");
  tower_of_hanoi(n, "I", "III", "II");
  return 0;
}