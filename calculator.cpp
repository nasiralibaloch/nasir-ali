#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	char op;
	cout<<"enter the num1"<<endl;
	cin>>num1;
	cout<<"enter the op"<<endl;
	cin>>op;
	cout<<"enter the num2"<<endl;
	cin>>num2;
	switch(op)
	{
		case'+':
			cout<<"num1+num2 ="<<num1+num2<<endl;
			break;
        case'-':
			cout<<"num1-num2 ="<<num1-num2<<endl;
			break;
        case'*':
        	cout<<"num1*num2 ="<<num1*num2<<endl;
        	break;
        case'/':
        	cout<<"num1/num2 ="<<num1/num2<<endl;
        	break;
        case'%':
        	bool isNum1Int,isNum2Int;
        	isNum1Int=(isNum1(int)==num1);
        	isNum2Int=(isNum2(int)==num2);
        	if(isNum1int&&isNum2int)
        	{
        	cout<<"num1%num2 ="<<(int)num1%(int)num2<<endl;
            }
            else
            {
            	cout<<"not valid!"<<endl;
			}
        	break;
        	
       // default:
        //	cout<<"invalid value"<<endl;
			
   	}
   	return 0;
}
