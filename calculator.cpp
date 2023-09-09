#include<iostream>


using namespace std;
/**
 * this program states the calculator in terminal form 
 * Author : Jay kishan kharwar
 * Date : 7:43 (starting).
*/


void help()
{
	cout<<"COMMANDS"<<" "<<"WORKING"<<endl;
	cout<<endl;
	cout<<"add"<<"       "<<"Additon of two number"<<endl;
	cout<<"sub"<<"       "<<"Subtraction of two number "<<endl;
	cout<<"multi"<<"     "<<"Multiplication of two number"<<endl;
	cout<<"div"<<"       "<<"Division of two number"<<endl;
	cout<<"eixt"<<"      "<<"Quit the program "<<endl;
	cout<<endl;
}
string controller()
{
	string input;
	cout<<"calculator :>terminal/> ";
	cin>>input;
	
	
	return input;
}

void add()
{
	int a,b;
	cout<<"Enter number_1 : ";
	cin>>a;
	cout<<"Enter number_2 : ";
	cin>>b;
	
	cout<<"Sum = "<<a+b<<endl;
}

void sub()
{
	int a,b;
	cout<<"Enter number_1 : ";
	cin>>a;
	cout<<"Enter number_2 : ";
	cin>>b;
	
	cout<<"Difference = "<<a-b<<endl;
	
}

void multiply()
{
	int a,b;
	cout<<"Enter number_1 : ";
	cin>>a;
	cout<<"Enter number_2 : ";
	cin>>b;
	
	cout<<"Product = "<<a*b<<endl;

}

void divison()
{
	int a,b;
	cout<<"Enter number_1 : ";
	cin>>a;
	cout<<"Enter number_2 : ";
	cin>>b;
	
	cout<<"Quotient = "<<(a/b)<<endl;
	
}
	
void about_program()
{
	cout<<"Programmer : Jay Kishan kharwar"<<endl;
	cout<<"Programming Language : c++"<<endl;
	cout<<"Date of completion : 09-09-2023"<<endl;
	
}
int main()
{	
		string input = controller();
	while(1){
	

	
	if(input == "help")
	{
		help();;
	}	
	else if(input == "add")
	{
		add();
	}
	else if(input == "multi")
	{
		multiply();
	}
	else if(input == "div")
	{
		divison();
	}
	else if(input == "sub")
	{
		sub();
	}
	else if(input == "exit")
	{
		break;
	}
	else if(input == "hidden_commands")
	{
		about_program();
	}
	
		input = controller();
	}
	
	
	return 0;
}
/**
 * Jai Jai Jai Bajarangbali....
 * This program is coded by Jay kishan kharwar
 * At time : 8:12
 * date : 09-09-2023
*/
