#include<iostream>
#include<time.h>
using namespace std;
void CheckNum(int , int);

int main()
{
	srand(time(0));
	int guess , random , made = 0;
	random = 1 + rand()%10;
	cout << "### Welcome to guessing number game ###\n";
	cout << "Secret number has been chosen\n";
	do{
		cout << "Guess the number (1 to 10) : ";
		cin >> guess;
		CheckNum(guess , random);
		made += 1;
	}while(guess != random);
	cout << "The secret number is " << random << endl;
	cout << "You made " << made << " guesses\n";
	return(0);
}
void CheckNum(int guess , int random)
{
	if(guess < random)
	{
		cout << "The secret number is lower\n";
	}
	else if(guess > random)
	{
		cout << "The secret number is higher\n";
	}
	else
	{
		cout << "Congratulations!\n";
	}
}
