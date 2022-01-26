#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

void instr(){
 cout << "\t\t\nHere is how to play Gamble.IO!\n" ;
 cout << "\t\t Enter your desired bet!\n";
 cout << "\t\t Guess a random number between 1 and 10\n";
 cout << "\t\tif the answer is correct you get double your bet!\n";
 cout << " \t\t If you're answer is wrong then you lose your money!\n";

}


int main() {
   string Name;
   int Num;
   int Bal = 1000;
   int Bet;
   int Ans;
   int New;
   char Pick;

   srand(time(0));
   cout << "\n\t\t WELCOME TO GAMBLE.IO \n\n";
   cout << " \n Please enter your name: ";
   getline(cin , Name);
   cout << "\n Hello " + Name + " your starting balance is $1000" ;


   do 
   {
    
     instr();
      do
       {
          cout << " \n How much money do you want to bet?: ";
          cin >> Bet;

          if(Bet > Bal)
            cout << " \n The Betting amount exceeds your current balance of " << Bal << " Please re-enter your bet"; 
       }
     while(Bet > Bal);

     do{
         cout << " Pick a number between 1 and 10, take your time!: ";
         cin >> Num;
         if( Num <= 0 || Num > 10)
            cout << " Number is outside of range, please select a number between 1 and 10";
        }while(Num <= 0 || Num > 10);
        Ans = rand()%10 + 1;
        if(Num == Ans){
           Bal = Bal + Bet * 2;
           New = Bet * 2;
           cout << "Congratulations :D ! You have won $" + to_string(New) + "!";

        }
        else{
              Bal = Bal - Bet;
              cout << "Yikes! You just lost $" + to_string(Bet) + " Better luck next time.";
        }
        cout << "\n The correct number was "+ to_string(Ans) + ".";
        
        if(Bal == 0){
             cout << " Your gambling days have come to an end.";
             break;
       
        }
        cout << "\n Your new balance is $" + to_string(Bal) + ".";
        cout << "\nShall we test your luck again? (y/n)";
        cin >> Pick;

     }while(Pick == 'y' || Pick == 'Y');
     cout << "\nThanks for playing Gamble.IO. ";
     return 0;



   }
   
