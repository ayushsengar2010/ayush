#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a,b,c,d,e,f,g,h,rad,cent_x,cent_y,cent_z,cent_plane_dis,circl_rad,circl_area;
    cout<<"Enter for plane ax+by+cz+d=0"<<endl;
    cout <<"Enter your a: ";
    cin>>a;
    cout <<"Enter your b: ";
    cin>>b;
    cout <<"Enter your c: ";
    cin>>c;
    cout <<"Enter your d: ";
    cin>>d;
    cout<<"Enter for Sphere x^2+y^2+z^2+ex+fy+gz+h=0"<<endl;
    cout <<"Enter your e: ";
    cin>>e;
    cout <<"Enter your f: ";
    cin>>f;
    cout <<"Enter your g: ";
    cin>>g;
    cout <<"Enter your h: ";
    cin>>h;    
    rad=sqrt(-h+pow((e/2),2)+pow((f/2),2)+pow((g/2),2));
    cent_x=-e/2;
    cent_y=-f/2;
    cent_z=-g/2;
    cent_plane_dis=fabs(a*cent_x+b*cent_y+c*cent_z+d)/sqrt(pow(a,2)+pow(b,2)+pow(c,2));
    circl_rad=sqrt(pow(rad,2)-pow(cent_plane_dis,2));
    circl_area=3.14*pow(circl_rad,2);
    cout<<circl_area;
    //centre of points is also e/2 and f/2 and g/2
    return 0;
}