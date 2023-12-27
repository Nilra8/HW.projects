#include <iostream>

using namespace std;

int main() {


int x,y,z,result1,result2;

cout<<"please enter a number for x:";
cin>> x;
cout<<"please enter a number for y:";
cin>> y;
cout<<"please enter a number for z:";
cin>> z;
result1=(x-y)*(x+z); 
result2=(x+y+z)*(x+y+z)+1;
cout<<(float)result1/result2;



}