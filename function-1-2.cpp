#include "Person.h"
#include <iostream>
#include <string>
struct PersonList {
  Person *people;
  int numPeople;
};
PersonList createPersonList(int n) {
  PersonList *array = new PersonList[n];
  for (int i = 0; i < n; i++) {
    array[i].numPeople = 1;
    array[i].people->name = "Jane Doe";
  }
}
