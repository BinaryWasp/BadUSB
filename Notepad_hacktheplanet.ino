#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
DigiKeyboard.sendKeyStroke(0);
  
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("notepad.exe");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.println("HACK THE PLANET!!!");

}
