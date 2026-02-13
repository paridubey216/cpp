//syntax
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "HELLO WORLD!" ,, endl;
  return 0;
}

// 1) Variables
  // A variable is a named memory location that stores a value.
//
  int age = 21;
  double height = 5.9;
  char grade = 'A';
  bool isStudent = true;
  string name = "Rahul";

  cout << "\n--- Variables ---" << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Height: " << height << endl;
  cout << "Grade: " << grade << endl;
  cout << "Is Student: " << isStudent << endl;
 
  // 2) Identifiers
  // Identifier = name used for variables/functions/classes etc.
+  // Rules:
+  // - Can contain letters, digits, and underscore (_)
+  // - Cannot start with a digit
+  // - No spaces or special symbols
+  // - Case-sensitive (age and Age are different)
+  int roll_number = 101;      // valid identifier
+  int studentMarks = 95;      // valid identifier
+  // int 2marks = 50;         // invalid: starts with a digit
+  // int my marks = 60;       // invalid: contains space
 
+  cout << "\n--- Identifiers ---" << endl;
+  cout << "roll_number: " << roll_number << endl;
+  cout << "studentMarks: " << studentMarks << endl;
 
+  // 3) Data Types
+  // Common C++ data types:
+  // int    -> whole numbers
+  // float  -> decimal numbers (single precision)
+  // double -> decimal numbers (double precision)
+  // char   -> single character
+  // bool   -> true/false
+  // string -> text
+  float temperature = 36.5f;
+
+  cout << "\n--- Data Types ---" << endl;
+  cout << "int age = " << age << endl;
+  cout << "float temperature = " << temperature << endl;
+  cout << "double height = " << height << endl;
+  cout << "char grade = " << grade << endl;
+  cout << "bool isStudent = " << isStudent << endl;
+  cout << "string name = " << name << endl;
+
+  return 0;
+}



