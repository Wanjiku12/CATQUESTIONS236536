//calculating  area and volume of a cylinder
#include<iostream>
using namespace std;
int main(){
    int volume, area, radius, height;
    const int pie =3.141592;
    // initializing the variables

area= 2*pie*radius*height +2 *pie*radius* radius;
volume= pie*radius*radius*height;
// Execution of the calculations
cout<<"Input the value of the radius"<<endl;
cin>>radius;
cout<<"Input the value of the height"<<endl;
cin>>height;
cout<<"The area of the cylinder is: "<< area<<endl;
cout<<"The volume is : "<< volume;
    return 0;
}