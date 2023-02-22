// Ethan Buerck
// Bobby Love
// Ellery Johnsen
// February 15, 2023
// GNU GPLv3

// Libraries


// Function Prototypes
int newPieceCheck(int *[][3]);
int ticTacToeCheck(int [][3]);

// Constants
// Pin 0 for Color Mixer button.
const int cmb = 0;
// Pin 1 for Tic Tac Toe button.
const int tttb = 1;
// Pin 2 for Whack a Mole button.
const int wamb = 2;

// Variables
int cm = 0;
int ttt = 0;
int wam = 0;

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
    // Initialize all indices to 0.
    int board[3][3] = {0};    
    do {
      newPieceCheck()        
    } while (1);
  // Whack a Mole
  } else if (wam) {
    // WHACK A MOLE CODE
  }
  // Reset values for next iteration of loop.
  cm = ttt = wam = 0;
}

// Function Definitions
int ticTacToeCheck(int board[][3]) {
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
