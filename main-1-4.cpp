#include "Person.h"
#include <iostream>
extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);
int main() {
  PersonList pl = createPersonList(3);
  shallowCopyPersonList(pl);
}
