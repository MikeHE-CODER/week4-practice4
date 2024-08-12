#include "Person.h"
#include <iostream>
#include <string>
PersonList createPersonList(int n) {
  PersonList *array = new PersonList[n];
  for (int i = 0; i < n; i++) {
    array[i].numPeople = 1;
    array[i].people->name = "Jane Doe";
  }
}
