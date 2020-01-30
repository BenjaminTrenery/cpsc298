#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

using namespace std;

class Pet
{
  public:
    Pet(string name, int age, string animalType, double weight);
    string getName() const;
    int getAge() const;
    string getAnimalType() const;
    double getWeight() const;
    void setName(string name);
    void setAge(int age);
    void setAnimalType(string animalType);
    void setWeight(double weight);
    void output();
  private:
    string name;
    int age;
    string animalType;
    double weight;

};

#endif
