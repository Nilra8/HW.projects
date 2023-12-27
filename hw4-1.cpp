#include <iostream>

using namespace std;

int main() {
	int num1,num2,result;
	char op;
	cout<<"Hi,please enter first number:";
	cin>>num1;
	cout<<"enter secound number:";
	cin>>num2;
	cout<<"enter your operand too";
	cin>>op;
	switch(op){
	  case'+':
	   	result=num1+num2;
	   	break;
      case'-':
      	result=num1-num2;
      	break;
      case'*':
      	result=num1*num2;
      	break;
      case'%':
      	result=num1%num2;
      	break;
      case'/':
      	result=num1/num2;
      	break;
	}
	cout<<result;
	
}
