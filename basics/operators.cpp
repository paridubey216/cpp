//Operators are used to perform operations on variables and values
/*C++ divides the operators into the following groups:
1.Arithmetic operators
2.Assignment operators
3.Comparison operators
4.Logical operators
5.Bitwise operators*/


/* 1)Arithmetic Operators
Arithmetic operators are used to perform common mathematical operations*/

int x = 10;
int y = 3;

cout << (x + y) << "\n"; // 13
cout << (x - y) << "\n"; // 7
cout << (x * y) << "\n"; // 30
cout << (x / y) << "\n"; // 3 (integer division)
cout << (x % y) << "\n"; // 1

int z = 5;
++z;
cout << z << "\n"; // 6
--z;
cout << z << "\n"; // 5
//Note: When dividing two integers in C++, the result will also be an integer. For example, 10 / 3 gives 3. If you want a decimal result, use float or double values, like 10.0 / 3
int x = 10;
int y = 3;
cout << (x / y) << "\n";   // Integer division, result is 3

double a = 10.0;
double b = 3.0;
cout << (a / b) << "\n";   // Decimal division, result is 3.333...

