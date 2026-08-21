
/* cocos2d::TextFieldTTF::canAttachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::canAttachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00f55d6c with catch @ 00f55db0 */
  plVar2 = *(long **)(this + 0x6a8);
  if (plVar2 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,this);
                    /* try { // try from 00f55dc4 to 01055e13 has its CatchHandler @ 00f55dc4
                       catch() { ... } // from try @ 00f55dc4 with catch @ 00f55dc4
                       catch() { ... } // from try @ 00f55e60 with catch @ 00f55dc4 */
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

