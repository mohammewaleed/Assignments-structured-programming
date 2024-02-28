#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // Problem Three in sheet

  int number1, number2;
  float Arithmetic_Average, Geometric_Mean;

  cout
      << "please enter number one \n";
  cin >> number1;

  cout << "please enter number two \n";
  cin >> number2;

  double Harmonic_Mean = (2.0 / ((1.0 / number1) + (1.0 / number2)));

  cout << "Arithmetic Average: " << (number1 + number2) / 2 << endl;

  cout << "Geometric Mean: " << sqrt(number1 * number2) << endl;
  cout << "Harmonic Mean: " << Harmonic_Mean << endl;
}
