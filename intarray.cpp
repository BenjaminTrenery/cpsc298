#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int numberArray[10];
  int i = 0;

  for(i = 0; i < 10; ++i)
  {
    cout << "Give a number: " << endl;
    int number = 0;
    cin >> number;
    while(number < 0)
    {
      cout << "Give a number: " << endl;
      number = 0;
      cin >> number;
    }
    numberArray[i] = number;
  }

  for(i = 0; i < 10; ++i)
  {
    cout << numberArray[i] << " ";
  }

  cout << endl;

  return 0;
}
