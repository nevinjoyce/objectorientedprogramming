#include <iostream>
using namespace std;
class area {
	public:
	int l,b;
	void setdim(int len,int bre)
	{
		l=len;
		b=bre;
	}
	int getarea()
	{
		int a;
		a=l*b;
		return a;
	}
};
int main()
{
	area x;
	int y;
	x.setdim(3,4);
	y=x.getarea();
	cout<<"Area of the Rectangle is: "<<y<<endl;
}

	
		
		 	
