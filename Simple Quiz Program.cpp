#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    string name;
    int options;
    double mathans1 = 7.5;
    double guessmathans1;
    double mathans2 = 20;
    double guessmathans2;
    double mathans3 = 10;
    double guessmathans3;
    string ictans1 = "CPU";
    string guessictans1;
    string ictans2 = "Pixel";
    string guessictans2;
    int ictans3 = 1100100;
    int guessictans3;
    string bioans1 = "Homo sapiens";
    string guessbioans1;
    string bioans2 = "Charles Darwin";
    string guessbioans2;
    string bioans3 = "Genetic Engineering";
    string guessbioans3;
    string chemans1 = "Mendeelev";
    string guesschemans1;
    double chemans2 = 86.12;
    double guesschemans2;
    string chemans3 = "Alkene";
    string guesschemans3;
    double physans1 = 7;
    double guessphysans1;
    double physans2 = 0.4;
    double guessphysans2;
    string physans3 = "Archimedes Principle";
    string guessphysans3;
    int options1;

cout << "---------------QUIZ PROGRAM--------------" << endl;
cout << endl;
cout << "Enter your Name: " << endl;
getline(cin, name);
 cout << endl;
cout << "Hello " << name << ". Welcome to my simple Quiz program!" << endl;

cout << "Enter your preferred area to be quizzed on\n1. Mathematics \n2. Information Technology\n3. Biology\n4. Chemistry\n5. Physics" << endl;
cin >> options;

switch(options){
case 1:
  cout << "-----------MATHEMATICS---------------" << endl;
  cout << endl;
  cout << "Answer the following questions correctly. Good Luck!" << endl;

  cout << "1. What is the value of (100 + 50)/20?" << endl;
  cin >> guessmathans1;
  if(mathans1 != guessmathans1){
        cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << mathans1 << endl;
   }else if(mathans1 == guessmathans1){
           cout << endl;
      cout << "ACCURATE!\nNext Question" << endl;
   }
        cout << endl;
    cout << "2. 5X = 100. Find the value of X" <<  endl;
      cin >> guessmathans2;
      if(mathans2 != guessmathans2){
              cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << mathans2 << endl;
  } else if(mathans2 == guessmathans2){
          cout << endl;
      cout << "ACCURATE!\nLast Question" << endl;
  }
           cout << endl;
 cout << "     /|" << endl;
 cout << "    / |" << endl;
 cout << "   /  | 4" << endl;
 cout << "  /   |" << endl;
 cout << " /    |" << endl;
 cout << "/_____|" << endl;
 cout << "  5" << endl;
   cout << "3. Find the Area of the Triangle" << endl;
   cin >> guessmathans3;
  if(mathans3 != guessmathans3){
            cout << endl;
      cout << "Better Luck Next Time" << endl;
      cout << "Correct Answer: " << mathans3 << endl;
  } else if(mathans3 == guessmathans3){
          cout << endl;
      cout << "ACCURATE!\n" << endl;
  }
  //There was no easier way of doing this. Will be modified later.
  if(mathans1 == guessmathans1 && mathans2 == guessmathans2 && mathans3 == guessmathans3){
              cout << endl;
    cout << "Your Score = 3/3" << endl;
    cout << "Excellent!" << endl;
  } else if(mathans1 == guessmathans1 && mathans2 == guessmathans2 && mathans3 != guessmathans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(mathans1 == guessmathans1 && mathans2 != guessmathans2 && mathans3 == guessmathans3){
          cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(mathans1 != guessmathans1 && mathans2 == guessmathans2 && mathans3 == guessmathans3){
        cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(mathans1 == guessmathans1 && mathans2 != guessmathans2 && mathans3 != guessmathans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(mathans1 != guessmathans1 && mathans2 == guessmathans2 && mathans3 != guessmathans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(mathans1 != guessmathans1 && mathans2 != guessmathans2 && mathans3 == guessmathans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(mathans1 != guessmathans1 && mathans2 != guessmathans2 && mathans3 != guessmathans3){
      cout << endl;
     cout << "Your Score = 0/3" << endl;
     cout << "You can do better!" << endl;
  }
  break;
case 2:
    cout << "-----------INFORMATION TECHNOLOGY----------" << endl;
    cout << endl;
    cout << "Answer the following questions correctly. Good Luck!" << endl;

  cout << "1. What is considered as the 'Brain' of the Computer?\n (HINT: Just the Abbreviation in CAPS work)" << endl;
  cin >> guessictans1;
  if(guessictans1 != ictans1){
            cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << ictans1 << endl;
} else if(guessictans1 == ictans1){
        cout << endl;
      cout << "ACCURATE!\n Next Question" << endl;
   }
         cout << endl;
    cout << "2. The smallest component of a bitmap is known as the " <<  endl;
    cin >> guessictans2;

      if(guessictans2 != ictans2){
                cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << ictans2 << endl;
  } else if(guessictans2 == ictans2){
          cout << endl;
      cout << "ACCURATE!\n Last Question" << endl;
  }
        cout << endl;
   cout << "3. Convert the number '100' into computer language\n (HINT: binary preferably)" << endl;
   cin >> guessictans3;
  if(ictans3 != guessictans3){
            cout << endl;
      cout << "Better Luck Next Time" << endl;
      cout << "Correct Answer: " << ictans3 << endl;
  } else if(ictans3 == guessictans3){
          cout << endl;
      cout << "ACCURATE!\n" << endl;
  }
    if(ictans1 == guessictans1 && ictans2 == guessictans2 && ictans3 == guessictans3){
                  cout << endl;
    cout << "Your Score = 3/3" << endl;
    cout << "Excellent!" << endl;
  } else if(ictans1 == guessictans1 && ictans2 == guessictans2 && ictans3 != guessictans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(ictans1 == guessictans1 && ictans2 != guessictans2 && ictans3 == guessictans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(ictans1 != guessictans1 && ictans2 == guessictans2 && ictans3 == guessictans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(ictans1 == guessictans1 && ictans2 != guessictans2 && ictans3 != guessictans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(ictans1 != guessictans1 && ictans2 == guessictans2 && ictans3 != guessictans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(ictans1 != guessictans1 && ictans2 != guessictans2 && ictans3 == guessictans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(ictans1 != guessictans1 && ictans2 != guessictans2 && ictans3 != guessictans3){
            cout << endl;
     cout << "Your Score = 0/3" << endl;
     cout << "You can do better!" << endl;
  }
  break;
case 3:
    cout << "---------BIOLOGY--------" << endl;
     cout << endl;
    cout << "Answer the following questions correctly. Good Luck!" << endl;

  cin.ignore(1000, '\n');
  cout << "1. The Biological name given to Humans is " << endl;
  getline(cin, guessbioans1);
  if(guessbioans1 != bioans1){
            cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << bioans1 << endl;
} else if(guessbioans1 == bioans1){
        cout << endl;
      cout << "ACCURATE!\nNext Question" << endl;
   }
    cout << endl;
    cout << "2. Who propounded the Evolution Theory? " <<  endl;
    getline(cin, guessbioans2);

      if(guessbioans2 != bioans2){
                cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << bioans2 << endl;
  } else if(guessbioans2 == bioans2){
          cout << endl;
      cout << "ACCURATE!\nLast Question" << endl;
  }
    cout << endl;
   cout << "3. A type of engineering where a DNA of an organism is inserted into another organism so it is permanently attached to the organism and is also transferred to it's offspring is known as " << endl;
   getline(cin, guessbioans3);
  if(bioans3 != guessbioans3){
            cout << endl;
      cout << "Better Luck Next Time" << endl;
      cout << "Correct Answer: " << bioans3 << endl;
  } else if(bioans3 == guessbioans3){
          cout << endl;
      cout << "ACCURATE!\n" << endl;
  }
    if(bioans1 == guessbioans1 && bioans2 == guessbioans2 && bioans3 == guessbioans3){
                  cout << endl;
    cout << "Your Score = 3/3" << endl;
    cout << "Excellent!" << endl;
  } else if(bioans1 == guessbioans1 && bioans2 == guessbioans2 && bioans3 != guessbioans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(bioans1 == guessbioans1 && bioans2 != guessbioans2 && bioans3 == guessbioans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(bioans1 != guessbioans1 && bioans2 == guessbioans2 && bioans3 == guessbioans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(bioans1 == guessbioans1 && bioans2 != guessbioans2 && bioans3 != guessbioans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(bioans1 != guessbioans1 && bioans2 == guessbioans2 && bioans3 != guessbioans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(bioans1 != guessbioans1 && bioans2 != guessbioans2 && bioans3 == guessbioans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(bioans1 != guessbioans1 && bioans2 != guessbioans2 && bioans3 != guessbioans3){
            cout << endl;
     cout << "Your Score = 0/3" << endl;
     cout << "You can do better!" << endl;
  }
  break;
case 4:
    cout << "-------------CHEMISTRY----------" << endl;
     cout << endl;
    cout << "Answer the following questions correctly. Good Luck!" << endl;

  cin.ignore(1000, '\n');
  cout << "1. Which Scientist discovered the 'Periodic table'" << endl;
  getline(cin, guesschemans1);
  if(guesschemans1 != chemans1){
            cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << chemans1 << endl;
} else if(guesschemans1 == chemans1){
        cout << endl;
      cout << "ACCURATE!\nNext Question" << endl;
   }
     cout << endl;
    cout << "2. If it takes 200 years for Bismuth to undergo 80% decay, What is it's half-life?" <<  endl;
    cin >> guesschemans2;

      if(guesschemans2 != chemans2){
            cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << chemans2 << endl;
  } else if(guesschemans2 == chemans2){
          cout << endl;
      cout << "ACCURATE!\nLast Question" << endl;
  }
            cout << endl;
   cout << "3. A carbon compound with a double bond is known as  " << endl;
   cin >> guesschemans3;
  if(chemans3 != guesschemans3){
            cout << endl;
      cout << "Better Luck Next Time" << endl;
      cout << "Correct Answer: " << chemans3 << endl;
  } else if(chemans3 == guesschemans3){
          cout << endl;
      cout << "ACCURATE!\n" << endl;
  }
  if(chemans1 == guesschemans1 && chemans2 == guesschemans2 && chemans3 == guesschemans3){
              cout << endl;
    cout << "Your Score = 3/3" << endl;
    cout << "Excellent!" << endl;
  } else if(chemans1 == guesschemans1 && chemans2 == guesschemans2 && chemans3 != guesschemans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(chemans1 == guesschemans1 && chemans2 != guesschemans2 && chemans3 == guesschemans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(chemans1 != guesschemans1 && chemans2 == guesschemans2 && chemans3 == guesschemans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(chemans1 == guesschemans1 && chemans2 != guesschemans2 &&chemans3 != guesschemans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(chemans1 != guesschemans1 && chemans2 == guesschemans2 && chemans3 != guesschemans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(chemans1 != guesschemans1 && chemans2 != guesschemans2 && chemans3 == guesschemans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(chemans1 != guesschemans1 && chemans2 != guesschemans2 && chemans3 != guesschemans3){
            cout << endl;
     cout << "Your Score = 0/3" << endl;
     cout << "You can do better!" << endl;
  }
  break;
case 5:
    cout << "-------------PHYSICS----------" << endl;
     cout << endl;
    cout << "Answer the following questions correctly. Good Luck!" << endl;

  cout << "1. How many fundamental quantities are there?" << endl;
  cin >> guessphysans1;
  if(guessphysans1 != physans1){
            cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << physans1 << endl;
} else if(guessphysans1 == physans1){
        cout << endl;
      cout << "ACCURATE!\nNext Question" << endl;
   }
     cout << endl;
    cout << "2. If a horizontal force of 200N is just sufficient to start moving a body of mass 50kg along a wooden floor.\nCalculate the coefficient of friction (Take g = 10ms^-2)" <<  endl;
    cin >> guessphysans2;

      if(guessphysans2 != physans2){
                cout << endl;
      cout << "Incorrect" << endl;
      cout << "Correct Answer: " << physans2 << endl;
  } else if(guessphysans2 == physans2){
          cout << endl;
      cout << "ACCURATE!\nLast Question" << endl;
  }

    cin.ignore(2000, '\n');
   cout << "3. When an object is fully or partially immersed in a fluid, it experiences an Upthrust, which is equal to the weight of the liquid displaced is a popular law known as the ..." << endl;
   getline(cin, guessphysans3);
  if(physans3 != guessphysans3){
            cout << endl;
      cout << "Better Luck Next Time" << endl;
      cout << "Correct Answer: " << physans3 << endl;
  } else if(physans3 == guessphysans3){
          cout << endl;
      cout << "ACCURATE!\n" << endl;
  }
   if(physans1 == guessphysans1 && physans2 == guessphysans2 && physans3 == guessphysans3){
              cout << endl;
    cout << "Your Score = 3/3" << endl;
    cout << "Excellent!" << endl;
  } else if(physans1 == guessphysans1 && physans2 == guessphysans2 && physans3 != guessphysans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(physans1 == guessphysans1 && physans2 != guessphysans2 && physans3 == guessphysans3){
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(physans1 != guessphysans1 && physans2 == guessphysans2 && physans3 == guessphysans3){
            cout << endl;
     cout << "Your Score = 2/3" << endl;
     cout << "Well done!" << endl;
  } else if(physans1 == guessphysans1 && physans2 != guessphysans2 && physans3 != guessphysans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(physans1 != guessphysans1 && physans2 == guessphysans2 && physans3 != guessphysans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(physans1 != guessphysans1 && physans2 != guessphysans2 && physans3 == guessphysans3){
            cout << endl;
     cout << "Your Score = 1/3" << endl;
     cout <<"More room for Improvement!" << endl;
  } else if(physans1 != guessphysans1 && physans2 != guessphysans2 && physans3 != guessphysans3){
            cout << endl;
     cout << "Your Score = 0/3" << endl;
     cout << "You can do better!" << endl;
  }
  break;
}

return 0;
}
