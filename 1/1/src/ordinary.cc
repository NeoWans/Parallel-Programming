#include "main.hh"
#include "solve.hh"
using namespace std;

void func(int& ans, int arr[], int n) {
  for (int i = 0; i < n; ++i) ans += arr[i];
}
signed main(int argc, char* argv[]) {
  return _main(argc, argv);
}