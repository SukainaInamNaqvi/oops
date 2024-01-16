#include <iostream>
#include <string.h>
using  namespace std;

class students{
	public:
		int student_id;
		char name[25];
		int age;
		int marks[3];
		
	void enterInfo(){
		cout << "Enter the Student Id: ";
		cin>>student_id;
		
		cout << "Enter name of the Student: ";
		cin>>name;
		
		cout << "Enter the age of the Student: ";
		cin>>age;
		cout << "Marks of Student are:"<<endl;
		for(int i=0;i<3;i++){
			cout << "Enter the marks"<<i+1<<": ";
			cin>>marks[i];
		}
		cout << "\nDetails Entered Successfully\n\n\n\n";
	}
	void getInfo(){
		cout << "Student id: "<<student_id<<endl;
		cout << "Name: "<<name<<endl;
		cout << "Age: "<<age<<endl;
		for(int i=0;i<3;i++){
			cout << "Marks: "<<marks[i]<<endl;	
		}
	}

	
};

int main(){
	int num_of_students;
	cout << "**********Students Records**********"<<endl;
	cout << "Enter Number of Students: ";
	cin>>num_of_students;
	
	students s[num_of_students];
	
	for(int i=0;i<num_of_students;i++){
		s[i].enterInfo();
	}
	
	for(int j=0;j<num_of_students;j++){
		s[j].getInfo();	
	}
		
}

