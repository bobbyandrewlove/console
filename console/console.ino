// Ethan Buerck
// Bobby Love
// Ellery Johnsen
// February 15, 2023
// GNU GPLv3

// Libraries


// Function Prototypes
void newPieceCheck(void);
int ticTacToeCheck(void);

// Constants
// Pin 0 for Color Mixer button.
const int cmb = 0;
// Pin 1 for Tic Tac Toe button.
const int tttb = 1;
// Pin 2 for Whack a Mole button.
const int wamb = 2;
// Pins 3 to 11 for Tic Tac Toe grid.
const int zz = 3;
const int zo = 4;
const int zt = 5;
const int oz = 6;
const int oo = 7;
const int ot = 8;
const int tz = 9;
const int to = 10;
const int tt = 11;

// Variables
int cm = 0;
int ttt = 0;
int wam = 0;
// Initialize all indices to 0.
int board[3][3] = {0};   

// Setup Function
void setup() {
  // Set the three game buttons as input.
  pinMode(cmb, INPUT);
  pinMode(tttb, INPUT);
  pinMode(wamb, INPUT);
  // For terminal diagnostic purposes.
  Serial.begin(9600);
}

// Main Function
void loop() {
  cm = digitalRead(cmb);
  ttt = digitalRead(tttb);
  wam = digitalRead(wamb);
  // Color Mixer
  if (cm) {
    // COLOR MIXER CODE
  // Tic Tac Toe
  } else if (ttt) {
    // TIC TAC TOE CODE 
    do {
      // Check the game board for new pieces.
      newPieceCheck();
      // Check the game board for a victory.
      int result = ticTacToeCheck();
      if (result == 1) {
        // Print that blue team won.
        break;
      } else if (result = 2) {
        // Print that white team won.
        break;
      } else {
        continue;
      }
    } while (1);   
  // Whack a Mole
  } else if (wam) {
    // WHACK A MOLE CODE
  }
  // Reset values for next iteration of loop.
  cm = ttt = wam = 0;
}

// Function Definitions
// Checks for new pieces on the gameboard.
void newPieceCheck(void) {
  do {
    int curr_pin = 2;
    for (int i = 0; i < 3; ++i) {
      ++curr_pin;
      for (int j = 0; j < 3; ++j) {
        // IF BOARD HAS CHANGED, UPDATE THE ARRAY AND STOP LOOPING.
        if (board[i][j] == 0 && digitalRead(curr_pin) != 0) {
          board[i][j] == digitalRead(curr_pin);
          goto done;        
        }
        ++curr_pin;
      }
    }
  // IF BOARD IS THE SAME CONTINUE LOOPING.
  } while (1);
  done:
  return;
}

// Checks for tic tac toe.
int ticTacToeCheck(void) {
  // Check for all 8 Tic Tac Toe possibilities.
  if (board[0][0] == board[0][1] == board[0][2]) {
    if (board[0][0] != 0) {
      // Return the value of the victor.
      return board[0][0];
    }
  }
  if (board[1][0] == board[1][1] == board[1][2]) {
    if (board[1][0] != 0) {
      return board[1][0];
    }   
  }
  if (board[2][0] == board[2][1] == board[2][2]) {
    if (board[2][0] != 0) {
      return board[2][0];
    }
  }
  if (board[0][0] == board[1][0] == board[2][0]) {
    if (board[0][0] != 0) {
      return board[0][1];
    }    
  }
  if (board[0][1] == board[1][1] == board[2][1]) {
    if (board[0][1] != 0) {
      return board[0][1];
    }    
  }
  if (board[0][2] == board[1][2] == board[2][2]) {
    if (board[0][2] != 0) {
      return board[0][1];
    }    
  }
  if (board[0][0] == board[1][1] == board[2][2]) {
    if (board[0][0] != 0) {
      return board[0][0];
    }
  }
  if (board[0][2] == board [1][1] == board[2][0]) {
    if (board[0][2] != 0) {
      return board[0][2];
    }
  }
  // If no one has won yet, return 0.
  return 0;
}
