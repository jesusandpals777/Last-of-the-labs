#include <iostream>
using namespace std;
int main()
{	
    int x;
  double array[1000];
  
  cout << "Please enter an integer between 0 and 999: " << endl;
  cin >> x;
  for(int i = 0; i<1000; i++)
  {
        array[i]=i*7.5;
  }
  if((x <= 1000) && (x >= 0))
  {
  cout << x << " is equivalent to the array position of: " << array[x] << endl;
  }
  else
  cout << "Input is out of range." << endl;
       
system("PAUSE");
return(0);
}
