#include <iostream>

using namespace std;

int main()
{
    string name;
    int phonenumber;
    int cardnumber = 55555;
    int guesscardnumber;
    int cvv = 850;
    int guesscvv;
    int guesscount = 0;
    int guesslimit = 2;
    int options;
    int checkin;
    int availablecheckindate = 1306;
    int balance = 10000;
    int balanceafterpayment;
    int price = 1000;
    int price1 = 2500;
    int price2 = 5000;
    int options1;
    int options2;
    int availablecheckin1 = 1303;
    int availablecheckin2 = 1304;
    int pin = 0000;
    int guesspin;

           cout << "HOTEL RESERVATION PROGRAM" << endl;

           cout << "Enter your name: " << endl;
           getline(cin, name);


           cout << "Enter your Phone Number: " << endl;
           cin >> phonenumber;


           cout << "CREDIT OR DEBIT CARD INFORMATION" << endl;

           cout << "Enter the card number: " << endl;
           cin >> guesscardnumber;

           cout << "Enter the CVV" << endl;
           cin >> guesscvv;

    while(cardnumber != guesscardnumber || cvv != guesscvv && guesscount < guesslimit){
          cout << "Invalid card details, Try Again: " << endl;
          cout << "Enter the card number: " << endl;
          cin >> guesscardnumber;

          cout << "Enter the CVV" << endl;
          cin >> guesscvv;
          guesscount++;
    } if(cardnumber == guesscardnumber || cvv == guesscvv && guesscount < guesslimit){
          cout << "Valid Card details" << endl;
    } else if(cardnumber != guesscardnumber || cvv != guesscvv && guesscount >= guesslimit){
          cout << "You cannot have access to this program anymore!" << endl;
    }
    if(cardnumber == guesscardnumber || cvv == guesscvv && guesscount < guesslimit){
          cout << "Enter the type of room to be booked \n 1. 3-in-1 room \n 2. 2-in-1 room \n 3. Single room \n" << endl;
          cin >> options;
    }
       switch(options){
   case 1:
          cout << "Enter the check in date" << endl;
          cin >> checkin;

      if(checkin == availablecheckindate && guesscount < guesslimit){
          cout << "Room Available! \nPrice is GBP1000.00 per night" << endl;
    } else if(checkin != availablecheckindate && guesscount < guesslimit){
     cout << "Sorry, no room available, Enter another Check-in date" << endl;
     cin >> checkin;
        guesscount++;
    }
     if(availablecheckindate == checkin){
          cout << "1. Pay \n2. Cancel" << endl;
          cin >> options1;
    }
        switch(options1){
     case 1:
         balanceafterpayment = balance - price;

        if(price <= balance){
          cout << "Enter PIN" << endl;
          cin >> pin;
        }else if(price > balance){
          cout << "Transaction Cancelled" << endl;
        }
           balanceafterpayment = balance - price;
         if(pin == guesspin){
          cout << "Transaction successful \n Available balance is " << balanceafterpayment << endl;
        } else if(pin != guesspin){
         cout << "Transaction failed" << endl;
        }
    break;
     case 2:
          cout << "Cancelled" << endl;

    }break;

     case 2:
         cout << "Enter the check in date" << endl;
         cin >> checkin;

     if(checkin == availablecheckin1 && guesscount < guesslimit){
        cout << "Room Available! \nPrice is GBP2500.00 per night" << endl;
    } else if(checkin != availablecheckin1 && guesscount < guesslimit){
    cout << "Sorry, no room available, Try Again" << endl;
    cin >> checkin;
        guesscount++;
    }

    if(checkin == availablecheckin1){
            cout << "1. Pay \n2. Cancel" << endl;
            cin >> options1;
    }
        switch(options1){
     case 1:
         balanceafterpayment = balance - price1;

        if(price1 <= balance){
            cout << "Enter PIN" << endl;
            cin >> guesspin;
        } else if(price1 > balance){
            cout << "Transaction Cancelled" << endl;
        }
         balanceafterpayment = balance - price1;
        if(guesspin == pin){
            cout << "Transaction successful \n Available Balance = " << balanceafterpayment << endl;
        }
        break;
     case 2:
            cout << "Cancelled" << endl;

        }break;

         case 3:
            cout << "Enter the check in date" << endl;
            cin >> checkin;

    if(checkin == availablecheckin2 && guesscount < guesslimit){
            cout << "Room Available! \nPrice is GBP5000.00 per night" << endl;
    } else if(checkin != availablecheckin2 && guesscount < guesslimit){
            cout << "Sorry, no room available, Try Again" << endl;
            cin >> checkin;
        guesscount++;
    }

    if(checkin == availablecheckin2){
            cout << "1. Pay \n2. Cancel" << endl;
            cin >> options2;
    }
        switch(options2){
     case 1:
         balanceafterpayment = balance - price2;

        if(price <= balance){
            cout << "Enter PIN" << endl;
            cin >> guesspin;
        } else if(price > balance){
            cout << "Transaction Cancelled" << endl;
        }
         balanceafterpayment = balance - price2;
        if(guesspin == pin){
            cout << "Transaction successful \n Available Balance = " << balanceafterpayment << endl;
        }
    break;
     case 2:
            cout << "Cancelled" << endl;

    }break;
     default:
            cout << "Invalid Input, Try Again" << endl;
         if(cardnumber == guesscardnumber || cvv == guesscvv && guesscount < guesslimit){

            cout << "Enter the type of room to be booked \n 1. 3-in-1 room \n 2. 2-in-1 room \n 3. Single room \n" << endl;
            cin >> options;
    }
       switch(options){
   case 1:
            cout << "Enter the check in date" << endl;
            cin >> checkin;

    if(availablecheckindate == checkin){
            cout << "Room Available! \nPrice is GBP5000.00 per night" << endl;
    } else if(checkin != availablecheckindate){
            cout << "Sorry, no room available" << endl;
        guesscount++;
    }

    if(availablecheckindate == checkin){
            cout << "1. Pay \n2. Cancel" << endl;
            cin >> options1;
    }
        switch(options1){
     case 1:
         balanceafterpayment = balance - price;

        if(price <= balance){
            cout << "Enter PIN" << endl;
            cin >> pin;
        }else if(price > balance){
            cout << "Transaction Cancelled" << endl;
        }
           balanceafterpayment = balance - price;
         if(pin == guesspin){
            cout << "Transaction successful \n Available balance is " << balanceafterpayment << endl;
        }
    break;
     case 2:
            cout << "Cancelled" << endl;

        }break;

     case 2:
           cout << "Enter the check in date" << endl;
           cin >> checkin;

    if(checkin == availablecheckin1){
           cout << "Room Available! \nPrice is GBP2500.00 per night" << endl;
    } else if(checkin != availablecheckin1){
           cout << "Sorry, no room available" << endl;
        guesscount++;
    }

    if(checkin == availablecheckin1){
            cout << "1. Pay \n2. Cancel" << endl;
            cin >> options1;
    }
        switch(options1){
     case 1:
         balanceafterpayment = balance - price1;

        if(price1 <= balance){
            cout << "Enter PIN" << endl;
            cin >> guesspin;
        } else if(price1 > balance){
            cout << "Transaction Cancelled" << endl;
        }
         balanceafterpayment = balance - price1;
        if(guesspin == pin){
            cout << "Transaction successful \n Available Balance = " << balanceafterpayment << endl;
        }
    break;
     case 2:
            cout << "Cancelled" << endl;
        }break;

         case 3:
            cout << "Enter the check in date" << endl;
            cin >> checkin;

    if(checkin == availablecheckin2){
            cout << "Room Available! \nPrice is GBP1000.00 per night" << endl;
    } else if(checkin != availablecheckin2){
            cout << "Sorry, no room available" << endl;
        guesscount++;
    }

    if(checkin == availablecheckin2){
            cout << "1. Pay \n2. Cancel" << endl;
            cin >> options2;
    }
        switch(options2){
     case 1:
         balanceafterpayment = balance - price2;

        if(price <= balance){
            cout << "Enter PIN" << endl;
            cin >> guesspin;
        } else if(price > balance){
            cout << "Transaction Cancelled" << endl;
        }
         balanceafterpayment = balance - price2;
        if(guesspin == pin){
            cout << "Transaction successful \n Available Balance = " << balanceafterpayment << endl;
        }
        break;
     case 2:
            cout << "Cancelled" << endl;

    }break;

       }
       }


    return 0;
}
