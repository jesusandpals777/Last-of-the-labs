#include <iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class PetRecord
{
    private:
		string name;
   		int age;//in years
  		double weight;//in pounds
  	
  	public:
  		virtual void print();
    	PetRecord(string initialName, int initialAge, double initialWeight);
    	void set(string newName, int newAge, double newWeight);
    	PetRecord(string initialName);
    	void setName(string newName);
    	PetRecord(int initialAge);
    	void setAge(int newAge);
    	PetRecord(double initialWeight);
    	void setWeight(double newWeight);
    	PetRecord();
    	string getName();
    	int getAge();
    	double getWeight();
    	
};
    void PetRecord::print( )
    {
        cout <<  "Name: " << name + " Age: " << age << " years"
                       << "\nWeight: " << weight << " pounds";
    }

    PetRecord::PetRecord(string initialName, int initialAge, 
                                          double initialWeight)
    {
        name = initialName;
        if ((initialAge < 0) || (initialWeight < 0))
        {
            cout << "Error: Negative age or weight.";
            exit(1);
        }
        else
        {
            age = initialAge;
            weight = initialWeight;
        }
    }

    void PetRecord::set(string newName, int newAge, double newWeight)
    {
        name = newName;
        if ((newAge < 0) || (newWeight < 0))
        {
            cout << "Error: Negative age or weight." << endl;
            exit(1);
        }
        else
        {
            age = newAge;
            weight = newWeight;
        }
    }

     PetRecord::PetRecord(string initialName)
    {
        name = initialName;
        age = 0;
        weight = 0;
    } 

    void PetRecord::setName(string newName)
    {
        name = newName; 
    }

    PetRecord::PetRecord(int initialAge)
    {
        name = "No name yet.";
        weight = 0;
        if (initialAge < 0)
        {
            cout << "Error: Negative age." << endl;
            exit(1);
        }
        else
            age = initialAge;
    }

    void PetRecord::setAge(int newAge)
    {
        if (newAge < 0)
        {
            cout << "Error: Negative age." << endl;
            exit(1);
        }
        else
            age = newAge;
    }

    PetRecord::PetRecord(double initialWeight)
    {
        name = "No name yet";
        age = 0;
        if (initialWeight < 0)
        {
            cout << "Error: Negative weight." <<endl;
            exit(1);
        }
        else
            weight = initialWeight;
    }

    void PetRecord::setWeight(double newWeight)
    {
        if (newWeight < 0)
        {
            cout << "Error: Negative weight." << endl;
            exit(1);
        }
        else
            weight = newWeight;
    }

    PetRecord::PetRecord( )
    {
        name = "No name yet.";
        age = 0;
        weight = 0; 
    }

    string PetRecord::getName( )
    {
        return name;
    }

    int PetRecord::getAge( )
    {
        return age;
    }

    double PetRecord::getWeight( )
    {
        return weight;
    }

class DogRecord:public PetRecord
{
	private:
	bool hasLongHair;
	
	
	public:
		DogRecord();
		DogRecord(bool initialHasLongHair);
		DogRecord(bool initialHasLongHair,string initialName, int initialAge, double initialWeight)
		:PetRecord(initialName, initialAge, initialWeight){}
		void setLongHair(bool newHasLongHair);
		bool getLongHair();
		 //PetRecord::print();
	
	
};
DogRecord::DogRecord()
{
	cout<<"Hair length: N/A "<<endl;
}

DogRecord::DogRecord(bool initialHasLongHair)
{
	setLongHair(initialHasLongHair);
}
void DogRecord::setLongHair(bool newHasLongHair)
{
	hasLongHair=newHasLongHair;
}
bool DogRecord::getLongHair()
{
	return hasLongHair;
}
class CatRecord:public PetRecord
{
	private:
	bool hasLongHair;
	
	public:
		//void print();
		CatRecord();
		CatRecord(bool initialHasLongHair);
		CatRecord(bool initialHasLongHair,string initialName, int initialAge, double initialWeight)
		:PetRecord(initialName, initialAge, initialWeight){}
		void setLongHair(bool newHasLongHair);
		bool getLongHair();
};
/*void CatRecord::print()
{
	if(getLongHair()==true)
	{
		cout<<"Hair: long"<<endl;	
	}
	else if(getLongHair()==false)
	{
		cout<<"Hair: short"<<endl;
	}
	else 
	cout<<"Hair: N/A"<<endl;
		
}*/
CatRecord::CatRecord()
{
	cout<<"Hair length: N/A "<<endl;
}
CatRecord::CatRecord(bool initialHasLongHair)
{
 setLongHair(initialHasLongHair);   
}
void CatRecord::setLongHair(bool newHasLongHair)
{
	hasLongHair=newHasLongHair;
}
bool CatRecord::getLongHair()
{
 return hasLongHair;   
}
class BirdRecord:public PetRecord
{
	private:
	int numFeathers;
	
	public:
		BirdRecord();
		BirdRecord(int initialNumFeathers,string initialName, int initialAge, double initialWeight)
		:PetRecord(initialName, initialAge, initialWeight){}
		BirdRecord(int initialNumFeathers);
		void setNumFeathers(int newNumFeathers);
		int getNumFeathers();
};
BirdRecord::BirdRecord()
{
	cout<<"Number of feathers: 0"<<endl;
}
BirdRecord::BirdRecord(int initialNumFeathers)
{
    setNumFeathers(initialNumFeathers);   
}
void BirdRecord::setNumFeathers(int newNumFeathers)
{
    if(newNumFeathers<0)
    {
      cout<<"The number of feathers cannot be negative"<<endl;  
    }
    else
    numFeathers=newNumFeathers;
}
int BirdRecord::getNumFeathers()
{
 return numFeathers;   
}
int main()
{
	string input;
	PetRecord* petPtr;
	
	cout<<"Do you want a cat, dog, or bird: ";
	cin>>input;
	
	if(toupper(input.at(0))=='C')
	{
		petPtr=new CatRecord();
	}
	else if(toupper(input.at(0))=='D')
	{
		petPtr=new DogRecord();
	}
	else
	{
		petPtr=new BirdRecord();
		
	}
	petPtr->print();
	
	system("pause");
	return 0;
}
