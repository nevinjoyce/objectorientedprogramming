#include <iostream>
using  namespace std;
static int count=1;
class employee{
	public:
		int eno;
		string ename;
		float basic,da,it,netsalary,n;
		employee()
		{
			eno=count++;
		}
		void getdata()
		{
			cout<<"Enter Employee Name: ";
			cin>>ename;
			cout<<endl<<"Enter Basic Salary: ";
			cin>>basic;
		}
		void putdata()
		{
			cout<<endl<<"Employee No.: "<<eno;
			cout<<endl<<"Employee Name: "<<ename;
			n=computenetsalary();
			cout<<endl<<"Net Salary: "<<n<<endl<<endl;
		}
		private:
		int computenetsalary()
		{
			da=basic*0.52;
			if (basic<10000)
				it=0;
			else if (basic<20000)
				it=basic*0.1;
			else if (basic<30000)
				it=basic*0.2;
			else
				it=basic*0.3;
			netsalary=(basic+da)-it;
			return netsalary;
		}
};
int main()
{
	int i,n;
	cout<<endl<<"How many employees are having their data entered? ";
	cin>>n;
	employee a[n];
	for(i=0;i<n;i++)
	{
		a[i].getdata();
		a[i].putdata();
	}
	return 0;
}
	
