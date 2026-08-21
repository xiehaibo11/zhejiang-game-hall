
/* universe::network::GuoPengFei::isConnect() const */

bool __thiscall universe::network::GuoPengFei::isConnect(GuoPengFei *this)

{
  char *pcVar1;
  
                    /* try { // try from 00a09980 to 00b099f3 has its CatchHandler @ 00a0990c */
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei: delete 10");
  }
  return this[0x10] == (GuoPengFei)0x2;
}

