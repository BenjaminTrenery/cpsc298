#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

Pet::Pet(string name, int age, string animalType, double weight)
{
  this-> name = name;
  this-> age = age;
  this-> animalType = animalType;
  this-> weight = weight;
}

string Pet::getName() const
{
  return name;
}
int Pet::getAge() const
{
  return age;
}
string Pet::getAnimalType() const
{
  return animalType;
}
double Pet::getWeight() const
{
  return weight;
}
void Pet::setName(string name)
{
  this-> name = name;
}
void Pet::setAge(int age)
{
  this-> age = age;
}
void Pet::setAnimalType(string animalType)
{
  this-> animalType = animalType;
}
void Pet::setWeight(double weight)
{
  this-> weight = weight;
}

void Pet::output()
{
  cout << "Name: " << getName() << endl;
  cout << "Age: " << getAge() << endl;
  cout << "Animal Type: " << getAnimalType() << endl;
  cout << "Weight: " << getWeight() << endl;
}
