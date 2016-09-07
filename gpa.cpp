#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  //grade
  string g1, g2, g3, g4, g5;
  //weight
  int w1, w2, w3, w4, w5;

  cout << "Welcome to PFI GPA calculator\n";

  //begin first logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 1\n";

  cin >> g1;

  if(g1 == "A" || g1 == "B" || g1 == "C" || g1 == "D" || g1 == "F")
  {
    cout << "";
  }
  else
  {
    cout << "You did not enter A or B or C or D or F, please try again\n";
  }
  cout << ""

  // Calculate mean of 4 values
  double mean = (n1 + n2 + n3 + n4) / 4;

  // Calculate variance of 4 values
  double variance = (pow((n1 - mean),2) * pow((n2 - mean),2) * pow((n3 - mean),2) * pow((n4 - mean),2)) / 4;

  // Print the output
  cout << "mean = " << mean << endl;
  cout << "variance = " << variance << endl;
  return 0;
}

