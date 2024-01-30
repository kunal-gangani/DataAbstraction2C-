/*
1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations
Output:
Enter Radius for Circle : 6
 Area of Circle is : 113.04
Enter Height for Triangle : 5
Enter Breadth for Triangle : 6
 Area of Triangle is : 15
Enter Length for Rectangle : 2
Enter Width for Rectangle : 5
 Area of Rectangle is : 10
*/
#include<iostream>
using namespace std;
class Area{
	public:
		int r;
		int h;
		int b;
		int l;
		int w;
		void Calculate();
};
class Output : public Area{
	public:
		float tri;
		float rect;
		float cir;
		void Calculate(){
			cout<<"Enter Radius for Circle : ";
			cin>>r;
			cir=3.14*(r*r);
			cout<<" Area of Circle is : "<<cir<<endl;
			cout<<"Enter Height for Triangle : ";
			cin>>h;
			cout<<"Enter Breadth for Triangle : ";
			cin>>b;
			tri=(h*b)/2;
			cout<<" Area of Triangle is : "<<tri<<endl;
			cout<<"Enter Length for Rectangle : ";
			cin>>l;
			cout<<"Enter Width for Rectangle : ";
			cin>>w;
			rect=l*w;
			cout<<" Area of Rectangle is : "<<rect<<endl;
		}
};
int main(){
	Output o;
	o.Calculate();
	return 0;
}
