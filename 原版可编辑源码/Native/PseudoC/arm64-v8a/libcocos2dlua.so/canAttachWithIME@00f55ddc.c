
/* non-virtual thunk to cocos2d::TextFieldTTF::canAttachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::canAttachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,this + -0x6a0);
    uVar1 = uVar1 ^ 1;
  }
                    /* try { // try from 00f55e14 to 01055e5f has its CatchHandler @ 00f55e70 */
  return uVar1 & 1;
}

