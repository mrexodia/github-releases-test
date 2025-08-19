#include <iostream>

int main() {
#ifdef TEST_RELEASE
  std::cout << "TEST_RELEASE is defined!\n";
#else
  std::cout << "TEST_RELEASE is not defined!\n";
#endif
}