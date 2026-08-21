
/* universe::network::GuoPengFei::setNotAutoSetup() */

void __thiscall universe::network::GuoPengFei::setNotAutoSetup(GuoPengFei *this)

{
  char *pcVar1;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f8f57);
  }
  this[0x459] = (GuoPengFei)0x0;
  return;
}

