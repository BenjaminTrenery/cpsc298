#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int row = 0;
  int col = 0;
  int a[4][5];

  for(row = 0; row < 4; ++row)
  {
    for(col = 0; col < 5; ++col)
    {
      cout << "Give an integer: " << endl;
      cin >> a[row][col];
    }
  }
  cout << endl << endl << "Array: " << endl;
  
  for(row = 0; row < 4; ++row)
  {
    for(col = 0; col < 5; ++col)
    {
      cout << a[row][col] << " ";
    }
    cout << endl;
  }
  return 0;
}
