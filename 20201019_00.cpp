/*
  Rock > scissors
  Rock > Lizard.

  Scissors > paper
  Scissors > Lizard.

  Paper > rock
  Paper > Spock.

  Lizard > Spock.
  Lizard > Paper.

  Spock > Scissors.
  Spock > Rock.

Rock
Paper
Scissors
Lizard
Spock

  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";
  cout << "4) Lizard\n";
  cout << "5) Spock\n";


  */
  #include <iostream>
  #include <stdlib.h>
  using namespace std;

  int main() {

  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  string Tie = "Tie! \n";
  string userWon = "The user won! \n";
  string computerWon = "The computer won! \n";
  string computerDisplay;
  string userDisplay;

  cout << "====================\n";
  cout << "rock paper scissors lizard spock!\n";
  cout << "====================\n";

  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";
  cout << "4) Lizard\n";
  cout << "5) Spock\n";

  cout << "shoot! ";

  cin >> user;

    if (computer == 1){
    computerDisplay = (string) "Computer: Rock. \n";
  } else if (computer == 2){
    computerDisplay = (string) "Computer: Paper. \n";
  } else if (computer == 3){
    computerDisplay = (string) "Computer: Scissors. \n";
  } else if (computer == 4){
    computerDisplay = (string) "Computer: Lizard. \n";
  } else if (computer == 5){
    computerDisplay = (string) "Computer: Spock. \n";
  }

  if (user == 1){
  userDisplay = (string) "User: Rock. \n" ;
  } else if (user == 2){
  userDisplay = (string) "User: Paper. \n";
  } else if (user == 3){
  userDisplay = (string) "User: Scissors. \n";
  } else if (user == 4){
  userDisplay = (string) "User: Lizard. \n";
  } else if (user == 5){
  userDisplay = (string) "User: Spock. \n";
  }

  cout << computerDisplay;
  cout << userDisplay;

// user 5
// computer 1

    if (user == 1) {
  //start inside if 01
    if (computer == 1){
      cout << Tie;          // TIE
    } else if (computer == 2){
      cout << computerWon;  //COMPUTER
    } else if (computer == 3){
      cout << userWon;      //USER
    }  else if (computer == 4){
      // Rock > Lizard
      cout << userWon;
    } else if (computer == 5){
      // Rock < Spock
      cout << computerWon;
    }
    else {
      cout << "Something went wrong.";
    }
  //end inside if 01
  } else if (user == 2){
  //start inside if 02
    if (computer == 1){
      cout << userWon;
    } else if (computer == 2){
      cout << Tie;
    } else if (computer == 3){
      cout << computerWon;
    } else if (computer == 4){
      // Paper < Lizard
      cout << computerWon;
    } else if (computer == 5){
      // Paper > Spock.
      cout << userWon;
    } else {
      cout << "Something went wrong.";
    }
  //end inside if 02
  } else if (user == 3){
  //start inside if 03
    if (computer == 1){
      cout << computerWon;
    } else if (computer == 2){
      cout << userWon;
    } else if (computer == 3){
      cout << Tie;
    } else if (computer == 4){
        // Scissors > lizard
        cout << userWon;
    } else if (computer == 5){
      // Scissors < Spock
      cout << computerWon;
    } else {
      cout << "Something went wrong.";
    }
  //end inside if 03
  }
  else if (user == 4){
  //start inside if 04
    if (computer == 1){
      // lizard < Rock
      cout << computerWon;
    } else if (computer == 2){
      // lizard > Paper
        cout << userWon;
    } else if (computer == 3){
      // lizard < Scissors
      cout << computerWon;
    } else if (computer == 4){
      // lizard Lizard
      cout << Tie;
    } else if (computer == 5){
      // lizard > Spock
        cout << userWon;
    } else {
      cout << "Something went wrong.";
    }
  //end inside if 04
  }
  else if (user == 5){
  //start inside if 04
    if (computer == 1){
      // Spock > Rock
      cout << userWon;
    } else if (computer == 2){
     // Spock > Paper
      cout << computerWon;
    } else if (computer == 3){
     // Spock > Scissors
     cout << userWon;
    } else if (computer == 4){
      // Spock > Lizard
      cout << computerWon;
    } else if (computer == 5){
     // Spock Spock
        cout << Tie;
    } else {
      cout << "Something went wrong.";
    }
  //end inside if 05
  }
  else {
    cout << "Something went wrong.";
  }

  cout << endl;
  }