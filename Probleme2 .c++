#include <iostream>
using namespace std;

int main()
{
  // Problem Two in sheet
  double Num1, Num2;
  string symbol;
  bool onther;
  cout << "Are you want to do onther operation or not write 1 or 0\n";
  cin >> onther;

  while (onther == true)
  {
    cout << "please enter first number\n";
    cin >> Num1;

    cout << "please enter Secound number\n";
    cin >> Num2;

    cout << "Enter your operation Symbol\n";
    cin >> symbol;
    if (symbol == "+")
    {
      cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    }
    else if (symbol == "-")
    {
      cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
    }
    else if (symbol == "/")
    {
      cout << Num1 << "/" << Num2 << " = " << Num1 / Num2 << endl;
    }
    else if (symbol == "*")
    {
      cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
    }
    else if (symbol == "%")
    {
      cout << static_cast<int>(Num1) << " % " << static_cast<int>(Num2) << " = " << static_cast<int>(Num1) % static_cast<int>(Num2) << endl;
    }
    cout << "Are you want to do onther operation or not (write 1 or 0)\n";
    cin >> onther;
  }
}
