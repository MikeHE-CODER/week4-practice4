#include "Person.h"
#include <iostream>
extern PersonList createPersonList(int n);
int main() {
  PersonList array = createPersonList(3);
  std::cout << array.numPeople << std::endl;
}
