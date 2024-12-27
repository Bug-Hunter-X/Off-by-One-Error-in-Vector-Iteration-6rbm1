```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  for (int i = 0; i <= v.size(); ++i) { // Error: Accessing v[5] which is out of bounds
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}
```