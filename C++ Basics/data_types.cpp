#include<iostream>

using namespace std;

int main() {

  int student_ID = 102; //to store integers we use int.
  char section_NO = 'A'; // to store characters we use char.
  bool isPresent = true; //to store the boolean values we use bool.

  float examScoreAverage = 92.76; //to store the decimal numbers we use float.
  double distanceToSchool = 12345.76; //double is same as float but with extra bytes of memory to store larger values.

  cout << "The size of int is: " << sizeof(int) << " Bytes" << endl;
  cout << "The size of char is: " << sizeof(char) << " Bytes" << endl;
  cout << "The size of bool is: " << sizeof(bool) << " Bytes" << endl;
  cout << "The size of float is: " << sizeof(float) << " Bytes" << endl;
  cout << "The size of double is: " << sizeof(double) << " Bytes" << endl;
  cout << "The size of long double is: " << sizeof(long double) << " Bytes" << endl;

}