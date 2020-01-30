#include <iostream>

using namespace std;

void zeroBoth(int& var1, int& var2)
{
  var1 = 0;
  var2 = 0;
  cout << "This function worked" << endl;
  cout << "Var1: " << var1 << "         Var2: " << var2 << endl;
}

int main(int argc, char **argv)
{
  int var1 = 200;
  int var2 = -20;

  zeroBoth(var1, var2);
  return 0;
}
