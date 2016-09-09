#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  //temp string
  string temp_string;

  //temp int
  int temp_int;

  //grade
  int g1, g2, g3, g4, g5;

  //weight
  int w1, w2, w3, w4, w5;

  //gpa
  double gpa;

  cout << "Welcome to PFI GPA calculator\n";

  //begin first logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 1\n";

  cin >> temp_string;

  if(temp_string == "A")
    g1 = 5;
  else if(temp_string == "B")
    g1 = 4;
  else if(temp_string == "C")
    g1 = 3;
  else if(temp_string == "D")
    g1 = 2;
  else if(temp_string == "F")
    g1 = 1;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'";

    g1 = 1;
  }

  cout << "Enter hours (1..5) for your class number 1\n";

  cin >> temp;

  if((temp == "1") || (temp == "2") || (temp == "3") || (temp == "4") || (temp == "5"))
  {
    w1= (int) temp;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.";
    cout << "Your input was overridden as 1";

    w1 = 1;
  }

  //begin second logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 2\n";

  cin >> temp_string;

  if(temp_string == "A")
    g2 = 5;
  else if(temp_string == "B")
    g2 = 4;
  else if(temp_string == "C")
    g2 = 3;
  else if(temp_string == "D")
    g2 = 2;
  else if(temp_string == "F")
    g2 = 1;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'";

    g2 = 1;
  }

  cout << "Enter hours (1..5) for your class number 2\n";

  cin >> temp;

  if((temp == "1") || (temp == "2") || (temp == "3") || (temp == "4") || (temp == "5"))
  {
    w2= (int) temp;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.";
    cout << "Your input was overridden as 1";

    w2 = 1;
  }

  //begin third logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 3\n";

  cin >> temp_string;

  if(temp_string == "A")
    g3 = 5;
  else if(temp_string == "B")
    g3 = 4;
  else if(temp_string == "C")
    g3 = 3;
  else if(temp_string == "D")
    g3 = 2;
  else if(temp_string == "F")
    g3 = 1;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'\n";

    g3 = 1;
  }

  cout << "Enter hours (1..5) for your class number 3\n";

  cin >> temp;

  if((temp == "1") || (temp == "2") || (temp == "3") || (temp == "4") || (temp == "5"))
  {
    w3= (int) temp;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.";
    cout << "Your input was overridden as 1";

    w3 = 1;
  }

  //being fourth logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 4\n";

  cin >> g1;

  cin >> temp_string;

  if(temp_string == "A")
    g4 = 5;
  else if(temp_string == "B")
    g4 = 4;
  else if(temp_string == "C")
    g4 = 3;
  else if(temp_string == "D")
    g4 = 2;
  else if(temp_string == "F")
    g4 = 1;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'";

    g4 = 1;
  }

  cout << "Enter hours (1..5) for your class number 4\n";

  cin >> temp;

  if((temp == "1") || (temp == "2") || (temp == "3") || (temp == "4") || (temp == "5"))
  {
    w4= (int) temp;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.";
    cout << "Your input was overridden as 1";

    w4 = 1;
  }

  //being firth logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 5\n";

  cin >> temp_string;

  if(temp_string == "A")
    g5 = 5;
  else if(temp_string == "B")
    g5 = 4;
  else if(temp_string == "C")
    g5 = 3;
  else if(temp_string == "D")
    g5 = 2;
  else if(temp_string == "F")
    g5 = 1;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'";

    g5 = 1;
  }

  cout << "Enter hours (1..5) for your class number 5\n";

  cin >> temp;

  if((temp == "1") || (temp == "2") || (temp == "3") || (temp == "4") || (temp == "5"))
  {
    w5= (int) temp;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.";
    cout << "Your input was overridden as 1";

    w5 = 1;
  }

  gpa = (g1/w1) + (g2/w2) + (g3/w3) + (g4/w4) + (g5/w5);

  //calculate GPA
  cout << "Congratulations, your GPA was " << gpa;

  return 0;
}
