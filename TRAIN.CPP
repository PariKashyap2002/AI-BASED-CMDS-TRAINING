#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int chaff;
	float freq;
	ofstream fout;
	fout.open("file.txt",ios::out);
	while(1)
	{
		cout<<"Enter the Chaff:";
		cin>>chaff;
		if(chaff>12)
		{       fout.close();
			exit(0);
		}
		fout<<chaff;
		cout<<"Enter the frequency:";
		cin>>freq;
		fout<<" "<<freq<<"\n";

	}
	//fout.close();
	getch();
}

