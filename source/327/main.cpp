#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];

  for (int i = 0; i < n; i++) {
    int x = n - i - 1;
    int s = -1;
    for (int j = 0; j < n; j++) {
      if (x == 0) {
        s *= -1;
      }
      a[i][j] = x;
      x += s;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}