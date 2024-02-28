#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // Problem Four in sheet
  int time_of_an_experiment_in_sec;
  int time_of_an_experiment_in_hours;
  int time_of_an_experiment_in_minutes;
  int remainding;

  cout << "Enter the time of an experiment in seconds \n";
  cin >> time_of_an_experiment_in_sec;

  time_of_an_experiment_in_hours = time_of_an_experiment_in_sec / 3600;
  cout << "Number of hours: " << time_of_an_experiment_in_hours << endl;

  remainding = time_of_an_experiment_in_sec % 3600;

  time_of_an_experiment_in_minutes = remainding / 60;

  cout << "Number of minutes: " << time_of_an_experiment_in_minutes << endl;
  remainding = remainding % 60;

  cout << "Number of seconds: " << remainding << endl;

  cout << "*******************************************************************************\n";
  cout << "The time of an experiment in accurate time " << time_of_an_experiment_in_hours << "H: " << time_of_an_experiment_in_minutes << "M: " << remainding << "S\n";
  return 0;
}
