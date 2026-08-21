
/* cocos2d::TextFieldTTF::canDetachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::canDetachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x6a8);
  if (plVar2 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,this);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

