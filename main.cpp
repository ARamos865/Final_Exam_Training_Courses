#include <iostream>
#include <string>

//training courses

using namespace std;

struct course_A
{
  string firstName[100];
  string lastName[100];
  int empID[100];
  int size = 0;
};

struct course_B
{
  string firstName[100];
  string lastName[100];
  int empID[100];
  int size = 0;
};

struct course_C
{
  string firstName[100];
  string lastName[100];
  int empID[100];
  int size = 0;
};

struct course_D
{
  string firstName[100];
  string lastName[100];
  int empID[100];
  int size = 0;
};

int main()
{
  course_A A;
  course_B B;
  course_C C;
  course_D D;

  int menu = 5;
  while(menu!=0)
  {
    cout << "Please select the training course for registration: " << endl;
    cout << "1: Course A" << endl;
    cout << "2: Course B" << endl;
    cout << "3: Course C" << endl;
    cout << "4: Course D" << endl;
    cout << "0: Enter 0 to stop registration." << endl;

    cin >> menu;

    switch(menu)
    {
      case 1: 
      cout << "\nPlease enter your first name: ";
      cin >> A.firstName[A.size];
      cout << "\nPlease enter your last name: ";
      cin >> A.lastName[A.size];
      cout << "\nPlease enter your employee ID number: ";
      cin >> A.empID[A.size];
      A.size++;
      break;

      case 2: 
      cout << "\nPlease enter your first name: ";
      cin >> B.firstName[B.size];
      cout << "\nPlease enter your last name: ";
      cin >> B.lastName[B.size];
      cout << "\nPlease enter your employee ID number: ";
      cin >> B.empID[B.size];
      B.size++;
      break;

      case 3:
      cout << "\nPlease enter your first name: ";
      cin >> C.firstName[C.size];
      cout << "\nPlease enter your last name: ";
      cin >> C.lastName[C.size];
      cout << "\nPlease enter your employee ID number: ";
      cin >> C.empID[C.size];
      C.size++;
      break;

      case 4:
      cout << "\nPlease enter your first name: ";
      cin >> D.firstName[D.size];
      cout << "\nPlease enter your last name: ";
      cin >> D.lastName[D.size];
      cout << "\nPlease enter your employee ID number: ";
      cin >> D.empID[D.size];
      D.size++;
      break;

      case 0:
      cout <<"\nRegistration exited." << endl;
      break;

      default:
      cout << "Wrong selection! Please try again." << endl;

    }
  }

  cout << endl;

  cout <<"\nHere is a list of the registered employees: " << endl;
  cout << "1: Course A: " << endl;

  for(int i = 0; i < A.size; i++)
  {
    cout << "First Name: " << A.firstName[i] << endl;
    cout << "Last Name: " << A.lastName[i] << endl;
    cout << "Employee ID Number: " << A.empID[i] << endl;
    cout << endl;
  }

  cout <<"\nHere is a list of the registered employees: " << endl;
  cout << "2: Course B: " << endl;

  for(int i = 0; i < B.size; i++)
  {
    cout << "First Name: " << B.firstName[i] << endl;
    cout << "Last Name: " << B.lastName[i] << endl;
    cout << "Employee ID Number: " << B.empID[i] << endl;
    cout << endl;
  }

  cout <<"\nHere is a list of the registered employees: " << endl;
  cout << "3: Course C: " << endl;

  for(int i = 0; i < C.size; i++)
  {
    cout << "First Name: " << C.firstName[i] << endl;
    cout << "Last Name: " << C.lastName[i] << endl;
    cout << "Employee ID Number: " << C.empID[i] << endl;
    cout << endl;
  }

  cout <<"\nHere is a list of the registered employees: " << endl;
  cout << "4: Course D: " << endl;

  for(int i = 0; i < D.size; i++)
  {
    cout << "First Name: " << D.firstName[i] << endl;
    cout << "Last Name: " << D.lastName[i] << endl;
    cout << "Employee ID Number: " << D.empID[i] << endl;
    cout << endl;
  }

  return 0;

}