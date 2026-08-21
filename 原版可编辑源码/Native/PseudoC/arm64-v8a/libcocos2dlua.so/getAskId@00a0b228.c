
/* universe::network::GuoPengFei::getAskId() const */

void __thiscall universe::network::GuoPengFei::getAskId(GuoPengFei *this)

{
  char *pcVar1;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
                    /* try { // try from 00a0b238 to 00b0b287 has its CatchHandler @ 00a0b238
                       catch() { ... } // from try @ 00a0b238 with catch @ 00a0b238
                       catch() { ... } // from try @ 00a0b2dc with catch @ 00a0b238
                       catch() { ... } // from try @ 00a0b320 with catch @ 00a0b238 */
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,0x12f8efd);
  }
  DAT_0178236c = DAT_0178236c + 1;
  return;
}

