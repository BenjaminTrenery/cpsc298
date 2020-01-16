#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {

double netPay = 0.0;
int numHoursWorked = 0;
//initializes the variables

cout << "Give the number of hours worked this week" << endl;
cin >> numHoursWorked;
//promps user for the number of hours worked

if(numHoursWorked > 40)
{
  netPay = 16.00 * 40;
  netPay += (1.5 * 16.00) * (numHoursWorked - 40);
}
else
{
  netPay = 16.00 * numHoursWorked;
}

//if statmenet calculates the gross amount including overtime if there is any

cout << "Gross pay: $" << netPay << endl;

netPay *= 0.94;
cout << "After Social Security Tax: $" << netPay << endl;

netPay *= 0.86;
cout << "After Federal Income Tax: $" << netPay << endl;

netPay *= 0.95;
cout << "After State Imcome Tax: $" << netPay << endl;

netPay -= 10.00;
cout << "After Medical Insurance: $" << netPay << endl;

cout << "Net take-home pay is: $" << netPay << endl;

   return 0;
}
