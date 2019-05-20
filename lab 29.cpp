#include <iostream>

using namespace std;

int main() 
{
   double x,y;
   double *ptrX, *ptrY;
  
   
   ptrX = &x;
   ptrY = &y;
  
   
   cout<<"x value = "<<(*ptrX)<<"\tmemory location = "<<(ptrX)<<endl;
  
   
   cout<<endl;
   cout<<"Enter value for x: ";
   cin>>(*ptrX);
  
   
   cout<<"x value = "<<(*ptrX)<<"\tmemory location = "<<(ptrX)<<endl;
   cout<<endl;
  
   *ptrY = 3 * (*ptrX);
   cout<<endl;
  
   
   cout<<"y value = "<<(*ptrY)<<"\tmemory location = "<<(ptrY)<<endl;
   cout<<endl;
  
   cout<<"(x + y) / 7 = "<<(((*ptrX) + (*ptrY))/7)<<endl;
   cout<<endl;
  
   *ptrY = 4;
   cout<<endl;
  
   cout<<"y value = "<<(*ptrY)<<"\tmemory location = "<<(ptrY)<<endl;
   cout<<endl;
  
   cout<<"(x + y) / 7 = "<<(((*ptrX) + (*ptrY))/7)<<endl;
   cout<<endl;
  
   return 0;
}
