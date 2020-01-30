#include <iostream>

using namespace std;

float addTax(float& taxRate, float& cost)
{
  float costWithTax = 0;
  taxRate /= 100.0;
  costWithTax = cost * (1 + taxRate);
  return costWithTax;
}

int main(int argc, char **argv)
{
  float taxRate = 0;
  float cost = 0;
  cout << "Give taxRate (as a percent): " << endl;
  cin >> taxRate;
  cout << "Give cost: " << endl;
  cin >> cost;

  cout << "Cost with tax: " << addTax(taxRate, cost) << endl;

  return 0;
}
