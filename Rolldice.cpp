#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;



void rolldice(char x){ 
	if(x=='R'||x=='r'){
		srand (time(NULL));
		int dice;
    	dice = rand()%6 + 1;
    	cout << "\nYou got item "<< dice << " !! ";
    
	}
	else{
		cout<<"Please Click R for Rolldice !! ";
		char clickagain;
		cin>>clickagain;
		rolldice(clickagain);
	}}

int main(){
	char clickToDice;
	cin>>clickToDice;
	rolldice(clickToDice);

}



