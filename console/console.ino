// Ethan Buerck
// Bobby Love
// Ellery Johnsen
// February 15, 2023
// GNU GPLv3

// Libraries


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
  // Whack a Mole
  } else if (wam) {
    // WHACK A MOLE CODE
  }
  // Reset values for next iteration of loop.
  cm = ttt = wam = 0;
}
