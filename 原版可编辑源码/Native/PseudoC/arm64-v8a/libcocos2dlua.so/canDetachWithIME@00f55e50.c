
/* non-virtual thunk to cocos2d::TextFieldTTF::canDetachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::canDetachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
                    /* try { // try from 00f55e60 to 01055f03 has its CatchHandler @ 00f55dc4 */
  if (plVar2 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 00f55e14 with catch @ 00f55e70 */
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,this + -0x6a0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

