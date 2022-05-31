#include <iostream>

using namespace std;

int main()
{
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




    return 0;
}
