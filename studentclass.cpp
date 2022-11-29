#include <iostream>
using namespace std;
class student {
	public:
		int rno,i;
		string sname;
		string email;
		string contact;
		float semgpa[8];
		float cgpa;
		void getdata()
		{
			cout<<"Enter Roll Number: ";
			cin>>rno;
			cout<<endl<<"Enter Student Name: ";
			cin>>sname;
			cout<<endl<<"Enter Contact Number: ";
			cin>>contact;
			cout<<endl<<"Enter Email Address: ";
			cin>>email;
			for(i=0;i<8;i++)
			{
				cout<<endl<<"Enter Semester "<<i+1<<" Grade: ";
				cin>>semgpa[i];
			}
		};
		void putdata()
		{
			cout<<endl<<"Roll No.: "<<rno;
			cout<<endl<<"Student Name: "<<sname;
			cout<<endl<<"Contact No.: "<<contact;
			cout<<endl<<"Email: "<<email;
			for(i=0;i<8;i++)
				cout<<endl<<"Semester "<<i<<" Grade: "<<semgpa[i];
			cout<<endl<<"Cumulative GPA: "<<cgpa<<endl;
		};
		void compute()
		{
			int sum=0;
			for(i=0;i<8;i++)
				sum+=semgpa[i];
			cgpa=sum/8;
		};
};
int main()
{
	student a;
	a.getdata();
	a.compute();
	a.putdata();
	return 0;
}

				
