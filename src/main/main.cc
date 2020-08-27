#include <iostream>

void func(int) {}
void func(int *) {}
void func(bool) {}

int main() {
  func(nullptr);
  // func(NULL);
  std::cout << "This is Eric Sun's C++ file!" << std::endl;

  return 0;  // End of a line
}