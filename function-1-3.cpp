#include "Person.h"
#include <iostream>
#include <string>
PersonList createPersonList(int n) {
  PersonList array;
  array.numPeople = n;
  array.people = new Person[n];
  for (int i = 0; i < n; i++) {
    array.people[i].name = "Jane Doe";
    array.people[i].age = 1;
  }
  return array;
}
PersonList deepCopyPersonList(PersonList pl) {
  PersonList newList;
  newList.numPeople = pl.numPeople;
  newList.people = new Person[pl.numPeople];
  for (int i = 0; i < pl.numPeople; i++) {
    newList.people[i].name = pl.people[i].name;
    newList.people[i].age = pl.people[i].age;
  }
  return newList;
}
