#include <iostream>
using namespace std;
class complex {
	public:
	int real, imag;
	void getdata()
	{
		cout<<"enter real part of the number: ";
		cin>>real;
		cout<<endl<<"enter imaginary part of the number: ";
		cin>>imag;
	}
	void putdata()
	{
		cout<<real<<"+"<<imag<<"i";
	}
	complex add(complex x, complex y, complex w)
	{
		complex z;
		z.real=x.real+y.real+w.real;
		z.imag=x.imag+y.imag+w.imag;
		return z;
	}
	complex subtract(complex x, complex y)
	{	
		complex q;
		q.real=x.real-y.real;
		q.imag=x.imag-y.imag;
		return q;
	}
};
int main()
{
	complex c1,c2,c3,c4;
	cout<<endl<<"Enter complex numbers to add..."<<endl;
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4=c4.add(c1,c2,c3);
	cout<<"Sum: ";
	c4.putdata();
	cout<<endl<<"Enter complex numbers to subtract..."<<endl;
	c1.getdata();
	c2.getdata();
	c3=c3.subtract(c1,c2);
	cout<<"Difference: ";
	c3.putdata();
	cout<<endl;
	return 0;
}

	

	
