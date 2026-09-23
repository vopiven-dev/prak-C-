#include <iostream>
using namespace std;

int main()
{
	double X, Y, A, B, Q, Z, I; // змінні 
	cout << "Enter weight A and price X of candy \n \n weight candy = A \n price of candy = X   "<<  "\n;

	cin >> X >> A;

    Q = A / X;	// формула 

	
	cout << "Enter weight Y and price B of cookie \n weight cookie = Y \n price of cookie = B   " << "\n" ;

	cin >> Y >> B;

	Z = B / Y; // формула 


	cout << "  The difference in the cost of candies and cookies =   " <<  "\n";
   
	I = Q / Z;  // формлуа 

	cout << "price per kg of candy " << Q <<"\n";
	cout << "Price per kg of cookies " << Z <<"\n";
	cout << " \n  The difference in the cost of candies and cookies =  " << I << "\n";
	

	return 0;
}