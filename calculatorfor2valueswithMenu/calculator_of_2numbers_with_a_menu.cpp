#include <iostream>
using namespace std;

void operators()
{
	cout<<"1.addition"<<endl;
	cout<<"2.division"<<endl;
	cout<<"3.multiplication"<<endl;
	cout<<"4.subtraction"<<endl;
	cout<<"select one of the options above"<<endl;
	
	float add , sub , divi , multi , valA, valB, total, optionval;
	cin>> optionval;
	if(optionval == 1){
	cout<<"type in values of a and b"<<endl;
	cout<<"a:";
	cin>>valA;
	cout<<"b:";
	cin>>valB;
	total = valA + valB;
	cout<<"the sum of "<<valA<<" and "<<valB<<" is:"<<total<<endl;
  }

    if(optionval == 2){
	cout<<"type in values of a and b"<<endl;
	cout<<"a:";
	cin>>valA;
	cout<<"b:";
	cin>>valB;
	total = valA / valB;
	cout<<"the division of "<<valA<<" and "<<valB<<" is:"<<total<<endl;
    }
    
    if(optionval == 3){
	cout<<"type in values of a and b"<<endl;
	cout<<"a:";
	cin>>valA;
	cout<<"b:";
	cin>>valB;
	total = valA * valB;
	cout<<"the multiplication of "<<valA<<" and "<<valB<<" is:"<<total<<endl;
    }
    
    if(optionval == 4){
	cout<<"type in values of a and b"<<endl;
	cout<<"a:";
	cin>>valA;
	cout<<"b:";
	cin>>valB;
	total = valA - valB;
	cout<<"the subtract of "<<valA<<" and "<<valB<<" is:"<<total<<endl;
    }

	if (optionval != 1 && optionval !=2 && optionval != 3 && optionval != 4)
	{
		cout<<"Invalid option selected"<<endl;
		exit(1);
		
	}

	cout<<"Type in 1 to Return to menu and 2 to exit calculator"<<endl;
	int i;
	cin>> i;
	while (i == 1)
	{
		i++;
		operators();
	}

	if (i > 1 || i < 1)
	{
		exit(0);
	}
}

int main(){
	operators();
	return 0;
}