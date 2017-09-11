#include <iostream>
#include <string>

using namespace std;

class Student {
  string name, wNum, major;
  int cHours;
public:
  Student(string n, string w, string m) {
    name = n;
    wNum = w;
    major = m;
    cHours = 0;
  }
  Student(string n, string w) {
    name = n;
    wNum = w;
    major = "Undeclared";
    cHours = 0;
  }
  string getName() {return name;}
  string getNum() {return wNum;}
  string getMajor() {return major;}
  void setHours(int hours) {cHours = hours;}
  int getHours() {return cHours;}
};

int main() {
  // create two students as example
  Student jared("Jared", "W1234567", "Computer Science");
  Student patrick("Patrick", "W7654321");
  //set credit hours
  jared.setHours(15);
  patrick.setHours(15);
  // display students credentials
  cout << jared.getName() << "\t" << jared.getNum() << "\t" <<
  jared.getMajor() + "\t" << jared.getHours() << endl;
  cout << patrick.getName() << "\t" << patrick.getNum() << "\t" <<
  patrick.getMajor() + "\t" << patrick.getHours() << endl;
  return 0;
}
