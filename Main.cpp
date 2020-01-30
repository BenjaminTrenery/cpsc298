#include <iostream>
#include <string>
#include "Pet.cpp"
#include "Pet.h"

using namespace std;

int main(int argc, char **argv)
{
  Pet myPet1 ("Oliver", 3, "dog", 30);
  Pet myPet2 ("Abbey", 6, "cat", 10);

  cout << "Pet1: " << endl;
  myPet1.output();
  cout << endl;

  cout << "Pet2: " << endl;
  myPet2.output();

  return 0;
}
