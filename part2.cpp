#include <iostream>

using namespace std;

int main()
{
  int a;
  cout<<" Enter any number as you wish: ";
  cin >> a;

  a = ((a * 2) + 10 )/2-a;
  
  cout << "\n Your favroite number is: " << a << endl;
  return 0;

}