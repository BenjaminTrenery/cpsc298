#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {

  int capacity = 0;
  int numPeople = 0;
  //initializes variables

  cout << "Give the legal fire capcity of a room: " << endl;
  cin >> capacity;
  cout << "Give the number of people in the room: " << endl;
  cin >> numPeople;
  //promps user for information

  if(numPeople < capacity)
  {
    cout << "Meeting Legal - Remaining people legally aloud to attend the meeting: " << (capacity - numPeople) << endl;
  }
  else if(numPeople > capacity)
  {
    cout << "Meeting Illegal - too many people in the room, remove: " << (capacity - numPeople) << " people to make meeting legal " << endl;
  }
  else
  {
    cout << "Meeting Legal - room at capacity" << endl;
  }

  //uses an if - elseif - else statement to see if the number of people in the room is legal and how many people needed to be added or removed to make the meeting legal

  return 0;
}
