#include<stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;
void circle();
void rect();
void triangle();
void menu(){
int selector;
cout << setw (25);
cout<<"Menu"<<endl;
cout << setw (27);
cout<<"[1]Circle"<<endl;
cout << setw (25);
cout<<"[2]Rect"<<endl;
cout << setw (29);
cout<<"[3]Triangle"<<endl;
cin>> selector;
system("cls");
switch(selector){
case 1:circle();break;
case 2:rect();break;
case 3:triangle();break;
default:
	menu();break;


}

}

//func circle
void circle(){
double	pi = 3.14;
int rad = 0;

int selector;

 cout<<"Radius of circle? :";
 cin>>rad;
 system("cls");
int formula = pi * (rad * rad);
 cout<<"Area of the circle is :";
 cout<<formula<<endl;

system("pause");
system("cls");
menu();
}
 //func rect
void rect(){
int l = 0;
int L = 0;

int selector;

 cout<<"First side :";
 cin>>l;

  cout<<"Second side :";
 cin>>L;
 system("cls");
 int formula = l*L;
 cout<<"Area of the rect is :";
 cout<<formula<<endl;
system("pause");
system("cls");
menu();
}

//func triangle
void triangle(){
int base = 0;
int hei = 0;

int selector;

 cout<<"Triangle base :";
 cin>>base;
  cout<<"Triangle height :";
 cin>>hei;
 system("cls");
 int formula = (1/2)*base*hei;
 cout<<"Area of the triangle is :";
 cout<<formula<<endl;

system("pause");
system("cls");
menu();
}

int main(){
menu();

}


































