#include <iostream>

using namespace std;

int main()
{
    int CardNumber = 55555;
    int CardNumberEntry;
    int Pin = 1306;
    int PinEntry;
    int EntryCount = 0;
    int EntryLimit = 2;
    int Options;
    int withdraw;
    int Balance = 5000;
    int BalanceAfterWithdrawal;
    int Deposit;
    int BalanceAfterDeposit;



      cout << "Enter Card Number " << endl;
      cin >> CardNumberEntry;

      while(CardNumberEntry != CardNumber && EntryCount < EntryLimit){
        cout << "Invalid Card Number, Try Again" << endl;
        cin >> CardNumberEntry;
         EntryCount++;
      } if(CardNumberEntry = CardNumber && EntryCount < EntryLimit){
         cout << "Valid Card Number" << endl;
      } else if(CardNumberEntry != CardNumber && EntryCount >= EntryLimit){
         cout << "Invalid Card Number, Try Again after 24 Hours" << endl;

      }


          if(CardNumberEntry = CardNumber && EntryCount < EntryLimit){
       cout << "Enter PIN " << endl;
       cin >> PinEntry;
          }

       while(PinEntry != Pin && EntryCount < EntryLimit){
        cout << "Invalid PIN, Try Again " << endl;
        cin >> PinEntry;
        EntryCount++;
       } if(Pin == PinEntry && EntryCount <= EntryLimit){
         cout << "Valid PIN" << endl;
       } else if(Pin != PinEntry && EntryCount >= EntryLimit){
          cout << "Too many attempts, wait for 24 Hours and try again" << endl;
       }
       if(Pin == PinEntry && EntryCount <= EntryLimit){
        cout << "Select the transaction to be made \n 1. Withdraw funds \n 2. Deposit Funds \n 3. Check Balance" << endl;
        cin >> Options;
        }


           switch(Options){
       case 1:
        cout << "Enter amount to withdraw from Account Balance " << endl;
        cin >> withdraw;

             BalanceAfterWithdrawal = Balance - withdraw;
           while(withdraw > Balance){
            cout << "Insufficient Funds, Try Again" << endl;
            cin >> withdraw;
             BalanceAfterWithdrawal = Balance - withdraw;
         } if(withdraw <= Balance){
            cout << "Transaction Successful " << endl;
            cout << "Available Balance =  " << BalanceAfterWithdrawal << endl;
         }
           break;
        case 2:
        cout << "Enter amount to deposit to Account Balance " << endl;
        cin >> Deposit;

             BalanceAfterDeposit = Balance + Deposit;
           while(Deposit < 0){
            cout << "Invalid Input, Try Again" << endl;
            cin >> Deposit;
               BalanceAfterDeposit = Balance + Deposit;
          } if(Deposit >
                0){
            cout << "Transaction Successful \n Available Balance = " << BalanceAfterDeposit << endl;

         }
            break;
           case 3:
           cout << "Current Balance =  " << Balance << endl;
            default:
            cout << "Invalid Option. Back to main menu " << endl;
            cout << "Select the transaction to be made \n 1. Withdraw funds \n 2. Deposit Funds \n 3. Check Balance" << endl;
            cin >> Options;
           }

            switch(Options){
       case 1:
        cout << "Enter amount to withdraw from Account Balance " << endl;
        cin >> withdraw;

             BalanceAfterWithdrawal = Balance - withdraw;
           while(withdraw > Balance){
            cout << "Insufficient Funds, Try Again" << endl;
            cin >> withdraw;
             BalanceAfterWithdrawal = Balance - withdraw;
         } if(withdraw <= Balance){
            cout << "Transaction Successful " << endl;
            cout << "Available Balance =  " << BalanceAfterWithdrawal << endl;
         }
           break;
        case 2:
        cout << "Enter amount to deposit to Account Balance " << endl;
        cin >> Deposit;

             BalanceAfterDeposit = Balance + Deposit;
           while(Deposit < 0){
            cout << "Invalid Input, Try Again" << endl;
            cin >> Deposit;
               BalanceAfterDeposit = Balance + Deposit;
          } if(Deposit >
                0){
            cout << "Transaction Successful \n Available Balance = " << BalanceAfterDeposit << endl;

         }
            break;
           case 3:
           cout << "Current Balance =  " << Balance << endl;




            }

    return 0;
}

