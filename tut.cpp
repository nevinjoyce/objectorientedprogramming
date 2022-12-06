#include <iostream>
using namespace std;
static int count1=1,count2=1,count3=1;
class student {
	public:
		int stdid;
		string name, email,phone;
		int sub1ia,sub2ia,sub3ia;
		int sub1ese,sub2ese,sub3ese;
		int sub1att,sub2att,sub3att;
		int total;
		int cgpa;
		bool eligiblestatus;
		student()
		{
			stdid=count1++;
			sub1ia=sub2ia=sub3ia=sub1ese=sub2ese=sub3ese=0;
		}
		void getdata()
		{
			cout<<"\nEnter Student Name: ";
			cin>>name;
			cout<<"\nEnter Phone Number: ";
			cin>>phone;
			cout<<"\nEnter Email: ";
			cin>>email;
		}
		void displaycard()
		{
			cout<<"Student ID: "<<stdid<<endl<<"Name: "<<name<<endl<<"Phone: "<<phone<<endl<<"email: "<<email<<endl<<"Subject 1:\tInternal Marks: "<<sub1ia<<"\tEnd Semester Exam Marks: "<<sub1ese<<"\t Attendance: "<<sub1att<<endl<<"Subject 2:\tInternal Marks: "<<sub2ia<<"\tEnd Semester Exam Marks: "<<sub2ese<<"\t Attendance: "<<sub2att<<endl<<"Subject 3:\tInternal Marks: "<<sub3ia<<"\tEnd Semester Exam Marks: "<<sub3ese<<"\t Attendance: "<<sub3att<<endl<<"Total Marks: "<<total<<"\tCGPA: "<<cgpa<<endl<<"Eligible Status: "<<eligiblestatus<<endl;	
		}
};
class subteacher {
	public:
		int empid;
		string ename, ephone, empemail;
		subteacher()
		{
			empid=count2++;
		}
		void getdata1()
		{
			cout<<"\nEnter Employee Name: ";
			cin>>ename;
			cout<<"\nEnter Phone Number: ";
			cin>>ephone;
			cout<<"\nEnter Email: ";
			cin>>empemail;
		}
		
		
	

