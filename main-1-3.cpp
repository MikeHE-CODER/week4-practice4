#include "Person.h"
#include <iostream>
extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);
int main() {
  PersonList pl = createPersonList(3);
  deepCopyPersonList(pl);
}
