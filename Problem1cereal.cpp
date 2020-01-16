#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {

double package = 0;
double metricTons = 0;
double numBoxes = 0;

cout << "Give the weight of one cereal box in ounces: " << endl;
cin >> package;

metricTons = package / 35273.92;
//finds how many metric tons one package of cereal is
numBoxes = 35273.92 / package;
//finds how many boxes needed for one metric ton

cout << "Weight of one cereal in metric tons: " << metricTons << endl;
cout << "About the number of cereal boxes in one metric ton: " << numBoxes << endl;

   return 0;
}
