//C++ Program to demonstrate static variables.
//Auto incrementation of roll no using static variables.

#include<iostream>
using namespace std;

class Student {
  static int id; // static variable
  int roll_no;
  char name[50], course[20];
  public:
    void set_data();
    void display();
};

int Student::id = 1000;
void Student::set_data() {
  roll_no = ++id;
  cout << "Enter name of student: ";
  cin >> name;
  cout << "Enter course: ";
  cin >> course;
}

void Student::display() {
  cout << "\t" << roll_no << "\t" << name << "\t" << course << endl;
}

int main() {
  Student s[100];
  int n, ch, i;
  do {
    cout << "1-Enter details of students\n2-Display list\n3-Exit\n";
    cout << "Enter your choice: ";
    cin >> ch;
    switch (ch) {
    case 1:
      cout << "Enter number of students: ";
      cin >> n;
      for (i = 0; i < n; i++) {
        s[i].set_data();
      }
      break;
    case 2:
      cout << "---------------DETAILS OF STUDENTS---------------" << endl;
      cout << "\tROLL_NO\tNAME\tCOURSE\t\n";

      for (i = 0; i < n; i++) {
        s[i].display();
      }
      break;
    case 3:
      exit(0);
      break;
    default:
      cout << "Enter valid choice!" << endl;
    }
  } while (ch != 3);
  return 0;
}