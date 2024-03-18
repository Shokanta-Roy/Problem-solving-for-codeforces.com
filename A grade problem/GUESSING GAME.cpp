#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessNumber, randomNumber;
        cout<<"Enter your guess number between 1 to 5: ";
        cin>>guessNumber;
        randomNumber=rand()%5;
        if(guessNumber==randomNumber)
        {
            cout<<"YOU WON"<<endl;
            cout<<"Number is= "<<randomNumber<<endl;
        }
        else
        {
            cout<<"YOU LOSE"<<endl;
            cout<<"Number was= "<<randomNumber<<endl;
            cout<<"Try again"<<endl;

        }

        //getch();
    }
    getch();
}
