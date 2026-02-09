#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int matchnumber=rand() % 100 + 1;

    int guessnumber,guesscount=0;
    do
    {
    	cout<<"lotfan adad ra hads bezanid beyn 1 ta 100:"<<endl;
    	
    	cin>>guessnumber;
    	
    	if(guessnumber>matchnumber)
    	{
    		cout<<'\t'<<"adad kochektar entekhab kon\n";
    		guesscount++;
		}
		else if(guessnumber<matchnumber)
		{
			cout<<'\t'<<"adad bozorgtar vared kon\n";
			guesscount++;
		}
	}while(guessnumber!=matchnumber);
	
	cout<<endl<<"\t adad ra be dorosti hads zadi"<<endl<<"\t tedad hads="<<guesscount;
	
	return 0;
}
