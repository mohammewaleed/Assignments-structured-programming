#include <iostream>
using namespace std;

int main()
{
  // Problem Two in sheet
  double Num1, Num2;
  string symbol;
  bool continueOperation;
  cout << "Are you want to do onther operation or not write 1 or 0\n";
  cin >> continueOperation;

  while (continueOperation)
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
      if (Num2 != 0)
        cout << static_cast<int>(Num1) << " % " << static_cast<int>(Num2) << " = " << static_cast<int>(Num1) % static_cast<int>(Num2) << endl;
    }
    else
    {
      cout << "Error: Division by zero is not allowed." << endl;
    }
    cout << "Enter 1 for Yes, 0 for No.\n";
    cin >> continueOperation;
  }
  cout << "Exiting program. Goodbye!" << endl;
  return 0;
}
