//#include<iostream>
//using namespace std;
//class MCA{
//    public:
//    string Student_name;
//    void printname(){
//        cout<<"Student name is: "<<Student_name;
//    }
//};
//int main()
//{
//    MCA obj1;
//    obj1.Student_name="Sukaina";
//    obj1.printname();
//    return 0;
//
//}

#include<iostream>
using namespace std;

class MCA{
	public:
		string Stud_name;
		int S_id;
		
		void printid(){ 
		cout<<"Student id is:"<<S_id;
		}
		
		void printname();
};
		
void MCA::printname(){
	cout<<"Student Name is: "<<Stud_name;
}

int main(){
	MCA obj1;
	obj1.S_id=1;
	obj1.Stud_name="Sukaina";
	
	obj1.printid();
	cout<<endl;
	
	obj1.printname();
	cout<<endl;
}
