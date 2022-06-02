#include <iostream>

using namespace std;

int main()
{       cout << "LEVEL ONE" << endl;        cout << "Clue = Two-digit number" << endl;
    int SecretNumber = 18;
    int GuessSecretNumber;
    int GuessCount = 0;
    int GuessLimit = 2;

    cout << "Enter the Secret Number" << endl;
    cin >> GuessSecretNumber;

    while(SecretNumber != GuessSecretNumber && GuessCount < GuessLimit){
        cout << "Guess Again" << endl;
        cin >> GuessSecretNumber;
        GuessCount++;
    } if(SecretNumber == GuessSecretNumber && GuessCount <= GuessLimit){
        cout << "You guessed the Secret Number, You Win!" << endl;
    } else if(SecretNumber != GuessSecretNumber && GuessCount >= GuessLimit){
         cout << "You ran out of chances, You Lose!" << endl;
    }

        if(SecretNumber == GuessSecretNumber && GuessCount <= GuessLimit){
         cout << "LEVEL TWO" << endl;                    cout << "Clue = Three-digit Number" << endl;


    int secretnumber = 100;
    int guesssecretnumber;
    int guesscount = 0;
    int guesslimit = 2;

    cout << "Enter the Secret Number" << endl;
    cin >> guesssecretnumber;

    while(secretnumber != guesssecretnumber && guesscount < guesslimit){
        cout << "Guess Again" << endl;
        cin >> guesssecretnumber;
        guesscount++;
    } if(secretnumber == guesssecretnumber && guesscount <= guesslimit){
        cout << "You guessed the Secret Number, You Win!" << endl;
    } else if(secretnumber != guesssecretnumber && guesscount >= guesslimit){
         cout << "You ran out of chances, You Lose!" << endl;
    }
        }



    return 0;
}
