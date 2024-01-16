#include <iostream>
using namespace std;
int main()
{
	cout<<"\t - Question 1 -\n";
	cout<<" Program for Arithmetic Operations\n";
	int n1,n2,n3,r;
	// Taking three integers as input from user
	cout<<"Enter three integers: "<<endl;
	cout<<"Number 1 :";
	cin>> n1;
	cout<<"Number 2 :";
	cin>> n2;
	cout<<"Number 3 :";
	cin>> n3;
	
	int choice;
	cout<<"1 For Addition"<<endl;
	cout<<"2 For Substraction"<<endl;
	cout<<"3 For Multiplication"<<endl;
	cout<<"4 For Division"<<endl;
	cout<<"Enter Choice : "<<endl;
	cin>> choice;
	switch (choice){
		case 1:
			cout<<"Result of Addition is: "<<n1+n2+n3;
			break;
		case 2:
			cout<<"Result of Subtraction is: "<<n1-n2-n3;
			break;
		case 3:
			cout<<"Result of Multiplication is: "<<n1*n2*n3;
			break;
		case 4:
			if (n2!=0 && n3!=0){
				r=n1/n2;
				cout <<"Result of Division is: " <<r<<endl;
			}
			else {
				cout<<"Division is not allowed!";}
			break;
		default:
			cout<<"Invalid Choice";
		return 0;
	}
}

