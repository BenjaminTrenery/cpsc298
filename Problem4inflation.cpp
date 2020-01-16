#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {

double itemCost = 0.0;
int numYears = 0;
double inflationRate = 0.0;
//initializes variables

cout << "Give cost of item to be purchased: " << endl;
cin >> itemCost;

cout << "Give the number of years from now that the item will be purchased: " << endl;
cin >> numYears;

cout << "Give the Inflation Rate as a percentage: " << endl;
cin >> inflationRate;
inflationRate /= 100;
//promps user for the item cost, number of years that the item will be purchased and the inflation rate
// due to inflation rate being a percent, the inflation rate is divided by 100 in order to make it a fraction

for(int i = 0; i < numYears; i++)
{
  itemCost = itemCost * (1 + inflationRate);
}
// a for loop multiplies the item cost by (1 + the inflation rate) for each year of time

cout << "The cost of the item after " << numYears << " is $" << itemCost << endl;
//answer is outputed to console

  return 0;
}
