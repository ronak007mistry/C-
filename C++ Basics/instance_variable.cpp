//C++ Program to demonstrate instance variables.
#include <iostream>
using namespace std;

class Student {
  int rollNo; //instance variable
  public:
    void set_data() {
      rollNo = 20;
    }

  void display() {
    cout << "The rollNo is: " << rollNo << "\n";
  }
};

int main() {
  Student s;
  s.set_data();
  s.display();
  return 0;
}