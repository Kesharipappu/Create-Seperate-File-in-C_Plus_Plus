#include<iostream>
using namespace std;

class Shape
{
	protected:
		double x, y;
	public:
		virtual void get_data() = 0;
		virtual void display_area() = 0;	
};

class Circle : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Radius of Circle : ";
			cin>>x;
		}
		void display_area()
		{
			double areaOfCircle;
			areaOfCircle = 3.14 * x * x;	
			cout<<"Area of Circle is : "<<areaOfCircle<<endl;
		}	
};

class Rectangle : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Length and Width of Rectangle : ";
			cin>>x>>y;	
		}	
		void display_area()
		{
			double areaOfRectangle;
			areaOfRectangle = x * y;
			cout<<"Area of Rectangle is : "<<areaOfRectangle<<endl;
		}
};

class Triangle : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Base and Height of Triangle : "<<endl;
			cin>>x>>y;
		}
		void display_area()
		{
			double areaOfTriangle;
			areaOfTriangle = (x * y)/2;
			cout<<"Area of Triangle is : "<<areaOfTriangle<<endl;
		}
};

class Square : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Side of Square : ";
			cin>>x;	
		}
		void display_area()
		{
			double areaOfSquare;
			areaOfSquare = x * x;
			cout<<"Area of Square is : "<<areaOfSquare<<endl;	
		}	
};
