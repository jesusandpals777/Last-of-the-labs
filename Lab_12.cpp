#include <iostream>

#include <iomanip>

using namespace std;

int main()

{

int m;

int arr[m][m]

for(int m=1;m<=10;m++){

cout << setw(5) << m;

}

cout<< endl;

cout << "-----------------------------------------------------" << endl;

for (int i = 1; i <=10; i++) { //initiation

for (int j = 1; j <= 10; j++)

{

m = i * j;

arr[i-1][j-1]=m;

}

}

for (int i = 1; i <= 10; i++) { //initiation

for (int j = 1; j <= 10; j++)

{

if (j == 1)

cout << i << "|";

m = arr[i-1][j-1];

cout << setw(5) << m;

}

cout << endl;

}

return(0);

}
    
    
    
    
    
    
    
    system("PAUSE");
}
