#include <iostream>
#include <string>

using namespace std;

float feet = 0;
float inches = 0;
float meters = 0;
float centimeters = 0;

void input()
{
  cout << "Give amount of feet: " << endl;
  cin >> feet;
  cout << "Give amount of inches" << endl;
  cin >> inches;

}

void calc()
{
  feet += inches / 12;
  meters = 0.3048 * feet;
  centimeters = 100 * meters;

}

void output()
{
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;

}

int main(int argc, char **argv)
{
  bool exit = false;

  while(exit != true)
  {
    input();
    calc();
    output();
    string myAnswer = "";
    cout << "Enter: 'exit' to end program" << endl;
    cin >> myAnswer;

    if(myAnswer == "exit")
    {
      exit = true;
    }

  }
  return 0;
}
