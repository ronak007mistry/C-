//C++ Program to demonstrate local variables.
#include <iostream>
using namespace std;

class Student {
  public:
    void studentRollNo() {
      int rollNo = 20; //local variable rollNo
      rollNo += 5;
      cout << "The rollNo is: " << rollNo << "\n";
    }
};

int main() {
  Student s;
  s.studentRollNo();
  return 0;
}