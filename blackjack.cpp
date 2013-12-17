#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<windows.h>

//batatas

using namespace std;


int dealer;
	int player;
	int carddealer;
	int cardplayer;
	int decision;
	int condition=1;
	


int dealerhit(){
	
	carddealer=rand()%13+1;
	if(carddealer==0){
		carddealer=rand()%13+1;
		dealerhit();
			}
	if(carddealer>=10){
		dealer=dealer+10;
		carddealer=0;
			}
	dealer=dealer+carddealer;
	cout<<"The computer is drawing a card."<<endl;
	Sleep(2000);
		}
		
		
int playerhit(){
	cardplayer=rand()%13+1;
	if(cardplayer==0){
		cardplayer=rand()%13+1;
		playerhit();
			}
	if(cardplayer<=9 and cardplayer!=0 and cardplayer!=1){	
		cout<<"You got a "<<cardplayer<<"."<<endl;
		player=player+cardplayer;
				}
	if(cardplayer==1){
		cout<<"You got an Ace, which is worth 11."<<endl;
		player=player+11;
				}
	if(cardplayer==11){
		cout<<"You got a Jack, which is worth 10."<<endl;
		player=player+10;
			}
	if(cardplayer==12){
		cout<<"You got a Queen, which is worth 10."<<endl;
		player=player+10;
			}
	if(cardplayer==13){
		cout<<"You got a King, which is worth 10."<<endl;
		player=player+10;
				}
	
	}





int main(){
	srand(time(NULL));
	cout<<"C++ Blackjack. Developed by Gabriel Andrade."<<endl;	
	while(condition==1){
	
	
	if(dealer<=16){	
		dealerhit();
			}
	if(dealer>=22){
		cout<<"The computer has busted (Computer= "<<dealer<<"). You won the game (You="<<player<<")."<<endl;
		dealer=0;
		player=0;
		Sleep(5000)		;
		cout<<"A new game has started."<<endl;
		}
	cout<<"It is your turn. You="<<player<<". Press 1 to hit. Press 2 to stand."<<endl;
	cin>>decision;
	if(decision==1){
		playerhit();
		if(player>=22){
		cout<<"You have busted. (You= "<<player<<"). The computer won the game (Computer="<<dealer<<")."<<endl;
		dealer=0;
		player=0;
		Sleep(5000)		;
		cout<<"A new game has started."<<endl;
			}
		}
	if(decision==2 and dealer>=17){
		cout<<"Computer="<<dealer<<"."<<endl;
		cout<<"You="<<player<<"."<<endl;
		if(player==dealer){
			cout<<"Draw."<<endl;
			dealer=0;
			player=0;
			Sleep(5000)		;
			cout<<"A new game has started."<<endl;
				}
		
		
		
		
		
		if(dealer>player){
			cout<<"The computer won the game."<<endl;
			dealer=0;
			player=0;
			Sleep(5000)		;
			cout<<"A new game has started."<<endl;
				}
		
		
		
		
		if(player>dealer){
			cout<<"You won the game."<<endl;
			dealer=0;
			player=0;
			Sleep(5000)		;
			cout<<"A new game has started."<<endl;
				}
		
		
		
			}
}
	
}







	

	

