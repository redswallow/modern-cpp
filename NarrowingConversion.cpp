#include <iostream>
using namespace std;
int main() {
  int anInt{100};
  char aChar{static_cast<char>(65)};
  double aDouble{1.0};
  float aFloat{static_cast<float>(aDouble)};

  cout << anInt << " " << aChar << " "
       << aDouble << " " << aFloat << endl;
  return 0;
}
