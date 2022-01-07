#include <iostream>
using namespace std;

int Addition (int a, int b)
{
    int s;
	s = a + b;
	return (s);                                                                                                                                                                                                                                                                                                                                                                                                          
}

int Subtraction (int a, int b)
{
	int s;
	s= a-b;
	return (s);
}

int Multiplication (int a, int b)
{
	int s;
	s= a*b;
	return (s);
}

int Division (int a, int b)
{
	int s;
	s = a/b;
	return (s);
}
void clearscreen()
{
	system ("CLS");
}
void pick()
{
		cout<<"ENTER a NUMBER:";
}

int main ()
{
	int user;
	int s;
	int num1,num2;
	int Y,N;
	int answer;
	START:
	cout << "\t\t\tMATH ARITHMETIC " <<"\n";
	cout << "[1]Addition" << "\n";
	cout << "[2]Subtraction" <<"\n";
	cout << "[3]Multiplication" <<"\n";
	cout << "[4]Division" << "\n";
	cout << "[0]Exit" << "\n";
	cout << "Please choose a number:"<< endl;
	cin >> user;
	if (user==1)
	
		{
			p1:
			clearscreen();
			cout<<"\t\tADDITION"<<endl;
			pick();
			cin >> num1;
			pick();
			cin >> num2;
			s= Addition (num1,num2);
			cout <<"The result is "<< s << "\n";
			clearscreen();
			if (answer=='Y')
			{
				goto p1;
			}
			else if(answer == 'N')
			{
				goto START;
			}
		}
	 else if (user ==2)
	
		{
			p2:
				clearscreen();
			int s;
			int num1,num2;
			int Y,N;
			int answer;
			cout<<"\t\tSUBTRACTION"<<endl;
			pick();
			cin >> num1;
			pick();
			cin >> num2;
			s= Subtraction (num1,num2);
			cout <<"The result is "<< s << "\n";
			clearscreen();
			if (answer='Y')
			{
				goto p2;
			}
			else if(answer = 'N')
			{
				goto START;
			}
		}
	else if (user ==3)
		{
			p3:
				clearscreen();
			int s;
			int num1,num2;
			int Y,N;
			int answer;
			cout<<"\t\tMULTIPLICATION"<<endl;
			pick();
			cin >> num1;
			pick();
			cin >> num2;
			s= Multiplication (num1,num2);
			cout <<"The result is "<< s << "\n";
			clearscreen();
			if (answer='Y')
			{
				goto p3;
			}
			else if(answer = 'N')
			{
				goto START;
			}
		}
	else if (user ==4)
		{
			p4:
				clearscreen();
			int s;
			int num1,num2;
			int Y,N;
			int answer;
			cout<<"\t\tDIVISION"<<endl;
			pick();
			cin >> num1;
			pick();
			cin >> num2;
			s= Division (num1,num2);
			cout <<"The result is "<< s << "\n";
			clearscreen();
			if (answer='Y')
			{
				goto p4;
			}
			else if(answer = 'N')
			{
				goto START;
			}
		}
	else if (user =0)
		{
			return 0;
		}
		
	cout << "Do you want to continue?[Y/N]";
	system ("CLS");
	 
    }   