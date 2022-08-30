#include "DigiKeyboardPtBr.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(3000);
  DigiKeyboardPtBr.println("Notepad");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(5000);
  DigiKeyboardPtBr.println("Bom dia, voce foi hackeado :)");
}


void loop() {
  // put your main code here, to run repeatedly:
  
}
