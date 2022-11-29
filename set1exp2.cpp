#include <iostream>
using namespace std;
static int count=1;
class student{
	public:
		int rno,i,c;
		string sname;
		student()
		{
			rno=count++;
		}
		~student()
		{
			cout<<"Object has been DESTROYED"<<endl;
		}
		void getdata()
		{
			cout<<endl<<"Enter Student Name: ";
			cin>>sname;
			cout<<endl<<"Enter Contact Number: ";
			cin>>contact;
			cout<<endl<<"Enter Email Address: ";
			cin>>email;
			for(i=0;i<8;i++)
			{
				cout<<endl<<"Enter Semester "<<i+1<<" GPA: ";
				cin>>semgpa[i];
			}
		}
		void putdata()
		{
			cout<<endl<<"Roll No.: "<<rno;
			cout<<endl<<"Student Name: "<<sname;
			cout<<endl<<"Contact No.: "<<contact;
			cout<<endl<<"Email: "<<email;
			for(i=0;i<8;i++)
				cout<<endl<<"Semester "<<i<<" GPA: "<<semgpa[i];
			c=compute();
			cout<<endl<<"Cumulative GPA: "<<c<<endl;
		}
	private:
		string contact;
		string email;
		float semgpa[8];
		float cgpa;
		float compute()
		{
			int sum=0;
			for(i=0;i<8;i++)
				sum+=semgpa[i];
			cgpa=sum/8;
			return cgpa;
		}
};
int main()
{
	int j,n;
	cout<<"How many students are having their data entered?: ";
	cin>>n;
	student a[n];
	for(j=0;j<n;j++)
	{
		a[j].getdata();
		a[j].putdata();
	}
	return 0;
}
		
		
