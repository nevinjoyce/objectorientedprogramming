#include <iostream>
using namespace std;
class employee {
	public:
	string name,addy;
	int year;
	void getdata()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<endl<<"Enter Year of Joining: ";
		cin>>year;
		cout<<endl<<"Enter Address: ";
		cin>>addy;
		cout<<endl;
	}
	void putdata()
	{
		cout<<name<<"\t"<<year<<"\t"<<addy<<endl;
	}
};
int main()
{
	employee c[3];
	int i;
	for(i=0;i<3;i++)
	{	
		cout<<"Enter Details of Employee "<<i+1<<": "<<endl;
		c[i].getdata();
	}
	cout<<endl<<endl<<"Name\tYear of Joining\tAddress "<<endl;
	for(i=0;i<3;i++)
		c[i].putdata();
	return 0;
}

		
