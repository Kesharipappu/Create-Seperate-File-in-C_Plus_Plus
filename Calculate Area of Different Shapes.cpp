#include<iostream>
using namespace std;
#include "shape.h"

int main()
{
	Circle cir;
	Rectangle rect;
	Triangle tri;
	Square sqr;
	
	Shape *shp[4];
	shp[0] = &cir;
	shp[1] = &rect;
	shp[2] = &tri;
	shp[3] = &sqr;
	
	cout<<"<-----------Enter Area of Different Shapes----------->"<<endl;
	cout<<"Please Select Your Choice : "<<endl;
	cout<<"1: Area of Circle"<<endl;
	cout<<"2: Area of Rectngle"<<endl;
	cout<<"3: Area of Triangle"<<endl;
	cout<<"4: Area of Square"<<endl;
	int choice;
	cout<<"Enter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			shp[0]->get_data();
			shp[0]->display_area();
			break;
		case 2:
			shp[1]->get_data();
			shp[1]->display_area();
			break;
		case 3:
			shp[2]->get_data();
			shp[2]->display_area();
			break;
		case 4:
			shp[3]->get_data();
			shp[3]->display_area();
			break;
		default:
			cout<<"Invalid Input"<<endl;
	}
	
	return 0;
	
}

