#include<iostream>
#include<string>
#include <conio.h>
#include <stdlib.h> 
#include <sstream> 
using namespace std;

void play(int player1,int player2,string name1,string name2,int &pt_player1,int &pt_player2 )
{
		if(player1==1)
		{
			if(player2 ==2 || player2 == 3)
			{
			cout<<"\n\nSorry "<<name1<<" lost this round to "<<name2<<"!";
			pt_player2=pt_player2+1;				
			}
			else
			cout<<"\n\nOh, Its a tie!";
		}
		else if(player1==2)
		{
			if (player2 ==1)
			{
			cout<<"\n\nSorry "<<name1<<" lost this round to "<<name2<<"!";
			pt_player2=pt_player2+1;	
			}
			else if (player2 ==2)
			cout<<"\n\nOh, Its a tie!";
			else{
			cout<<"\n\nCongratulations,"<<name1<<" won this round!!";
			pt_player1=pt_player1+1;
		}
		}		
		else if (player1==3)
		{
			if (player2 ==2)
			{
			cout<<"\n\nSorry "<<name1<<" lost this round to "<<name2<<"!";
			pt_player2=pt_player2+1;
			}
			else if (player2 ==3)
			cout<<"\n\nOh, Its a tie round!";
			else{
			cout<<"\n\nCongratulations,"<<name1<<" won this round!!";
			pt_player1=pt_player1+1;
			}
		}


}
void single(int num,string name1)
{
	int computer,player;
	string name2="Matt";
		int pt_player1=0,pt_player2=0;
	do{

		cout<<"\n\nEnter what you wish to select \n1:ROCK 2:SCISSOR 3:PAPER : ";
		cin>>player;
		computer = (rand() % 3) + 1;
		switch(computer){
			case 1: cout<<"\nMatt chose Rock";
					break;
			case 2: cout<<"\nMatt chose Scissor";
					break;
			case 3: cout<<"\nMatt chose Paper";
					break;
			default:cout<<"No such option allowed";
		}
		play(player,computer,name1,name2,pt_player1,pt_player2);
		cout<<"\n\n\t\t\t\t\t\tSCORE BOARD";
		cout<<"\n\t\t\t\t\t----------------------------------";
		cout<<"\n\t\t\t\t\t | \t"<<name1<<"\t | \t"<<name2<<"\t | \t";
		cout<<"\n\t\t\t\t\t | \t"<<pt_player1<<"\t | \t"<<pt_player2<<"\t | \t";
		cout<<"\n\t\t\t\t\t----------------------------------";
		num--;

	}
	while(num!=0);
		if(pt_player2>pt_player1)
		cout<<"\n\n\t\t\t\t\t\tSORRY YOU LOST THE GAME";
		else if (pt_player2  < pt_player1)
		cout<<"\n\n\t\t\t\t\t\tYOU WINN THE GAME !!";
		else
		cout<<"\n\n\t\t\t\t\t\tITS A TIE!!";
//		cout<<"\n\nTotal Scores are"<<name1<<" : "<<pt_player2;
//		cout<<"\n\nTotal Scores are "<<name2<<" : "<<pt_player1;
}
void multiplayer(int num,string name1,string name2)
{
//string player_2,player_1;
	int pt_player1=0,pt_player2=0;
	do{
		char ch;
		int player1=0,player2=0;
std::string player_2,player_1;

		cout<<"\n\nEnter what "<<name1<<" wish to select \n1:ROCK 2:SCISSOR 3:PAPER : ";
		ch = _getch();
   		while(ch != 13){//character 13 is enter
      	player_1.push_back(ch);
      	cout << '*';
     	ch = _getch();}
//		cin>>player1;
		std::istringstream ( player_1 ) >> player1;//convert player_1 to player1 int
		cout<<"\n\nEnter what "<<name2<<" wish to select \n1:ROCK 2:SCISSOR 3:PAPER : ";
		ch = _getch();
   		while(ch != 13){//character 13 is enter
      	player_2.push_back(ch);
      	cout << '*';
     	ch = _getch();}
     	std::istringstream ( player_2 ) >> player2;
     	cout<<"\n\n";
     		switch(player1){
			case 1: cout<<"\n"<<name1<<" chose Rock";
					break;
			case 2: cout<<"\n"<<name1<<" chose Scissor";
					break;
			case 3: cout<<"\n"<<name1<<" chose Paper";
					break;
			default:cout<<"\n"<<name1<<",No such option allowed";
		}
		     		switch(player2){
			case 1: cout<<"\n"<<name2<<" chose Rock";
					break;
			case 2: cout<<"\n"<<name2<<" chose Scissor";
					break;
			case 3: cout<<"\n"<<name2<<" chose Paper";
					break;
			default:cout<<"\n"<<name2<<",No such option allowed";
		}
     	//cout <<"\n"<< name1 <<" chose "<<player1;
     	//cout <<"\n"<< name2 <<" chose "<<player2;
		play(player1,player2,name1,name2,pt_player1,pt_player2);
		cout<<"\n\n\t\t\t\t\t\tSCORE BOARD";
		cout<<"\n\t\t\t\t\t----------------------------------";
		cout<<"\n\t\t\t\t\t | \t"<<name1<<"\t | \t"<<name2<<"\t | \t";
		cout<<"\n\t\t\t\t\t | \t"<<pt_player1<<"\t | \t"<<pt_player2<<"\t | \t";
		cout<<"\n\t\t\t\t\t----------------------------------";
		num--;

	}
	while(num!=0);
		if(pt_player2>pt_player1)
		cout<<"\n\n\t\t\t\t\t\t"<<name2<<" WON THE GAME";
		else if (pt_player2  < pt_player1)
		cout<<"\n\n\t\t\t\t\t\t"<<name1<<" WON THE GAME";
		else
		cout<<"\n\n\t\t\t\t\t\tITS A TIE GAME!!";
}
int main()
{
	int num,choice=0;
	string name;
	string player1,player2;
	int temp=0;
	cout<<"\t\t\t\t\tGAME : ROCK PAPER SCISSOR!!";
	do{
	cout<<"\nEnter number of rounds : ";
	cin>>num;
	cout<<"\nEnter your choice :-\n";
	cout<<"Choose 1 : One Player , 2 : Multiplayer Game  :  ";
	cin>>choice;
	switch(choice)
	{
	case 1:	cout<<"\nEnter your name : ";
			cin>>name;
			cout<<"\nHey "<<name<<" ,I'm Computer Matt!! \nAll the best for the Game!!";
	 		single(num,name);
			break;
	case 2:	cout<<"\nEnter Player 1 : ";
			cin>>player1;
			cout<<"\nEnter Player 2 : ";
			cin>>player2;
			multiplayer(num,player1,player2);
			break;
	default:cout<<"No such choice ";
	}
cout<<"\n\nDo you wish to play the game again?";
cout<<"\nEnter 1 if you wish to continue else press 0 : ";
cin>>temp;
}while(temp!=0);
	if(temp==0)
	cout<<"\nThank you for playing with us! :) ";
	return 0;
}
