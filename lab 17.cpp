#include <iostream>
using namespace std;


double dist(double, double);

int main()
{
    double dist1, dist2, difference;
    cout<<"Please enter a value: ";
    cin >> dist1;
    
    cout << "Please enter another value: ";
	cin >> dist2;  

 
    difference = dist(dist1, dist2);
    cout << "The distance between " << dist1  <<  " and " << dist2 << " is ";

    
	if (difference > 0)
	{
		cout << difference;
	}
	else 
	{
		cout << -(difference);
	}
	return 0;
}


double dist(double a, double b)
{
    double subt;
    subt = a - b;

    return subt;
}
